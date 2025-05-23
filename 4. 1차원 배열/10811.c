#include <stdio.h>

int main() {
    int size, repeat;
    scanf("%d %d", &size, &repeat);
    int li[size+1];

    for (int i = 0; i <= size; i++) {
        li[i] = i;
    }

    for (int i = 0; i < repeat; i++) {
        int start, end;
        scanf("%d %d", &start, &end);
        for(int i = start; i <= end; i++) {
            int temp = li[i];
            li[i] = li[end];
            li[end] = temp;
            end--;
        }
    }

    for (int i = 1; i <= size; i++) {
        printf("%d ", li[i]);
    }

    return 0;
}