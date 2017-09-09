#include <stdio.h>

/*
 * 4. Напиши програм кој вчитува три цели броја и пресметува нивна целобројна средна вредност, сума и производ.
 */

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Average: %d\n", (num1 + num2 + num3)/3);
    printf("Sum: %d\n", num1 + num2 + num3);
    printf("Product: %d\n", num1 * num2 * num3);

    return 0;
}