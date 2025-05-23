#include <stdio.h>
#define LINE 5

int main(void) {
    char arr[5][15] = {0};

    for (int i = 0; i < LINE; i++){
        scanf("%s", arr[i]);
    }

    for (int x = 0; x < 15; x++) {
        for (int y = 0; y < LINE; y++) {
            if (arr[y][x] == '\0') {continue;}
            printf("%c", arr[y][x]);
        }
    }

    return 0;
}