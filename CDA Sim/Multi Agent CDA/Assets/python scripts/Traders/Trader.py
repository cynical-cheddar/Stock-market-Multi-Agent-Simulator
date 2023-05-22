class Trader:
    
    def __init__(self, id) -> None:
        self.id = id
        self.trader_type = "generic"
        print("generic trader created with id: " + str(id) + ". I have no behaviour")

    def id_check(self):
        return f"{self.id} is of type {self.trader_type}"