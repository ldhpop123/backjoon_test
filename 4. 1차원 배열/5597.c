#include <stdio.h>

int main() {
    int li30[31] = {0}, num;

    for (int i = 0; i < 28; i++) {
        int X;
        scanf("%d", &X);
        li30[X] = 1;
    }

    for (int i = 1; i < 31; i++) {
        if (li30[i] == 0) printf("%d ",i);
    }

    return 0;
}