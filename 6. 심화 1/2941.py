string = input()
croatia = ['dz=', 'c=', 'c-', 'd-', 'lj', 'nj', 's=', 'z=']
count = 0

for croa in croatia:
    while croa in string:
        string = string[:string.index(croa)] + ' ' + string[string.index(croa)+len(croa):]
        count += 1
for element in string:
    if (not element == ' ' ) and (element.isalpha()):
        count += 1

print(count)