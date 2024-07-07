num_li = [list(map(int, input().split())) for i in range(9)]
max_num = num_li[0][0]

for row_li in num_li:
    for element in row_li:
        max_num = max_num if max_num > element else element
print(max_num)

for row_li in num_li:
    if max_num in row_li:
        row_index = row_li.index(max_num)+1
        col_index = num_li.index(row_li)+1
print(col_index, row_index)