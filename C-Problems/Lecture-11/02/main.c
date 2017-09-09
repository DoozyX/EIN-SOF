#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * 2. Напиши програм кој чита датум во обликот 14/06/2005 и враќа датум во обликот 14 juni 2005.
 * Корисникот да има можност да внесува колку што сака датуми кои треба да бидат конвертирани во другиот излез.
 */

char *getMonth(int month) {
    switch (month) {
        case 1:
            return "januari";
        case 2:
            return "februari";
        case 3:
            return "mart";
        case 4:
            return "april";
        case 5:
            return "maj";
        case 6:
            return "juni";
        case 7:
            return "juli";
        case 8:
            return "avgust";
        case 9:
            return "septemvri";
        case 10:
            return "oktomvri";
        case 11:
            return "noemvri";
        case 12:
            return "dekemvri";
        default:
            return "unknown";
    }

}

int main() {
    char date[100];
    gets(date);
    while (strcmp(date, "-1")) {
        char *tok = strtok(date, "/");
        printf("%s ", tok);
        tok = strtok(NULL, "/");
        printf("%s ", getMonth(atoi(tok)));
        tok = strtok(NULL, "/");
        printf("%s\n", tok);
        printf("enter date or -1 to exit\n");
        gets(date);
    }

    return 0;
}