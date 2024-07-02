num_li = [list(map(int, input().split())) for i in range(9)]
max_li = []

for col_line in num_li:
    for row_index in range(1, 9):
        print(row_index)
        if col_line[row_index] > col_line[row_index-1]:
            col_line[row_index-1], col_line[row_index] = col_line[row_index], col_line[row_index-1]
    print(col_line)
    max_li.append(col_line[0])
print(max_li)
