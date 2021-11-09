#include <stdlib.h>
#include <stdio.h>

struct Fract {
    int num;
    int den;
};

struct Fract sum_fracts(struct Fract a, struct Fract b) {
    struct Fract result;
    result.num = a.num * b.den + b.num * a.den;
    result.den = a.den * b.den;
    return result;
}

int main() {
    struct Fract a, b;
    a.num = 5;
    a.den = 2;
    b.num = 9;
    b.den = 3;

    struct Fract c = sum_fracts(a, b);
    printf("%d/%d\n", c.num, c.den);
    return 0;
}