#include <stdio.h>

int main() {
    int H, M, X;

    scanf("%d %d\n %d", &H, &M, &X);
    printf("%d %d", (H + (M + X)/60)%24, (M + X)%60);
    return 0;
}