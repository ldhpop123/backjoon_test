import sys

li_max, num = [int(i) for i in sys.stdin.readline().split()]
li  = [int(i) for i in sys.stdin.readline().split()]
result = []

for i in range(li_max):
    if li[i] < num:
        print(li[i], end = ' ')
