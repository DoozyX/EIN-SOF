#include <stdio.h>

/*
 * Проект1:
Да се напише програма која за дадена низа од n (n<100) елементи, пресметува средна вредност, медијана,
најфреквентна вредност во низата и дава хистограм со бројот на појавувања на секоја од вредностите во низата.
Сите пресметки и испишувањето на хистограмот треба да се направат во посебни функции.
Под медијана се подразбира среден елемент на сортирана низа.
Ако низата има парен број елементи, медијана е средната вредност од двата елемента кои се на средината на сортираната низа.
 */

void enterArray(int array[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("Enter the %d element:", i + 1);
        scanf("%d", &array[i]);
    }
}

void printArray(int array[], int n) {
    printf("Array is : ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

double avarage(int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return (double) sum / n;
}

void swap(int *pA, int *pB) {
    int t = *pA;
    *pA = *pB;
    *pB = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            ++i;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int median(int array[], int n) {
    quickSort(array, 0, n - 1);

    if (n % 2 == 0) {
        return array[n / 2] + array[n / 2 - 1];
    }

    return array[n / 2];
}

int mostFrequentNumber(int array[], int n) {
    int mostFrequent = array[0];
    int mostFrequentCount = 0;
    for (int i = 0; i < n; ++i) {
        int currentCount = 0;

        for (int j = 0; j < n; ++j) {
            if (array[i] == array[j]) {
                ++currentCount;
            }
        }

        if (currentCount > mostFrequentCount) {
            mostFrequentCount = currentCount;
            mostFrequent = array[i];
        }
    }
    return mostFrequent;
}

void histogram(int array[], int n) {
    int frequencies[100];

    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (array[i] == array[j]) {
                count ++;
            }
        }

        frequencies[i] = count;
    }

    for (int i = 0; i < n; ++i) {
        int flag = 1;
        for (int j = i - 1; j >= 0 ; --j) {
            if (array[i] == array[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d ", array[i]);
            for (int j = 0; j < frequencies[i]; ++j) {
                printf("*");
            }
            printf("\n");
        }
    }
}

int main() {
    int array[100];
    int n;

    printf("Enter how many element are in the array: ");
    scanf("%d", &n);

    enterArray(array, n);
    printArray(array, n);

    printf("Average is: %f\n", avarage(array, n));
    printf("Median is %d\n", median(array, n));
    printf("Most frequent number is: %d\n", mostFrequentNumber(array, n));
    printf("Histogram is: \n");
    histogram(array, n);
    return 0;
}