#include <stdio.h>

/*
 * 3.	Да се најде спротивен број на природниот број n. (Тоа е природниот број што ги има истите цифри со n, напишани во спротивен редослед.)
 */

int main() {
    int num, opposite = 0;

    scanf("%d", &num);

    while (num != 0) {
        opposite *= 10;
        opposite += num % 10;
        num /= 10;
    }

    printf("%d\n", opposite);

    return 0;
}