#include <stdio.h>

int main() {
    int repeat;
    scanf("%d", &repeat);
    getchar();

    for (int i = 0; i < repeat; i++) {
        char str[1001];
        scanf("%s", str);
        printf("%c", str[0]);
        for (int i = 0; i < 1001; i++) {
            if (str[i] == '\0') {
                printf("%c\n", str[i-1]);
                break;
            }
        }
    }
    return 0;
}