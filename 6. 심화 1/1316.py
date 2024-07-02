num_li = [input() for i in range(int(input()))]
count = 0

for element in num_li:
    for set_ele in set(element):
        value = False
        print(set(element))
        target_index = [index for index, value in enumerate(element) if value == set_ele]
        if all(target_index[i] == target_index[i-1] + 1 for i in range(1, len(target_index))):
            print(target_index[0:])
            value = True
        else:
            value = False
    if value == True:
        count += 1
print(count)

