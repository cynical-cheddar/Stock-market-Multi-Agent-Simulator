import zmq
import CommunicationClasses as comms
import MessageConstants as msg_consts
import time
import json
import threading



class KeyboardThread(threading.Thread):

    def __init__(self, input_cbk = None, name='keyboard-input-thread'):
        self.input_cbk = input_cbk
        super(KeyboardThread, self).__init__(name=name)
        self.start()

    def run(self):
        while True:
            self.input_cbk(input()) #waits to get input + Return





class Trader:


    # ADD TRADER ID (not pid)
    def __init__(self, pid, name, tid):
        self.pid = pid
        self.tid = tid
        self.trader_name = name
        self.setup = False
        self.active = False
        print(self.trader_name + " created with pid: " + str(self.pid))

        print("starting socket server connection")
        self.context = zmq.Context()
        print('going to create sub socket client')
        self.socket_sub = self.context.socket(zmq.SUB)
        self.socket_sub.connect("tcp://localhost:5555")
        self.socket_sub.subscribe(self.pid)
        print('sub client_socket_created')

        print('going to create pub socket client')
        self.socket_pub = self.context.socket(zmq.PUB)
        self.socket_pub.connect("tcp://localhost:5556")
        print('pub client_socket_created')

        self.lob = "empty"

    def id_check(self):
        return f"{self.id} is of type {self.trader_name}"
    

    "Send setup true flag to unity server. Block until acknowledgement is gotten. Return true or false. Not good practice to use"
    def SetupTrader_Blocking(self, set_value, timeout_duration):
        self.setup = set_value
        status_acknowledgement = comms.StatusAcknowledgement(self.setup, self.active).__dict__
        setup_successful_message = json.dumps(comms.OutgoingRequestMessage(messageType= comms.MessageType.Request, source_pid=self.pid, target_pid=msg_consts.UNITY_PID, source_tid=self.tid, target_tid="", dataString=json.dumps(status_acknowledgement), requestType= comms.RequestType.ActiveStatus).__dict__)
        setup_successful_message = (msg_consts.ZMQ_SERVER_TOPIC + "@" + setup_successful_message)
        time.sleep(0.5)
        self.socket_pub.send_string(setup_successful_message)
        print(setup_successful_message)

        # busywait for confirmation
        start_time = time.time()
        while(True):
            if(self.socket_sub.poll(timeout=0.2)):
                #  Get the reply.
                message = self.socket_sub.recv_string()
                topic, actual_message = message.split("@")
                msg_dict = json.loads(actual_message)
                if(msg_dict['messageType'] == comms.MessageType.Acknowledgement):
                    print(f"Received reply {topic} [ {actual_message} ]")
                    return True

            else:
                cur_time = time.time()
                if(cur_time - start_time > timeout_duration):
                    return False
                
                
    
    def SetupTrader(self, set_value):
        self.setup = set_value
        status_acknowledgement = comms.StatusAcknowledgement(self.setup, self.active).__dict__
        setup_successful_message = json.dumps(comms.OutgoingRequestMessage(messageType= comms.MessageType.Request, source_pid=self.pid, target_pid=msg_consts.UNITY_PID, dataString=json.dumps(status_acknowledgement), requestType= comms.RequestType.ActiveStatus).__dict__)
        setup_successful_message = (msg_consts.ZMQ_SERVER_TOPIC + "@" + setup_successful_message)
        self.socket_pub.send_string(setup_successful_message)
    

    def ActivateTrader(self, set_value):
        self.active = set_value
        self.setup = set_value
        status_acknowledgement = comms.StatusAcknowledgement(self.setup, self.active).__dict__
        setup_successful_message = json.dumps(comms.OutgoingRequestMessage(messageType= comms.MessageType.Request, source_pid=self.pid, target_pid=msg_consts.UNITY_PID, dataString=json.dumps(status_acknowledgement), requestType= comms.RequestType.ActiveStatus).__dict__)
        setup_successful_message = (msg_consts.ZMQ_SERVER_TOPIC + "@" + setup_successful_message)
        self.socket_pub.send_string(setup_successful_message)


    def UpdateLOBCopy(self, simplified_lob_dict):
        print("Update LOB: " + str(simplified_lob_dict))
        # should recieve data similar to this:
        #public_data={}
        #    public_data['time']=time
        #    public_data['bids']={'best':self.bids.best_price,
        #                         'worst':self.bids.worstprice,
        #                         'n': self.bids.n_orders,
        #                         'lob':self.bids.lob_anon}
        #    public_data['asks']={'best':self.asks.best_price,
        #                         'worst':self.bids.worstprice,
        #                         'n': self.asks.n_orders,
        #                         'lob':self.asks.lob_anon}
        pass

        


    def PollForMessages(self):
        if(self.socket_sub.poll(timeout=0.1)):
            #  Get the reply.
            message = self.socket_sub.recv_string()
            topic, actual_message = message.split("@")
            msg_dict = json.loads(actual_message)

            # check for acknowledgements
            if(msg_dict['messageType'] == comms.MessageType.Acknowledgement):
                print(f"Received reply {topic} [ {actual_message} ]")
                return comms.MessageType.Acknowledgement
            # check for data
            if(msg_dict['messageType'] == comms.MessageType.Data):
                # check for LOB
                if(msg_dict['dataType'] == comms.DataType.LimitOrderBook):
                    # data contains simplified LOB. update our current LOB with it
                    self.UpdateLOBCopy(json.loads(msg_dict['data']))
                return comms.MessageType.Data
            return True
        else:
            return comms.MessageType.No_message

    def RequestLOB(self):
        lob_request = json.dumps(comms.OutgoingRequestMessage(messageType= comms.MessageType.Request, source_pid=self.pid, target_pid=msg_consts.UNITY_PID, source_tid=self.tid, target_tid="",dataString="null", requestType= comms.RequestType.LimitOrderBook).__dict__)
        lob_request = (msg_consts.ZMQ_SERVER_TOPIC + "@" + lob_request)
        self.socket_pub.send_string(lob_request)

    def PlaceBuyOrder(self, quantity, unit_price):
        orderRequest_data_dict = comms.OrderRequest(orderType=comms.OrderType.Bid, quantity=quantity, unit_price=unit_price).__dict__
        order_request = json.dumps(comms.OutgoingRequestMessage(messageType= comms.MessageType.Request, source_pid=self.pid, target_pid=msg_consts.UNITY_PID,source_tid=self.tid, target_tid="", dataString=json.dumps(orderRequest_data_dict), requestType= comms.RequestType.BuyOrder).__dict__)
        order_request = (msg_consts.ZMQ_SERVER_TOPIC + "@" + order_request)
        self.socket_pub.send_string(order_request)
        pass

    def PlaceSellOrder(self, quantity, unit_price):
        orderRequest_data_dict = comms.OrderRequest(orderType=comms.OrderType.Ask, quantity=quantity, unit_price=unit_price).__dict__
        order_request = json.dumps(comms.OutgoingRequestMessage(messageType= comms.MessageType.Request, source_pid=self.pid, target_pid=msg_consts.UNITY_PID, source_tid=self.tid, target_tid="",  dataString=json.dumps(orderRequest_data_dict), requestType= comms.RequestType.SellOrder).__dict__)
        order_request = (msg_consts.ZMQ_SERVER_TOPIC + "@" + order_request)
        self.socket_pub.send_string(order_request)
        pass




                