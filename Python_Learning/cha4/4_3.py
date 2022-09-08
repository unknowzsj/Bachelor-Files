# 4_3
for i in range(1, 21):
    print(i)

# 4_4
million = list(range(1, 1000001))

for j in million:
    print(j)

# 4_5
million2 = list(range(1, 1000001))

min1 = min(million2)
max1 = max(million2)
sum1 = sum(million2)

print(min1 + ' ' + max1 + '' + sum1)

# 4_6
jishu = list(range(1, 20, 2))

for m in jishu:
    print(m)

# 4_7
list3 = list(range(3, 31, 3))

for n in list3:
    print(n)

# 4_9
list_3 = [value**3 for value in range(1, 10)]

print(list_3)
