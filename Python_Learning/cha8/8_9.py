magicians = ['qqq', 'www', 'eee']


# 8_9
def show_magicians(magicians_list):
    for magician in magicians_list:
        print(magician)


show_magicians(magicians)


# 8_10
def make_great(magician_list):
    for i in range(0, 3):
        magician_list[i] += ' the great'


make_great(magicians)
print(magicians)


# 8_11
def make_great1(magicians_list1):
    for j in range(0, 3):
        magicians_list1[j] += ' the good'

    print(magicians_list1)


make_great1(magicians[:])
print(magicians)


# range() 用法
# range(start, stop, step)
# range(0, 10, 5) -->  0,5,10(取不到) 0-9 每次加5
# range(3) --> 0-2 默认+1
# range(0,3) --> 0-2 默认+1
# #
