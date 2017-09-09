#include <stdio.h>

/*
 * 9.      Секоја од n бактерии се дели на две на секои i минути, додека на секои j минути изумираат x% од живите бактерии во тој момент.
 * Колку бактерии ќе има по k минути?
 * */

int main() {
    int n, i, j, x, k;

    printf("Enter n, i, j, x and k");
    scanf("%d %d %d %d %d", &n, &i, &j, &x, &k);

    for (int l = 1; l <= k; ++l) {
        if (l % i == 0) {
            n *= 2;
        }
        if (l % j == 0) {
            n -= (n*x/100);
        }
    }

    printf("%d", n);
    return 0;
}