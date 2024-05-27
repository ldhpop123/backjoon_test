N, M = [int(i) for i in input().split()]

result = []

for i in range(1, N+1):
    result.append(i)

for i in range(M):
    num1, num2 = [int(i) for i in input().split()]
    result[num2-1], result[num1-1] = result[num1-1], result[num2-1]

for i in result:
    print(i, end = ' ')
