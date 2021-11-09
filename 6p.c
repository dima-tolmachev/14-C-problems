#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int comparison(int *a, int *b) {
    if (*a > *b) return 1;
    if (*a < *b) return -1;
    return 0;
}

bool is_legal(int n[6], int a) {
    for (int i = 0; i < 6; i++)
        if (n[i] == a) return false;
    return true;
}

int genInt(int n[6]) {
    int r = rand() % 49 + 1;
    if (is_legal(n, r) == true) return r;
    return genInt(n);
}

int main() {
    printf("Possible winning ticket numbers: ");
    
    srand(time(NULL));
    
    int n[6] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 6; i++)
        n[i] = genInt(n);

    qsort(n, 6, sizeof(int), (void *)comparison);
    
    for (int i = 0; i < 6; i++)
        printf("%02d ", n[i]);

    return 0;
}