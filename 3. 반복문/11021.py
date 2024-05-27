import sys

for i in range(1, int(sys.stdin.readline())+1):
    num = [int(i) for i in sys.stdin.readline().split()]
    print(f'Case #{i}: {num[0] + num[1]}')
