#include <stdio.h>

/*
 * 13.	Да се генерираат следниве дводимензионални полиња со m-редици и n-колони.
1	12	13			...
2	11	14			...
3	10	15			...
4	9	16			...
5	8	17			...
6	7	18	19		

 */

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m][n];
    int k = 0;
    int down = 1;

    for (int i = 0; i < n; ++i) {
        if (down) {
            for (int j = 0; j < m; ++j) {
                a[j][i] = ++k;
            }
            down = 0;
            --k;
        } else {
            for (int j = m; j >= 0; --j) {
                a[j][i] = ++k;
            }
            down = 1;
        }

    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}