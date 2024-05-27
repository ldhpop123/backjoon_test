N, M = [int(i) for i in input().split()]

result = []

for i in range(N):
    result.append(0)

if (1 <= N <= 100) and (1 <= M <= 100):
    for i in range(M):
        num1, num2, value = [int(i) for i in input().split()]
        for o in range(num1-1, num2):
            result[o] = value

for i in result:
    print(i, end = ' ')