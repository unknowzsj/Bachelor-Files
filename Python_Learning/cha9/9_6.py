class Restaurant():

    def __init__(self, name, type1):
        self.restaurant_name = name
        self.cuisine_type = type1
        self.number_served = 0

    def describe_restaurant(self):
        print("the restaurant's name is " + self.restaurant_name)
        print("the restaurant's type is " + self.cuisine_type)

    def open_restaurant(self):
        print("the restaurant is opening!")

    def set_number_served(self, number):
        self.number_served = number

    def increment_number_served(self, max):
        self.number_served += 1
        if self.number_served > max:
            print("number_served get to the max!")
        else:
            print("we can service more people!")


class IceCream(Restaurant):

    def __init__(self, name, type1):
        super().__init__(name, type1)
        self.flavors = ['qqq', 'www', 'eee']

    def putout(self):
        print(self.flavors)


ice = IceCream('111', '222')
ice.putout()
ice.describe_restaurant()
