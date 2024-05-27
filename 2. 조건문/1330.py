num1, num2 = [int(i) for i in input().split()]

if (-10000 <= num1,num2 <= 10000):
    if num1 < num2 :
        print('<')
    elif num1 > num2:
        print('>')
    elif num1 == num2:
        print('==')