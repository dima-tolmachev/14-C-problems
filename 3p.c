#include <stdio.h>
#define FILENAME "text.txt" // Create file here before starting the program

int main() {
    FILE *fp = fopen(FILENAME, "r");
    char s;

    if (fp == NULL) {
        printf("Make sure that \"%s\" exists in current directory.\n", FILENAME);
        return 1;
    }
    
    while ((s = fgetc(fp)) != EOF) {
        if (s == 10) {
            printf("%c", 13);
            putchar(s);
        } else {
            printf("%c", s);
        }
    }
      
    fclose(fp);
    return 0;				
}