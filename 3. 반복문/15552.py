import sys

for i in range(int(sys.stdin.readline())):
    num = [int(i) for i in sys.stdin.readline().split()]
    print(num[0]+num[1])