num_li = [input() for i in range(int(input()))]
values = []
count = 0

for element in num_li:
    for set_ele in set(element):
        target_index = [index for index, value in enumerate(element) if value == set_ele]
        if len(target_index) == 1:
            values.append(True)
        else:
            for value in (target_index[i] == target_index[i-1] + 1 for i in range(1, len(target_index))):
                values.append(value)
    if all(values):
        count += 1
    values = []
print(count)

