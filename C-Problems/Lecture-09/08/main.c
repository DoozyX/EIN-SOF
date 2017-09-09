#include <stdio.h>

/*
 * 8.      Да се најдат природните броеви чиј квадрат и куб (заедно) ги содржат сите цифри 0,1, 2, .. , 9 по еднаш.
 */

int checkDigits(int num) {
    int square = num * num;
    int cube = num * num * num;

    int digits[10] = {0};

    while (square > 0) {
        digits[square % 10] = 1;
        square /= 10;
    }

    while (cube > 0) {
        digits[cube % 10] = 1;
        cube /= 10;
    }

    for (int i = 0; i < 10; ++i) {
        if (digits[i] == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        if (checkDigits(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}