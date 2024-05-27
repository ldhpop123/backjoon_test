string = input().upper()
result = [0 for i in range(26)]
Max = 0

if (1 <= len(string) <= 1000000):
    for i in list(string):
        result[ord(i)-66] += 1
    for i in result:
        Max = Max if Max > i else i
    if result.count(Max) >= 2:
        print('?')
    else:
        print(chr(result.index(Max)+66))


