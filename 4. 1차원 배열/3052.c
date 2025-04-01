#include <stdio.h>

int main() {
    int result[42] = {0}, num, count = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        result[num%42] = 1;
    }

    for (int i = 0; i < 42; i++) {
        count += result[i];
    }

    printf("%d", count);

    return 0;
}