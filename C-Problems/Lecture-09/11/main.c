#include <stdio.h>

/*
 * 11.	??Да се најдат сите пилести поднизи во низата броеви [ai]n.
 * (Пилеста подни¬за е онаа во која претходниот и следниот елемент на секој елемент се по¬мали (поголеми) од него.)
 */

void printBirdSublists(int array[], int n) {
    for (int i = 1; i < n - 1; ++i) {
        if (array[i - 1] < array[i] && array[i + 1] < array[i]) {
            printf("%d %d %d\n", array[i - 1], array[i], array[i + 1]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }

    printBirdSublists(array, n);
    return 0;
}