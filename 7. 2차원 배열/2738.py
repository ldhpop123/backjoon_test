col, row = [int(i) for i in input().split()] 

num1_li = []
for i in range(col):
    num1_li.append(list(map(int, input().split())))

num2_li = []
for i in range(col):
    num2_li.append(list(map(int, input().split())))

# if all(len(num1_li[i]) for i in range(row)) and all(len(num2_li[i]) for i in range(row)):
for col_index in range(col):
    for row_index in range(row):
        print(num1_li[col_index][row_index] + num2_li[col_index][row_index], end = ' ')
    print()