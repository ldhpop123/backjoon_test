#include <stdio.h>

int main() {
    char target[16];
    int count = 0;

    scanf("%s", target);

    for (int i = 0; target[i] != '\0'; i++) {
        if ('A' <= target[i] && target[i] <= 'C') {
            count += 3;
        } else if (target[i] <= 'F') {
            count += 4;
        } else if (target[i] <= 'I') {
            count += 5;
        } else if (target[i] <= 'L') {
            count += 6;
        } else if (target[i] <= 'O') {
            count += 7;
        } else if (target[i] <= 'S') {
            count += 8;
        } else if (target[i] <= 'V') {
            count += 9;
        } else {
            count += 10;
        }
    }

    printf("%d", count);

    return 0;
}