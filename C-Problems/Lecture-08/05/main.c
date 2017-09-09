#include <stdio.h>

/*
 * 5.      Да се напише програма која симулира селекциско сортирање.
 * Селекциското сортирање го бара најмалиот елемент во низата и го заменува со првиот елемент.
 * Сега, на прво место сигурно ни се наоѓа најмалиот елемент во низата.
 * Потоа, во остатокот од низата, од вториот до n-тиот елемент, повторно го бараме новиот најмал елемент и му ја заменуваме вредноста со вториот елемент од низата итн.
 * Ова сортирање има слични процесирачки капацитети како сортирање со методот на меурче.
а) Да се напише итеративна верзија на функцијата selekcija која го врши селекциското сортирање.
б) Да се напише рекурзивна верзија на селекциското сортирање.
в) Да се одговори зошто процесирачките капацитети на ова сортирање се слични како оние со методот на меурче.
 */

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//a
void selekcija(int array[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minI = i;

        for (int j = i + 1; j < n; ++j) {
            if (array[j] < array[minI])
                minI = j;
        }

        swap(&array[minI], &array[i]);
    }
}

//b
void selekcijaRecursive(int array[], int n, int i) {
    int min = i;

    for (int j = i + 1; j < n; j++) {
        if (array[j] < array[min]) {
            min = j;
        }
    }

    swap(&array[min], &array[i]);

    if (i + 1 < n) {
        selekcijaRecursive(array, n, i + 1);
    }

}


int main() {
    int array[] = {3, 5, 8, 4, 1, 9, -2};
    int n = sizeof(array) / sizeof(array[0]);

    selekcija(array, n);
    //selekcijaRecursive(array, n, 0);

    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
}
/*в) Да се одговори зошто процесирачките капацитети на ова сортирање се слични како оние со методот на меурче.*/
//Procesirackite kapacitete na ova sortiranje se slicni kako onie so metodot na meurce bidejki i dvata se so kompleksnost od O(n2) odnosno i dvata ja pominuvaat nizata n * n pati.