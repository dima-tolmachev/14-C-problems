#include <stdio.h>

int spacesRemain(int n) {
    int spaces = 3;
    if (n > 9) { spaces = 2; }
    if (n > 99) { spaces = 1; }
    return(spaces);    
}

int main() {
    for (int m = 1; m <= 12; m++) {
        for (int i = 1; i <= 12; i++) {
            for (int j = 0; j < spacesRemain(i * m); j++) {
                printf(" ");
            }
            printf("%d", i * m);
        }
        printf("\n");
    }    
    return 0;
}