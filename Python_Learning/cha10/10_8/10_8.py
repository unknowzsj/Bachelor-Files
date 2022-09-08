dogfile = r"Python-Learning\cha10\10_8\dogs.txt"
catfile = r"Python-Learning\cha10\10_8\cats.txt"

try:
    with open(dogfile) as dogfile_object:
        content1 = dogfile_object.read()
        print(content1.rstrip())

    with open(catfile) as catfiel_object:
        content2 = catfiel_object.read()
        print(content2.rstrip())
except FileNotFoundError:
    print("the file can not find!")
    '''pass'''  # 10_9 出现错误时没有反应
