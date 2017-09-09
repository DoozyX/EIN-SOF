#include <stdio.h>

/*
 * 1.      Напиши програма која внесува 10 цели броеви и и ги доделува на функцијата paren која враќа 1 ако бројот е парен и 0 ако бројот не е парен.
 */

int paren(int num) {
    if (num%2 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int num;

    for (int i = 0; i < 11; ++i) {
        scanf("%d", &num);
        if (paren(num)) {
            printf("paren\n");
        } else {
            printf("neparen\n");
        }
    }
    return 0;
}