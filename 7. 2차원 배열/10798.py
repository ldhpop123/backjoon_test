string_li = [list(input()) for repeat in range(5)]

for row_index in range(15):
    for col_index in range(5):
        if len(string_li[col_index]) > row_index:
            print(string_li[col_index][row_index], end = '')
