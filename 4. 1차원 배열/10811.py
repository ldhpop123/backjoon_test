N, M = [int(i) for i in input().split()]

result = []

if (1 <= N  <= 100) and (1 <= M <= 100):
    for i in range(1, N+1):
        result.append(i)
    for i in range(M):
        num1, num2 = [int(i) for i in input().split()]
        result[num1-1:num2] = reversed(result[num1-1:num2])
    for i in result:
        print(i, end = ' ')