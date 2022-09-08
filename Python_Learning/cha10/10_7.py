while True:
    num1 = input("input first number('q' to quit): ")
    num2 = input("input second number('q' to quit): ")
    if (num1 == 'q') or (num2 == 'q'):
        break

    try:
        sum = int(num1) + int(num2)
    except ValueError:
        print("inputs are not numbers!")
    else:
        print("sum of two number is: " + str(sum))
