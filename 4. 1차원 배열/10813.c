#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int li[N+1];

    for(int i = 0; i <= N; i++) {
        li[i] = i;
    }

    for (int i = 0; i < M; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int temp = li[X];
        li[X] = li[Y];
        li[Y] = temp;
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", li[i]);
    }
    
    return 0;
}