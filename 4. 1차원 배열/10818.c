#include <stdio.h>

int main() {
    int size, x;
    int max = -1000000, min = 1000000;
    scanf("%d", &size);
    int li[size];

    while(size--){
        scanf("%d", &x);
        if (max < x) max = x;
        if (x < min) min = x;
    }

    printf("%d %d", min, max);
    return 0;
}