#include <stdio.h>
#include <string.h>

int main() {
    char str[1000002];
    int count = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if ((i == 0 && str[i] != ' ') || (str[i] != ' ' && str[i-1] == ' ')) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}