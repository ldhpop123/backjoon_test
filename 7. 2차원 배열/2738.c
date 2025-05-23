#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    int arr1[Y][X];
    int arr2[Y][X];

    for (int y = 0; y < Y; y++) {
        for (int x = 0; x < X; x++) {
            scanf("%d", &arr1[y][x]);
        }
    }

    for (int y = 0; y < Y; y++) {
        for (int x = 0; x < X; x++) {
            scanf("%d", &arr2[y][x]);
        }
    }
    
    for (int y = 0; y < Y; y++) {
        for (int x = 0; x < X; x++) {
            printf("%d", arr1[y][x] + arr2[y][x]);
            if (x != X-1) {printf(" ");}
        }
        printf("\n");
    }

    return 0;
}