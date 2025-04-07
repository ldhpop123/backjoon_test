#include <stdio.h>

int main() {
    int size, sum = 0;
    scanf("%d", &size);
    char arr[size+1];
    scanf("%s", arr);
    
    for (int i = 0; i < size; i++) {
        sum += (arr[i] - 48);
    }

    printf("%d", sum);

    return 0;
}