#include <stdio.h>

/*
 * Продавачите земаат плата од 200 евра плус 9% од вкупната нивна продажба за тој месец. На пример, ако некој продавач продал роба вредна 5000 евра, тогаш добива 200 евра плус 9% од 5000, значи вкупно 650 евра. Напиши програма која за внесен месечен промет му ја пресметува платата на вработениот. Пример:
Vnesi promet vo evra (-1 za kraj): 5000.00
Platata e: 650.00 evra

Vnesi promet vo evra (-1 za kraj): 1234.56
Platata e: 311.11 evra

Vnesi promet vo evra (-1 za kraj): 1088.89
Platata e: 298.00 evra
Vnesi promet vo evra (-1 za kraj): -1

 */
int main() {
    double BASE_SELLARY = 200;
    double PERCENT = 0.09;

    double transactions;

    while (1) {
        printf("Vnesi promet vo evra (-1 za kraj):");
        scanf("%lf", &transactions);
        if (transactions == -1) {
            break;
        }
        printf("Platata e: %.02f evra\n", BASE_SELLARY + transactions*PERCENT);
    }
    return 0;
}