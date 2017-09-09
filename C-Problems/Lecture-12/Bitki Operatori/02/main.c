#include <stdio.h>

/*
 * 2. Напиши програм кој го превртува редоследот на битовите на целобројна unsigned вредност.
 * Програмот треба да вчита вредност од корисникот и да ја повика функцијата prevtriBitovi за да се испечатат битовите во обратен редослед.
 * Вредностите на битовите да се испечатат и пред и после превртувањето.
 */

void pechatiBitovi(unsigned value) {
    unsigned c; /* counter */

    /* deklariraj pechatiMaska i shiftiraj ja vo levo za 31 bit */
    unsigned pechatiMaska = 1 << 31;

    printf("%7u = ", value);

    /* pomini niz bitovite */
    for (c = 1; c <= 32; c++) {
        putchar(value & pechatiMaska ? '1' : '0');
        value <<= 1; /* shiftiraj ja vrednosta vo levo za 1 */

        if (c % 8 == 0) { /* ispechati prazno mesto posle 8 bita */
            putchar(' ');
        } /* kraj if */
    } /* kraj for */
    putchar('\n');
} /* kraj na funkcijata pechatiBitovi */

unsigned prevrtiBitovi(unsigned num) {
    unsigned int count = sizeof(num) * 8 - 1;
    unsigned int reverse_num = num;

    num >>= 1;
    while (num) {
        reverse_num <<= 1;
        reverse_num |= num & 1;
        num >>= 1;
        count--;
    }
    reverse_num <<= count;
    return reverse_num;
}


int main() {
    unsigned n;
    scanf("%d", &n);
    pechatiBitovi(n);
    n = prevrtiBitovi(n);
    pechatiBitovi(n);
    return 0;
}