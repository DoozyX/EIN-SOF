#include <stdio.h>

/*
 * 4.      Да се напише програма која во главната функција внесува број на редици и колони на дводимензионална матрица.
 * Во функцијата vnesiMatrica внесува елементи, а преку функцијата pechatiMatrica ги печати елементите во табеларна форма.
а) Да се напишат итеративни верзии на двете функции.
б) Да се напишат рекурзивни верзии на двете функции.
 */

void vnesiMatricaInterative(int m, int n, int array[m][n]) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &array[i][j]);
        }
    }
}

void vnesiMatricaRecursive(int i, int j, int m, int n, int array[m][n]) {
    scanf("%d", &array[i][j]);

    if (i == m - 1 && j == n-1) {
        return;
    }

    if (j == n - 1) {
        j = 0;
        vnesiMatricaRecursive(++i, j, m, n, array);
    } else {
        vnesiMatricaRecursive(i, ++j, m, n, array);
    }
}

void pecatiMatricaInterative(int m, int n, int array[m][n]) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void pecatiMatricaRecursive(int i, int j, int m, int n, int array[m][n]) {
    printf("%d ", array[i][j]);

    if (i == m - 1 && j == n - 1) {
        return;
    }

    if (j == n - 1) {
        j = 0;
        printf("\n");;
        pecatiMatricaRecursive(++i, j, m, n, array);
    } else {
        pecatiMatricaRecursive(i, ++j, m, n, array);
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int array[m][n];

    vnesiMatricaRecursive(0, 0, m, n, array);

    pecatiMatricaRecursive(0, 0, m, n, array);
    return 0;
}