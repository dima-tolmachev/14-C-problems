#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
    time_t yesterday = time(NULL) - 24 * 60 * 60;
    printf("%s\n", ctime(&yesterday));
    return 0;
}