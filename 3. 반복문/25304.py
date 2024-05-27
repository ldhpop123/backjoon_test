value = int(input())
result = 0

for i in range(int(input())):
    li = [int(i) for i in input().split()]
    result += li[0]*li[1]
if value == result:
    print('Yes')
else:
    print('No')