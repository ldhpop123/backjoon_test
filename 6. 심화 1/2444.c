#include <stdio.h>

int main() {
    int repeat;
    scanf("%d", &repeat);

    for(int i = 1; i <= repeat; i++) {
        for(int j = 0; j < repeat-i; j++) {
            printf(" ");
        }
        for (int o = 0; o < 2*i-1; o++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i = 1; i < repeat; i++) {
        for(int j = 0; j < i; j++) {
            printf(" ");
        }
        for(int o = 0; o < 2 * (repeat - i) - 1; o++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}