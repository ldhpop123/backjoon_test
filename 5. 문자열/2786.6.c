#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);

    int index;
    scanf("%d", &index);

    printf("%c", str[index-1]);

    return 0;
}