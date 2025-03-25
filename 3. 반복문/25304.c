#include <stdio.h>

int repeat(int N) {
    int sum = 0, a, b;
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a, &b);
        if (1 <= a && a <= 1000000 && 1 <= b && b <= 10){
            sum += a * b;
        } else {
            return 0;
        }
    }
    return sum;
}

int main() {
    int X, N;
    scanf("%d %d", &X, &N);
    if (1 <= X && X <= 1000000000 && 1 <= N && N <= 100) {
        printf("%s\n", X == repeat(N) ? "Yes" : "No");
    }
}
