num = int(input())

if num <= 1000:
    score = [int(i) for i in input().split() if int(i)<=100]
    print(((sum(score)/len(score))/max(score))*100)

