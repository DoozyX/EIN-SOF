#include <stdio.h>

/*
 * 5.      Напиши програма која за внесени десет броја, го пресметува нивниот производ.
 */
int main() {
    int num;
    int total = 1;
    int i = 0;

    for (i = 0; i < 10; ++i) {
        scanf("%d", &num);
        total *= num;
    }

    printf("Total: %d", total);
    return 0;
}