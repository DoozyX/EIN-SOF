#include <stdio.h>

/*
 * 4.      Напиши програма во која дефинираш функција nzd за пресметување на најголемиот заеднички делител на два броја.
 */

int nzd(int num1, int num2) {
    if (num1 == 0 || num2 == 0)
        return 0;

    if (num1 == num2)
        return num1;

    if (num1 > num2)
        return nzd(num1 - num2, num2);
    return nzd(num1, num2 - num1);
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }

    printf("%d\n", num1);

    return 0;
}