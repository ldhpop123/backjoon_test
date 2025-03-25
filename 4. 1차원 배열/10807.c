#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int li[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &li[i]);
    }

    int target, result = 0;
    scanf("%d", &target);
    for (int i = 0; i < N; i++) {
        if (li[i] == target) {
            result++;
        }
    }
    printf("%d", result);

    return 0;
}
