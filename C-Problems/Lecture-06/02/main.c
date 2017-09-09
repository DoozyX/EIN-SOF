#include <stdio.h>
#include <string.h>

/*
 * 2.	Напиши програма која вчитува датуми во облик gg/mm/dd, gg-mm-dd и gg+mm+dd и ги испечаува така да наместо бројот на месецот се испечати имато на месецот.
Пример:
Vnesi datum: 2005+06+01
Vneseniot datum e 1 juni 2005 godina.
 */

int main() {
    int day, month, year;
    scanf("%d%*c%d%*c%d", &year, &month, &day);
    char months[12][10] = {"januari", "gebruari", "mart", "april", "maj", "juni", "juli", "avgust", "septemvri", "oktomvri", "noemvri", "dekemvri"};
    char monthString[10];

    switch (month) {
        case 1:
            strcpy(monthString, months[0]);
            break;
        case 2:
            strcpy(monthString, months[1]);
            break;
        case 3:
            strcpy(monthString, months[2]);
            break;
        case 4:
            strcpy(monthString, months[3]);
            break;
        case 5:
            strcpy(monthString, months[4]);
            break;
        case 6:
            strcpy(monthString, months[5]);
            break;
        case 7:
            strcpy(monthString, months[6]);
            break;
        case 8:
            strcpy(monthString, months[7]);
            break;
        case 9:
            strcpy(monthString, months[8]);
            break;
        case 10:
            strcpy(monthString, months[9]);
            break;
        case 11:
            strcpy(monthString, months[10]);
            break;
        case 12:
            strcpy(monthString, months[11]);
            break;
        default:
            strcpy(monthString, "unknown");
            break;
    }

    printf("Vneseniot datum e %d %s %d godina.", day, monthString, year);

    return 0;
}