H, M =[int(i) for i in input().split()]
C = int(input())

if ((0 <= H <= 23) and (0 <= M <= 59)) and (0 <= C <= 1000):
    if M+C >= 60:
        if H == 23:
            print((((M+C)//60)-1)%24, (M+C)%60)
        else:
            print((H+((M+C)//60))%24, (M+C)%60)
    else:
        print(H, M+C)