#include <stdio.h>

/*
 * 6.	Да се најдат природните броеви помали од n, чиј збир на кубовите на цифри¬те е еднаков на самиот број.
 */

int sumDigits(int num) {
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += (digit * digit *digit);
        num /= 10;
    }

    return sum;
}

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        if (i == sumDigits(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}