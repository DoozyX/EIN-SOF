#include <stdio.h>

/*
 * 10.	Да се најдат сите растечки поднизи во низата броеви [ai]n. (Растечка подни¬за е онаа во која секој елемент е поголем од претходниот.)
 */


void inscreasingSublists(int *array, int n) {

    for (int i = 0; i < n; i++) {
        int first = 1;
        for (int j = i+1; j < n; j++) {
            if (array[j] > array[i]) {
                if (first) {
                    printf("%d ", array[i]);
                    first = 0;
                }
                ++i;
                printf("%d ", array[j]);
            } else {
                break;
            }
        }
        printf("\n");
    }

}

int main() {
    int n;

    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }

    inscreasingSublists(array, n);
    return 0;
}