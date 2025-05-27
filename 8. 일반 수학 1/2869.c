#include <stdio.h>

int main(void) {
    int height, move, sleep, days = 0; 
    scanf ("%d %d %d", &move, &sleep, &height);

    days = (double)(height - move) / (move - sleep) + 1;
    printf("%d", days);
    return 0;
}