a, b, c = [int(i) for i in input().split()]

if (2 <= a,b,c <= 10000):
    print((a+b)%c)
    print(((a%c)+(b%c))%c)
    print((a*b)%c)
    print(((a%c)*(b%c))%c)