#include <stdio.h>

/*
 * 2. Напиши програм кој вчитува два цели броја и одредува дали се парни или непарни.
 */

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num1 % 2 == 0) {
        printf("%d e paren\n", num1);
    } else {
        printf("%d e neparen\n", num1);
    }
    if (num2 % 2 == 0) {
        printf("%d e paren\n", num2);
    } else {
        printf("%d e neparen\n", num2);
    }
    return 0;
}