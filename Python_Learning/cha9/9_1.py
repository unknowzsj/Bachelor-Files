# 9_1
class Restaurant():

    def __init__(self, name, type1):
        self.restaurant_name = name
        self.cuisine_type = type1

    def describe_restaurant(self):
        print("the restaurant's name is " + self.restaurant_name)
        print("the restaurant's type is " + self.cuisine_type)

    def open_restaurant(self):
        print("the restaurant is opening!")


restaurant = Restaurant('qqq', 'www')
print('qqq,' + ' www')
restaurant.open_restaurant()
restaurant.describe_restaurant()

# 9_2
restaurant1 = Restaurant('aaa', 'aaa')
restaurant1.describe_restaurant()

restaurant2 = Restaurant('sss', 'sss')
restaurant2.describe_restaurant()

restaurant3 = Restaurant('ddd', 'ddd')
restaurant3.describe_restaurant()
