import json

filename = r"Python-Learning\cha10\10_11\numbers.json"


def input_number(filename):
    number = input("input your favorite number: ")
    with open(filename, 'a') as file_object:
        json.dump(number, file_object)


def output_number(filename):
    with open(filename) as fil_object:
        content = fil_object.read()
        print("I know your favorite number! It's " + content)


input_number(filename)
output_number(filename)
