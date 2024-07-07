box_index_li = [[int(index) for index in input().split()] for i in range(int(input()))]
result = []

for x, y in box_index_li:
    for index_x in range(x, x+10):
        for index_y in range(y, y+10):
            if [index_x, index_y] not in result:
                result.append([index_x, index_y])
print(len(result))