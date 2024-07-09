num = int(input())

result = 0 
level = 1
while num > 0:
    num -= level
    result += 1
    level = 6 * result
print(result)