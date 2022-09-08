# 当使用绝对路径时要在路径前面加 r 提示进行转义
'''相对路径(relative path)'''
filename1 = r"Python-Learning\cha10\10_1\learning_python.txt"
'''绝对路径(path)'''
filename2 = r"C:\Users\unknowzsj\python_code\Python-Learning\cha10\10_1\learning_python.txt"

with open(filename1) as file_object:
    content1 = file_object.read()
    print(content1)

    for line in file_object:
        print(line.rstrip())

    content2 = file_object.readlines()

for line2 in content2:
    print(line2)
