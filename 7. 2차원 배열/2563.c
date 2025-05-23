#include <stdio.h>

int main() {
    int arr[100][100] = {0};
    int repeat, sum = 0;
    scanf("%d", &repeat);
    
    for (int i = 0; i < repeat; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        for (int y = Y; y < Y+10; y++) {
            for (int x = X; x < X+10; x++) {
                if (arr[y][x] == 0) {
                    arr[y][x] = 1; 
                    sum += 1; 
                    continue;
                }
            }
        }
    }

    printf("%d", sum);

    return 0;
}