#include <stdio.h>

#define STEPS 20

int main() {
    int buffer[2] = {0, 1};
    printf("%d\n", buffer[0]);

    for (int i = 0; i < STEPS; i++) {
        int next = buffer[0] + buffer[1];
        buffer[0] = buffer[1];
        buffer[1] = next;
        printf("%d\n", next);
    }
    return 0;
}