#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * 1. Напиши програм кој внесува телефонски број како стринг во облик (333) 333-3333.
 * Програмот треба со користење на наредбата strtok да го извлече кодот на државата како едно делче,
 * а потоа да го спои целиот телефонски број во друг стринг без -.
 * Програмот треба да го конвертира бројот на државата во int,
 * а седмоцифрениот телефонски број во long. Двата бројат треба да бидат испечатени.
 */

int main() {
    char phone[100];
    gets(phone);

    char *phoneB = strtok(phone, " ");
    char *phoneRest = strtok(NULL, " ");
    char *phoneb1 = strtok(phoneB, "(");
    char *phoneCountry = strtok(phoneb1, ")");

    char *phoneNumber = strtok(phoneRest, "-");
    char *phoneRest2 = strtok(NULL, "-");

    strcat(phoneNumber,phoneRest2);

    int country = atoi(phoneCountry);
    long number = strtol(phoneNumber, NULL, 0);
    printf("%d %ld", country, number);


    return 0;
}