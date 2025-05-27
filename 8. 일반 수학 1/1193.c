#include <stdio.h>

int main(void) {
    int target, level = 1;
    scanf("%d", &target);

    while (target > level) {
        target -= level;
        level++;
    }

    if (level % 2 == 0) {
        printf("%d/%d", target, level - target + 1);
    } else {
        printf("%d/%d", level - target + 1, target);
    }

    return 0;
}