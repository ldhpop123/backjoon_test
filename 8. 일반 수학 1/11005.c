#include <stdio.h>
#define MAX 5

int main(void) {
    int digits, num, arr[MAX], arrlen = 0;
    scanf("%d %d", &digits, &num);

    for (int i = MAX -1; i <= 0; i--) {
        if (digits < num) continue;
        arr[i] = digits % num;
        arrlen++;
    }

    for (int i = 0; i < arrlen; i++) {
        if (10 <= arr[i]) {
            printf("%c", arr[i]+'A'-10);
            continue;
        }
        printf("%d", arr[i]);
    }
    
    return 0;
}