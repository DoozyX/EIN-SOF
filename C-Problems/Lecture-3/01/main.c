#include <stdio.h>

/*
 * 1. Напиши програм кој како влез зема два цели броја и ги споредува. Потоа го испечатува поголемиот број проследен со коментарот e pogolem od и го испечатува и помалиот број.
 * Ако броевите се еднакви, програмот треба да испечати Broevite se ednakvi.
 */

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if(num1 < num2) {
        int temp = num1;
        num1= num2;
        num2 = temp;
    } else if (num1 == num2) {
        printf("Broevite se ednakvi.\n");
        return 0;
    }

    printf("%d e pogolem od %d", num1, num2);
    return 0;
}