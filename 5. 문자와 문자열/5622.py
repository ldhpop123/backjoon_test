li = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
result = 0

for i in list(input()):
    for o in li:
        if i in o:
            result += (li.index(o)+3)
print(result)
result = 0

