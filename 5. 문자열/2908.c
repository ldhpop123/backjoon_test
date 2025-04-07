#include <stdio.h>
#include <stdlib.h>

int reverse(char *temp) {
    char rev[4] =  {temp[2], temp[1], temp[0], '\0'};
    return atoi(rev);
}

int main() {
    char first[4], second[4];
    scanf("%s %s", first, second);

    int R_first = reverse(first);
    int R_second = reverse(second);

    printf("%d", R_first > R_second ? R_first : R_second);

    return 0;
}