#include <stdio.h>

/*
 * 7.      Напиши програма која пресметува сума на внесени броеви од тастатура се додека не се внесе карактер ‘n’.
Пример:
          Vnesi broj: 6
          Ushte? (d/n): d
          Vnesi broj: 7
          Ushte? (d/n): d
          Vnesi broj: 3
          Ushte? (d/n): n
                  Sumata e 16

 */
int main() {
    int num;
    char more= 'd';
    int sum = 0;

    while(more != 'n') {
        printf("Vnesi broj: ");
        scanf("%d", &num);
        sum += num;

        printf("Ushte? (d/n): ");
        scanf(" %c", &more);
    }

    printf("Sum: %d", sum);
    return 0;
}