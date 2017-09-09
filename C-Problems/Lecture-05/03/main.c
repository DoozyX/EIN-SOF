#include <stdio.h>

/*
 * 3.      Да се напише програма која ќе пресметува Питагорини броеви до 100. Тоа се броеви кои го исполнуваат следниот услов a2+b2=c2.
 */
int main() {
    int a, b, c = 0, m = 2;

    while (c < 100) {
        for (int n = 1; n < m; ++n) {
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;

            if (c > 100)
                break;

            printf("%d %d %d\n", a, b, c);
        }
        m++;
    }

    return 0;
}