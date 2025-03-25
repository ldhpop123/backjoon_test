#include <stdio.h>

int main() {
    int size, X, target;
    scanf("%d %d", &size, &X);

    while(size--) {
        scanf("%d", &target);
        if (target < X) printf("%d ", target);
    }

    return 0;
}