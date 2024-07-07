import sys
result = 0

formation, num = sys.stdin.readline().strip().split()
num = int(num)
for index in range(len(formation)):
    if formation[index].isalpha():
        result += (ord(formation[index].upper())-55)*(num**(len(formation)-index-1))
    else:
        result += int(formation[index])*(num**(len(formation)-index-1))
print(result)