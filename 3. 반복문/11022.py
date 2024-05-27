import sys

for i in range(1, int(sys.stdin.readline())+1):
    A, B = [int(i) for i in sys.stdin.readline().split()]
    C = (A+B)
    print(f'Case #{i}: {A} + {B} = {C}')