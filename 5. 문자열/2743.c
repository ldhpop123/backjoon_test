#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);
    printf("%lu", strlen(str));
    return 0;
}