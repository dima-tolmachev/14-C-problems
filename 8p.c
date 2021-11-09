#include <stdio.h>

int bignum(int b[], int a) {
    int max = b[0];
    for (int i = 0; i < a; i++) {
        if (b[i] > max) {
        max = b[i];
        }
    }
    return max;
}

int littlenum(int b[], int a) {
    int min = b[0];
    for (int i = 0; i < a; i++) {
        if (b[i] < min) {
            min = b[i];
        }
    }
    return min;
}

int main() {
    int a;
    printf("Enter a count of numbers that you are going to enter: ");
    scanf("%d", &a);

    int b[a];
    printf("Enter a subsequence of %d numbers: ", a);
    for (int i = 0; i < a; i++) {
        int c;
        scanf("%d", &c);
        b[i] = c;
    }

    printf("The biggest number is %d\n", bignum(b, a));
    printf("The smallest number is %d\n", littlenum(b, a));
    return 0;
}