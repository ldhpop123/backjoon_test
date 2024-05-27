string = input()
alpha = list('abcdefghijklmnopqrstuvwxyz')
result = [-1 for i in range(26)]

if len(string) <= 100:
    for i in range(26):
        if alpha[i] in string:
            result[i] = string.index(alpha[i])
    for i in result:
        print(i, end = ' ')