# 比较时不区分大小写，将其全部转换成大写或小写再比较
current_users = ['q', 'w', 'e', 'r', 't']
new_users = ['q', 'w', 'a', 's', 'd']

current_users_lower = [i.lower for i in current_users]
new_users_lower = [i.lower for i in new_users]

for user in new_users_lower:
    if user in current_users_lower:
        print('please input a new user_name')
    else:
        print('this name is not used')
