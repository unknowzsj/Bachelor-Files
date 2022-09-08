# 尝试的时候，如果出现其他类型的错误，就改变except的值
num1 = input("input first number: ")
num2 = input("input second number: ")

try:
    sum = int(num1) + int(num2)
except ValueError:
    print("inputs are not numbers!")
else:
    print("sum of two number is: " + str(sum))
