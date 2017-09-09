#include <stdio.h>

/*
 * 1. Само со користење на операторот за шифтирање да се напише функција mnoziSoStepenOdDva која зема два целобројни аргументи:
 * broj и stepen и ја пресметува следната вредност:
broj * 2^stepen;
 */

int mnoziSoStepenOdDva(int broj, int stepen) {
    for (int i = 0; i < stepen; ++i) {

        broj <<= 1;

    }
    return broj;
}
int main() {
    printf("%d\n", mnoziSoStepenOdDva(10,5));
    return 0;
}