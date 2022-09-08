filename = r"Python-Learning\cha10\10_4\guest_book.txt"

with open(filename, 'a') as file_object:
    name = ''
    while name != 'q':
        name = input("write down your name('q' to quit): ")
        if name != 'q':
            print("welcome, " + name)
            file_object.write(name + '\n')
