filename = r"Python-Learning\cha10\10_3\guest.txt"

with open(filename, 'a') as file_object:
    name = input('write your name: ')
    file_object.write(name)
