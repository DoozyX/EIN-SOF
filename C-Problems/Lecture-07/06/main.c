#include <stdio.h>

/*
 * 6.      Напиши рекурзивна верзија на функцијата за пресметување најголем заеднички делител
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
    printf("%d\n", nzd(81,153));
    return 0;
}