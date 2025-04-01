#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int li[N];
    
    while(M--){
        int R_min, R_max, num;
        scanf("%d %d %d", &R_min, &R_max, &num);
        for (int i = R_min-1; i < R_max; i++) {
            li[i] = num;
        }
    }

    while(N--) {
        printf("%d ", li[N]);
    }

    return 0;
}