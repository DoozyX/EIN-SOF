#include <stdio.h>

/*
 * 7.      Напиши рекурзивна верзија на програма која за внесено n повикува функција dzvezdi со параметар n која во зависност од n испечатува ѕвезди на следниот начин:
    Vnesi broj na dzvezdi (n): 5
    Se dobiva:
    * * * * *
    * * * *
    * * *
    * *
    *


 */

void dzvezdi(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    dzvezdi(n);

    return 0;
}