#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 5

int main() {
    char arr[MAX];
    int num, digits, result = 0;

    scanf("%s %d", arr, &num);
    for (int i = 0; arr[i] != '\0'; i++) {
        if ('0' <= arr[i] && arr[i] <= '9') {
            digits = arr[i] - '0';
        } else if ('A' <= arr[i] && arr[i] <= 'Z') {
            digits = arr[i] - 'A' +10;
        }
        result += digits * pow(num, strlen(arr) - 1 -i);
    }

    printf("%d", result);

    return 0;
}