#include <stdio.h>
#define DEPARTMENT 20

int main(void) {
    double ScoreXGrade_sum = 0, Score_sum; // ScoreXGrade_sum = 학점 * 과목평점을 더한 값을 저장 Score_sum = 학점의 총합
    char* gradeArr[8] = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0"}; // 포인터를 사용해서 과목평점 알파넷 배열 작성
    double gradeScoreArr[8] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0}; // 과목평점의 배열의 인덱스 값에 맞추어 과목평점의 점수 배열 작성
    int line = DEPARTMENT; // P학점을 제외하기위한 과목 갯수를 저장하기 위한 변수

    for (int i = 0; i < DEPARTMENT; i++) { // #define REPEAT 값만큼 for 구동
        double score; // score = 학점
        int index; // index = 과목평점의 인덱스값
        char grade[3]; //과목평점을 받을 값
        scanf("%*s %lf %s", &score, grade); // 입력 %*s로 과목 이름은 제외하고 입력받음
        if (grade[0] == 'F') {ScoreXGrade_sum += score * 0; Score_sum += score; continue;} // F 학점이라면 학점 * 0을 sum에 더한다
        if (grade[0] == 'P') {line--; continue;} // 만약 P학점이라면 제외하고 LINE--을 함으로써 sum을 나눌떄 과목수에 -1이 된다
        
        for (index = 0; index < 8; ++index) { // F학점은 제외라고 과목평점 8번 구동
            if (gradeArr[index][0] == grade[0] && gradeArr[index][1] == grade[1]) { // F가 아니고 과목평점이 일치한다면
                ScoreXGrade_sum += score * gradeScoreArr[index]; // 과목평점의 index를 가져와 과목평점의 점수배열에 인덱스르 넣고 score와 곱해서 sum에 더한다
                Score_sum += score; // 학점 총점 구하기
                break;
            }       
        }
    }

    printf("%lf", ScoreXGrade_sum / Score_sum); // processing을 끝낸 sum의 값을 REPEAT값 즉 몇개의 과목을 반환해 나누어 출력한다

    return 0;
}