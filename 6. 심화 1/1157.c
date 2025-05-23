#include <stdio.h>

int main() {
    char str[1000000], result = '?';
    int size, max = 0, alpha[26] = {0};
    scanf("%s", str);

    for (size = 0; str[size] != '\0'; size++) {
        if (str[size] <= 'Z') {
            alpha[str[size]-'A'] += 1;
        } else {
            alpha[str[size]-'a'] += 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (alpha[i] > max) {
            max = alpha[i];
            result = i + 'A';
        } else if (alpha[i] == max) {
            result = '?';
        }
    }

    printf("%c", result);

    return 0;
}

