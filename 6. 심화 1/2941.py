string = input()
croatia = ['dz=', 'c=', 'c-', 'd-', 'lj', 'nj', 's=', 'z=']
count = 0


if len(string) <= 100:
    for repeat in range(len(string)):
        for croa in croatia:
            if croa in string:
                string = string[:string.index(croa)] + ' ' + string[string.index(croa)+len(croa):]
                count += 1
    for element in string:
        if (not element == ' ') and (element.isalpha()):
            count += 1
    print(count)
