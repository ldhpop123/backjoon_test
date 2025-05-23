#include <stdio.h>

int main() {
    int inp[6];
    int arr[7] = {1, 1, 2, 2, 2, 8};
    scanf("%d %d %d %d %d %d", &inp[0], &inp[1], &inp[2], &inp[3], &inp[4], &inp[5]);

    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i] - inp[i]);
    }
    
    return 0;
}