#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    printf("Possible winning ticket numbers: ");

    for (int i = 0; i < 6; i++) {
        printf("%02d ", (rand() % 49) + 1);
    }

    return 0;
}