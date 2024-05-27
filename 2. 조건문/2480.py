num1, num2, num3 = [int(i) for i in input().split()]

if (1 <= num1, num2, num3 <= 6):
    num_li = [num1, num2, num3]
    if num1 == num2:
        if num2 == num3:
            print(10000+(num3)*1000)
        else:
            print(1000+(num1)*100)
    elif num1 == num3:
        if num3 == num2:
            print(10000+(num2)*1000)
        else:
            print(1000+(num1)*100)
    elif num2 == num3:
        if num3 == num1:
            print(10000+(num1)*1000)
        else:
            print(1000+(num2)*100)
    else:
        print(max(num_li)*100)