#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int bako[N+1];

    bako[0] = 0;
    for (int i = 1; i <= N; i++) {
        bako[i] = i;
    }

    for (int i = 0; i < M; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        for (int i = X; i <= Y; i++) {
            int temp = bako[i];
            bako[i] = bako[X];
            bako[X] = temp;
            X--;
            for (int i = 1; i <= N; i++) {
                printf("%d ", bako[i]);
            }
            printf("\n");
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", bako[i]);
    }

    return 0;
}