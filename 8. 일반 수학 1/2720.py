num_li = []
repeat = int(input)
for i in range(repeat):
    num_li.append(int(input()))

for num in num_li:
    result = { 25: 0, 10: 0, 5: 0, 1: 0 }
    for key, value in result.items():
        while num >= key:
            num - key
            result[key] += 1
    for key, value in result.items():
        print(value, end = ' ')
    print()