#include <stdio.h>

int main() {
    int repeat;
    scanf("%d", &repeat);
    for (int i = 0; i < repeat; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
}