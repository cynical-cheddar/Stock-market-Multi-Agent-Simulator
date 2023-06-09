import enum

# MESSAGE HEADER 1
class MessageType(enum.IntEnum):
    Command = 0
    Data = 1
    Request = 2
    Acknowledgement = 3
    No_message = -1

# MESSAGE HEADER 2
class CommandType(enum.IntEnum):
    LaunchTrader = 0
    DeactivateTrader = 1
    RequestStatus = 2
    RequestTraderStatus = 3
    RequestAllTradersStatus = 4

class DataType(enum.IntEnum):
    LimitOrderBook = 0

class RequestType(enum.IntEnum):
    ActiveStatus = 0
    LimitOrderBook = 1
    BuyOrder = 2
    SellOrder = 3

class OrderType(enum.IntEnum):
    Bid = 0
    Ask = 1
    


class StatusAcknowledgement():
    def __init__(self, setup, active):
        self.setup = setup
        self.active = active

class OrderRequest():
    def __init__(self, orderType, quantity, unit_price):
        self.orderType = orderType
        self.quantity = quantity
        self.unit_price = unit_price




class Message():
    def __init__(self, messageType, source_pid, target_pid, source_tid, target_tid, dataString):
        self.messageType = messageType
        self.source_pid = source_pid
        self.target_pid = target_pid
        self.source_tid = source_tid
        self.target_tid = target_tid
        self.data = dataString

class OutgoingRequestMessage(Message):
    def __init__(self, messageType, source_pid, target_pid, source_tid, target_tid, dataString, requestType):
        Message.__init__(self, messageType, source_pid, target_pid, source_tid, target_tid, dataString)
        self.requestType = requestType

class IncomingAcknowledgementMessage(Message):
    def __init__(self, messageType, source_pid, target_pid, source_tid, target_tid, dataString):
        Message.__init__(self, messageType, source_pid, target_pid, source_tid, target_tid, dataString)