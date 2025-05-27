#include <stdio.h>

int main(void) {
    int repeat, target, result;
    int arr[4] = {25, 10, 5, 1};
    scanf("%d", &repeat);

    for (int i = 0; i < repeat; i++) {
        scanf("%d", &target);
        for (int o = 0; o < 4; o++) {
            result = target / arr[o];
            target -= result * arr[o];
            printf("%d ", result);
        }
        printf("\n");
    }
    
    return 0;
}