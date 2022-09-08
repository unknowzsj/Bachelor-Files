# 8_7
def make_album(singer, album, number=''):
    if number == '':
        re = {
            'singer': singer,
            'album': album,
        }
    else:
        re = {
            'singer': singer,
            'album': album,
            'number': number,
        }
    return re


message1 = make_album('qqq', 'qqq')
message2 = make_album('www', 'www', '10')
print(message1)
print(message2)


# 8_8
active = True
while active:
    in_singer = input("write down singer's name: ")
    in_album = input("write down album's name: ")
    in_number = input("write down number of songs(if unknown, input 'enter): ")
    next_one = input("write 'c' to continue, 'q' to quite: ")

    message3 = make_album(in_singer, in_album, in_number)
    print(message3)

    if next_one == 'q':
        active = False
