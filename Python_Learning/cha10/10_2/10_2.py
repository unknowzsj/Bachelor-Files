filename = r"Python-Learning\cha10\10_2\learning_python.txt"

with open(filename) as files:
    for line in files:
        print(line.replace('python', 'C').rstrip())
