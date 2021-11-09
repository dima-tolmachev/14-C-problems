#include <stdio.h>
#define FILENAME "text.txt" // Create file here before starting the program

int main () {
    FILE *fp = fopen(FILENAME, "r");
    char s;

    if (fp == NULL) {
        printf("Make sure that \"%s\" exists in current directory.\n", FILENAME);
        return 1;
    }

    printf("Hex output of %s:\n", FILENAME);
    int count = 0;
    while ((s = fgetc(fp)) != EOF) {
        printf("%3x ", (int)s);
        count++;
        if (count % 16 == 0) {
            printf("\n");
        }
    }
    return 0;
}