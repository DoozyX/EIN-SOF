#include <stdio.h>
#include <math.h>

/*
 * 5.	Да се претстави природниот број n како производ од прости множители. (n=p1k1p2k2...prkr , каде што p1, p2, ..., pr се прости броеви, а k1, k2, . . . , kr се природни броеви.)
 */

int main() {
    int n, count = 0;

    scanf("%d", &n);

    while (n % 2 == 0) {
        ++count;
        n = n / 2;
    }
    if (count > 0) {
        printf("2 ^ %d\n", count);
    }

    for (int i = 3; i <= sqrt(n); i = i + 2) {
        count = 0;

        while (n % i == 0) {
            n = n / i;
            ++count;
        }

        if (count > 0) {
            printf("%d ^ %d\n", i, count);
        }
    }

    if (n > 2) {
        printf("%d ^ 1\n", n);
    }

    return 0;
}