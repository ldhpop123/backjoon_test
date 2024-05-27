num = int(input())

if (4 <= num <= 1000) and (num%4==0):
    for i in range(num//4):
        print('long', end = ' ')
    print('int')