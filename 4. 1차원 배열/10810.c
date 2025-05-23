#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int* li = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        li[i] = 0;
    }
    
    while(M--) {
        int R_min, R_max, num;
        scanf("%d %d %d", &R_min, &R_max, &num);
        for (int i = R_min; i <= R_max; i++) {
            li[i-1] = num;
        }
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", li[i]);
    }

    free(li);

    return 0;
}