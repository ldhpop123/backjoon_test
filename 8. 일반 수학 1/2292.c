#include <stdio.h>

int main(void) {
    double target;
    int level = 1;
    scanf("%lf", &target);
    target--;
    while (target > 0) {
        target -= level*6;
        level++;
    }
    printf("%d", level);
    return 0;
}