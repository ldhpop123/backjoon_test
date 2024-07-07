import sys
target, base = [int(i) for i in sys.stdin.readline().strip().split()]
result = []

while target >= base:
    if (target%base) < 10:
        result.append(target%base)
    else:
        result.append(chr((target%base)+55))
    target //= base

if target < 10:
    result.append(target)
else:
    result.append(chr(target+55))

for i in reversed(result):
    print(i, end = '')