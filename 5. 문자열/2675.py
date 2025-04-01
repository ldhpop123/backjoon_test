T = int(input())

if 1 <= T <= 1000:
    for i in range(T):
        P = ''
        R, S = input().split()
        if (1 <= int(R) <= 8) and (1 <= len(S) <= 20):
            for o in list(S):
                for p in range(int(R)):
                    P += o
        print(P)
