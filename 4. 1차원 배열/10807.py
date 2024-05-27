import sys

num = int(sys.stdin.readline())
li = [int(i) for i in sys.stdin.readline().split()]
value = int(sys.stdin.readline())
result = 0

if len(li) == num:
    for i in range(num):
        if li[i] == value:
            result += 1
print(result)
