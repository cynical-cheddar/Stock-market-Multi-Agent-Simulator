import enum

# MESSAGE HEADER 1
class MessageType(enum.IntEnum):
    Command = 0
    Data = 1
    Request = 2

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


class StatusAcknowledgement():
    def __init__(self, setup, active):
        self.setup = setup
        self.active = active


class Message():
    def __init__(self, messageType, pid, dataString):
        self.messageType = messageType
        self.source_pid = pid
        self.target_pid = pid
        self.data = dataString

class OutgoingRequestMessage(Message):
    def __init__(self, messageType, pid, dataString, requestType):
        Message.__init__(self, messageType, pid, dataString)
        self.requestType = requestType

