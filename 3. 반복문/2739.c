#include <stdio.h>

int main() {
    int target;
    scanf("%d", &target);

    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d \n", target, i, target*i);
    }
    return 0;
}