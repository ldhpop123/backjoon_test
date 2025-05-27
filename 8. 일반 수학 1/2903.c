#include <stdio.h>
#include <math.h>

int main(void) {
    int repeat, result;
    scanf("%d", &repeat);

    result = pow(pow(2, repeat) + 1, 2);

    printf("%d", result);

    return 0;
}