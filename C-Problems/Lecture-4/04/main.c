#include <stdio.h>

/*
 * 4.      Напиши програма која ја пресметува сумата на броевите од 1 до десет.
 */

int main() {
    int i;
    int sum = 0;

    for (i=1; i<=10; ++i) {
        sum += i;
    }
    printf("Sum: %d",sum);
    return 0;
}