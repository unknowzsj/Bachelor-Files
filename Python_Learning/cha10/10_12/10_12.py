import json

filename = r"Python-Learning\cha10\10_12\numbers.json"


def fav_number(filename):
    with open(filename, 'r+') as file_object:
        numbers = file_object.readlines()
        if len(numbers) == 0:
            number = input("input your favorite number: ")
            json.dump(number, file_object)
        else:
            print("your favorite number is: " + numbers[-1])


fav_number(filename)
