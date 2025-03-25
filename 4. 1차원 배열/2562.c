#include <stdio.h>

int main() {
    int x, index = 0, max = 0;
    for (int i = 1; i <= 9; i++) {
        scanf("%d", &x);
        if (max < x) max = x, index = i;
    }
    printf("%d\n%d", max, index);
    return 0;
}