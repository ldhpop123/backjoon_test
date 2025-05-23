#include <stdio.h>
#define X 9
#define Y 9

int main(void) {
    int arr[Y][X];
    int max = -1, X_index, Y_index;
    
    for (int y = 0; y < Y; y++) {
        for (int x = 0; x < X; x++) {
            scanf("%d", &arr[y][x]);
            if (max < arr[y][x]) {
                max = arr[y][x];
                X_index = x+1;
                Y_index = y+1;
            }
        }
    }

    printf("%d\n%d %d", max, Y_index, X_index);

    return 0;
}