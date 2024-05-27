import sys

while True:
    try:
        num = [int(i) for i in sys.stdin.readline().split()]
        print(num[0] + num[1])
    except:
        break