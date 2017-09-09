#include <stdio.h>

/*
 * 3.      Напиши програма која на функцијата obratno и доделува цел број.
 * Оваа функција го враќа бројот напишан со обратни цифри, т.е. ако сме ја повикале функцијата со параметарот 1243, треба да врати 3421.
 */

int obratno(int num) {
    int reverse = 0;
    while (num > 0) {
        int digit = num%10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return reverse;
}
int main() {
    printf("%d\n", obratno(1234));
    return 0;
}