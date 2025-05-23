#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int li[size], max = 0;
    float sum = 0;

    for (int i = 0; i < size; i++) {
        int temp;
        scanf("%d", &temp);
        li[i] = temp;
        if (max < temp) max = temp;
    }

    for (int i = 0; i < size; i++) {
        sum += ((float)li[i] / max) * 100;
    }

    printf("%f", sum/size);

    return 0;
}