#include <stdio.h>

/*
 * 7.	Да се најдат природните броеви во интервалот [n1,n2], кои се деливи со сво-јот спротивен број.
 */

int opposite(int num) {
    int opposite = 0;

    while (num != 0) {
        opposite *= 10;
        opposite += num % 10;
        num /= 10;
    }

    return opposite;
}

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    for (int i = n1; i <= n2; ++i) {
        if (i % opposite(i) == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}