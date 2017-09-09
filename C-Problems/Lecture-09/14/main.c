#include <stdio.h>

/*
 * 14.	За даден природен број n да се испечатат следниве фигури со користење на рекурзија.
n
n-1 n
n-2 n-1 n
...
1 2 3 ... n-2 n-1 n
...
n-2 n-1 n
n-1 n
n
 */

void figure(int size) {
    printFigure(1, 1, size, 1, size);
}

void printFigure(int i, int n, int m, int down, int total) {
    if (m == 0 && down == 0) {
        return;
    }
    if (m == 0) {
        down = 0;
        m = total - 1;
        n = m;
        i = m;
    }

    if (down) {
        if (i == 0) {
            printf("\n");
            printFigure(n + 1, n + 1, m - 1, 1, total);
        } else {
            printf("%d ", total - i + 1);
            printFigure(i - 1, n, m, 1, total);
        }
    }

    if (!down) {
        if (i == 0) {
            printf("\n");
            printFigure(n - 1, n - 1, m - 1, 0, total);
        } else {
            printf("%d ", total - i + 1);
            printFigure(i - 1, n, m, 0, total);
        }
    }


}

int main(){
    int n;
    scanf("%d", &n);

    figure(n);
    return 0;
}