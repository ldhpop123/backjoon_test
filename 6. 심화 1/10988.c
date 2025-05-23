#include <stdio.h>

int main() {
    char str[101];
    int size, result = 1;
    scanf("%s", str);

    for (size = 0; str[size] != '\0'; size++);

    for (int i = 0; i < size/2; i++) {
        if (str[i] != str[size-1-i]) {
            result = 0;
            break;
        }
    }   

    printf("%d", result);

    return 0;
}