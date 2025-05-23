#include <stdio.h>

int main() {
    int repeat, count = 0;

    scanf("%d", &repeat);
    for (int i = 0; i < repeat; i++) {
        char alpha[26] = {0}, target[101];
        int pass = 1;
        scanf("%s", target);

        for (int j = 0; target[j] != '\0'; j++) {
            if (alpha[target[j]-'a']) {
                if (target[j] != target[j-1]) {
                    pass = 0;
                    break;
                }
            } else {
                alpha[target[j]-'a'] = 1;
            }
        }

        if (pass == 1) {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}