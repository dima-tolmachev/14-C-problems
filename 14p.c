#include <stdio.h>

int main () {
    int num;
    printf("Enter a dec number (0 <= x <= 255): ");
    scanf("%d", &num);
    int bin[8];

    for (int i = 7; i >= 0; i--) {
        bin[i] = num & 1;
        num >>= 1;
    }

    printf("Binary equivalent: ");
    for (int i = 0; i < 8; i++) {
        printf("%d", bin[i]);
    }

    printf("\n");
    return 0;
}