n = int(input())

for i in range(1, n+1):
    print(f'{" "*(n-i)}{"*"*(2*i-1)}')
for i in reversed(range(1, n)):
    print(f'{" "*(n-i)}{"*"*(2*i-1)}')