#include <stdio.h>

int main() {
    char str[101];
    int arr[26] = {0};
    scanf("%s", str);

    for (int i = 0; i < 26; i++) {
        arr[i] = -1;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (arr[str[i]- 'a'] == -1) {
            arr[str[i]-'a'] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}