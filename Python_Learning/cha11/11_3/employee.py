class Employee():

    def __init__(self, first_name, last_name, money):
        self.first_name = first_name
        self.last_name = last_name
        self.money = money

    def give_raise(self, raise_money=5000):
        self.money += raise_money
