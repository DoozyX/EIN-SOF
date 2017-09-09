#include <stdio.h>
#include <string.h>

/*
 * 4.      Напиши програма која за внесен цел број кој може да е најмногу  четири цифрен го испечатува неговиот еквивалент во римски броеви.
 */

int main() {
    int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *letters[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    char roman[100] = "";
    int length = sizeof(numbers)/ sizeof(numbers[0]);

    int number;
    scanf("%d", &number);
    for (int i = 0; i < length; ++i) {
        while (number >= numbers[i]) {
            strcat(roman, letters[i]);
            number -= numbers[i];
        }
    }

    printf("%s", roman);
    return 0;
}