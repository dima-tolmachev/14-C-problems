#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void printTemplate(int month, int year) {
    const char months[12][12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    const char daysOfWeek[7][12] = {
        "Sun",
        "Mon",
        "Tue",
        "Wed",
        "Thu",
        "Fri",
        "Sat"
    };

    printf("%18s - %d\n", months[month - 1], year);

    for (int i = 0; i < 7; i++) {
        printf("%5s", daysOfWeek[i]);
    }
    
    printf("\n");
}

void printDays(int startDay, int month, int year) {
    for (int i = 0; i < startDay; i++) {
        printf("    -");
    }

    int lastDay = 31;

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            lastDay = 28;
        } else {
            lastDay = 29;
        }
    } else {
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            lastDay = 30;
        } else {
            lastDay = 31;
        }
    }

    bool fisrtLine = true;
    
    for (int i = 1; i <= lastDay; i++) {
        printf("%5d", i);
        
        if (fisrtLine == false && (i + startDay) % 7 == 0) {
            printf("\n");
        }

        if (fisrtLine == true && i % (7 - startDay) == 0) {
            fisrtLine = false;
            printf("\n");
        }
    }

    printf("\n");
}

int main() {
    int year, month, century;
    
    printf("Enter year: ");
    scanf("%d", &year);
    
    printf("Enter month: ");
    scanf("%d", &month);
    printf("\n");
    
    century = year / 100 + 1;
    printTemplate(month, year);

    // Magic from https://www.hackerearth.com/blog/developers/how-to-find-the-day-of-a-week/
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3;
    int fisrts_day_of_week = (year + year/4 - year/100 + year/400 + t[month-1] + 1) % 7;
    
    printDays(fisrts_day_of_week, month, year);
    
    return 0;
}