#include <stdio.h>

/*
 * 5.      Напиши итеративна верзија на функцијата за фибоначиеви броеви.
 */

int main() {
    int n;
    scanf("%d", &n);

    long a = 0, b = 1, c = 1;

    for (int i = 0; i < n; i++) {
        a = b;
        b = c;
        c = a + b;
    }

    printf("%ld", a);
    return 0;
}