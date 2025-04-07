#include <stdio.h>

int main() {
    int size, repeat;
    char str[21];

    scanf("%d", &size);
    for (int o = 0; o < size; o++) {
        scanf("%d %s", &repeat, str);
        for (int i = 0; str[i] != '\0'; i++) {
            for (int j = 0; j < repeat; j++) {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }

    return 0;
}