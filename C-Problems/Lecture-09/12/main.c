#include <stdio.h>

/*
 * 12.	Да се внесат два полинома со степени n m соодветно.
 * Да се внесат нивните коефициенти и да се најде нивниот збир.
 */

int main() {
    int n, m, i, j;

    scanf("%d %d", &n, &m);

    int pol1[n];
    int pol2[m];

    for (i = 0; i < n; ++i) {
        scanf("%d", &pol1[i]);
    }
    for (i = 0; i < m; ++i) {
        scanf("%d", &pol2[i]);
    }

    int max, min;
    int *maxPol;
    if (n > m) {
        max = n;
        min = m;
        maxPol = pol1;
    } else {
        max = m;
        min = n;
        maxPol = pol2;
    }

    int pol[max];

    for (i = 0; i < min; ++i) {
        pol[i] = pol1[i] + pol2[i];
    }

    for (; i < max ; ++i) {
        pol[i] = maxPol[i];
    }

    for (i = 0; i < max; ++i) {
        printf("%d ", pol[i]);
    }
    return 0;
}