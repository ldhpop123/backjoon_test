num_li = [list(map(int, input().split())) for i in range(9)]

for p in range(9):
    row_li = num_li[p]
    n = len(row_li)
    for i in range(n):
        for o in range(0, n-i-1):
            print(o)
            if row_li[o] < row_li[o+1]:
                row_li[o], row_li[o+1] = row_li[o+1], row_li[o]
    print(row_li)
print(num_li)