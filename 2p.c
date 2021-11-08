#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    for (int i = 0; i < 128; i++) {
        if (isprint(i)) {
            printf("%4d -> %5c\n", i, (char)i);
        } else {
            printf("%4d -> unreadable\n", i);
        }
    }
    return(0);				
}