#include <stdio.h>

/*
 * 6.      Напиши програма која пресметува сума на внесени броеви од тастатура се додека не се внесе -1.
 */
int main() {
    int sum = 0;
    int num;

    while (num != -1) {
        scanf("%d", &num);
        sum += num;
    }

    printf("Sum: %d", sum+1);
    return 0;
}