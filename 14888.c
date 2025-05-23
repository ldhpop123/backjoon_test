#include <stdio.h>
#include <math.h>

int addition() {

}

int subtraction() {

}

int multiple() {

}

int division() {

}

int main(void) {
    int range;
    scanf("%d", range);
    int num_list[range];
    for (int i = 0; i < range; i++) {
        scanf("%d", num_list[i]);
    }
    int operations[4], operation_list[range - 1];
    scanf("%d %d %d %d", operations[0], operations[1], operations[2], operations[3]);
    float max = -INFINITY, min = INFINITY;

    for (int i = 0; i < (range -1); i++) {
        for (int o = 0; o < operations[i]; o++) {
            operation_list[i] = i;
        }
    }

    for (int i = 0; i < )

    return 0;
}