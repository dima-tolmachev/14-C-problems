#include <stdio.h>

int main() {
    unsigned long int x = 1;
    printf("Bits   | Range\n");
    printf("----------------------------\n");

    for (int i = 1; i <= 32; i++) {
        x *= 2;
        printf("%2d     | from 0 to %lu\n", i, x - 1);
    }
    return 0;				
}