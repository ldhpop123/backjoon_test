import sys

num = int(sys.stdin.readline())

if 1 <= num <= 100:
    for i in range(1, num+1):
        print('*'*i)