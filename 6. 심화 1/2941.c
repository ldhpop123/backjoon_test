#include <stdio.h>
#include <string.h>

int main() {
    char *croatia[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    char str[101] = {0};
    int count = 0, i;
    scanf("%s", str);

    // for (int i = 0; i < 8; i++) {
    //     for (int j = 0; croatia[i][j] != '\0'; j++) {
    //         printf("%c", croatia[i][j]);
    //     }
    //     printf("\n");
    // }

    for (i = 0; str[i] != '\0'; i++) { // str 글자를 하나씩 가져오기 위함
        // for (int c = i; str[c] != '\0'; c++) {
        //     printf("%c", str[c]);
        // }
        // printf("\n");
        int match = 0;
        for (int j = 0; j < 8; j++) { // croatia 배열에서 문자열 하나씩 가져오기 위함
            if (str[i] == croatia[j][0]) { // 글자하나와 가져온 문자열의 첫글자를 판별해 맞으면 통과
                int result = 1, o;
                for (o  = 1; croatia[j][o] != '\0'; o++) { // 첫글자와 문자열이 맞는지 확인
                    if (str[i+o] != croatia[j][o]) { // 틀리면 다음 문자열로
                        result = 0;
                        break;
                    }
                }
                if (result == 1) { // 만약 맞으면 i는 현재 글자의 인덱스 o는 글자의 수
                    // printf("%d %d %d\n", i, o ,i+o-1);
                    i = i+o-1; // 현재 인덱스랑 글자수를 더해 다음 시작위치 설정
                    count++;
                    match = 1;
                    break;
                }
            }
        }
        if(!match) {count++;}
    }
    
    printf("%d", count);
    return 0;
}