import sys

num = int(sys.stdin.readline())
li = [int(i) for i in sys.stdin.readline().split()]

if (len(li) == num) and (1 <= num <= 1000000):        
    print(min(li), max(li))