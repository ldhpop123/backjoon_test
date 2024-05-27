H, M = [int(i) for i in input().split()]

if (0 <= H <= 23) and (0 <= M <= 59):
    if H == 0:
        if (M < 45):
            print(23, 60+M-45)
        else:
            print(0, M-45)
    else: 
        if (M < 45):
            print(H-1, 60+M-45)
        else:
            print(H, M-45)