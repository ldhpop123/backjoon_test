grade_dic = {}

scores = {
    'A+': 4.5,
    'A0': 4.0,
    'B+': 3.5,
    'B0': 3.0,
    'C+': 2.5,
    'C0': 2.0,
    'D+': 1.5,
    'D0': 1.0,
    'F': 0.0,
}

sum_grade_score = 0
sum_score = 0

for i in range(20):
    subject, score, grade = input().split()
    grade_dic[subject] = {'Grade': grade, 'Score': float(score)}

for key, value in grade_dic.items():
    if not value['Grade'] == 'P':
        sum_score += value['Score']
        sum_grade_score += value['Score'] * scores[value['Grade']] 

print(round(sum_grade_score/sum_score, 6))