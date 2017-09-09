#include <stdio.h>

/*
 * 2.      Прости броеви се броеви кои се деливи само со себе си и со бројот 1.
 * Напиши програм кој внесува n елементи во низа. Да се овозможи функционалност да имаме променлив број на елементи во низата.
 * Во почетокот сите елементи да се иницијализираат на 1.
 * Потоа да се напише функција prosti која секој елемент од низата чиј индекс е прост број, го поставува на 0.
 * На крај од така добиената низа да се најде начин да се испечатат простите броеви до n.
 */

int checkPrime(int num) {
    if (num <= 1) return 0;
    if (num % 2 == 0 && num > 2) return 0;
    for (int i = 3; i < num / 2; i += 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void prosti(int array[], int n) {
    for (int i = 0; i < n; ++i) {
        if (checkPrime(i)) {
            array[i] = 0;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int array[100] = {1};

    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }

    prosti(array, n);

    for (int i = 0; i < n; ++i) {
        if (checkPrime(array[i])) {
            printf("%d", array[i]);
        }
    }

    return 0;
}