# 5_8
users = ['admin', 'www', 'eee', 'rrr', 'ttt']

for user in users:
    if user == 'admin':
        print('hello admin, would you like to see a status report')
    else:
        print('hello ' + user + ',thank you for logging in again')

# 5_9
'''删除所有的列表元素'''
del users[:]

if users:
    for user in users:
        if user == 'admin':
            print('hello admin, would you like to see a status report')
        else:
            print('hello ' + user + ',thank you for logging in again')
else:
    print('we need to find some users!')
