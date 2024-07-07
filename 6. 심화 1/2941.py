string = input()
<<<<<<< HEAD
<<<<<<< HEAD
list_string = []
croatia = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
=======
>>>>>>> 07029c4efeb6747a0fdb1d4d75d8d7f6f9d5c7e1
=======
>>>>>>> 07029c4efeb6747a0fdb1d4d75d8d7f6f9d5c7e1
croatia = ['dz=', 'c=', 'c-', 'd-', 'lj', 'nj', 's=', 'z=']
count = 0

for croa in croatia:
    while croa in string:
        string = string[:string.index(croa)] + ' ' + string[string.index(croa)+len(croa):]
        count += 1
for element in string:
    if (not element == ' ' ) and (element.isalpha()):
        count += 1

<<<<<<< HEAD
<<<<<<< HEAD
list_string = list(string)

while True:
    print(list_string, '출발')
    print(string, '출발')
    for croa in croatia: # 크로아티아에서 i로 하나씩 가져옴
        if croa in string: # 만약 string 안에 i가 있다면 실행
            targets = []
            for target_range in range(len(string)):
                if string[target_range] == croa[0]:
                    targets.append(target_range)
            for target in targets:
                if len(croa) == 2:
                    if string[target+1] == croa[1]:
                        count += 1
                        for del_index in range(target, target+2):
                            list_string[del_index] = ' '
                elif croa == 'dz=':
                    if string[target+1] == croa[1] and string[target+2] == croa[2]:
                        count += 1
                        for del_index in range(target, target+3):
                            list_string[del_index] = ' '
    string = ''
    for i in list_string:
        string += i
    for space in list_string:
        if space != ' ':
if len(string) <= 100:
    for repeat in range(len(string)):
        for croa in croatia:
            if croa in string:
                string = string[:string.index(croa)] + ' ' + string[string.index(croa)+len(croa):]
                count += 1
    for element in string:
        if (not element == ' ') and (element.isalpha()):
            count += 1
    print(count, '결과')
    print(list_string)
    print(string)
    if 



    print(count)
=======
print(count)
>>>>>>> 07029c4efeb6747a0fdb1d4d75d8d7f6f9d5c7e1
=======
print(count)
>>>>>>> 07029c4efeb6747a0fdb1d4d75d8d7f6f9d5c7e1
