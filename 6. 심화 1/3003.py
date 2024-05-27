result = [1, 1, 2, 2, 2, 8]
li = [int(i) for i in input().split()]

for i in range(6):
    result[i] = result[i] - li[i]
for i in result:
    print(i, end = ' ')