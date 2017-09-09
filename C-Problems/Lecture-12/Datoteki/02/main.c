#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
 * 2. Да се напише програма која служи како генератор на телефонски броеви.
 * Знаеме дека полесно се паметат поими од броеви,
 * па така некои од компаниите имаат телефонски броеви кои ја означуваат дејноста или името на компанијата.
Нека ни се подредени буквите на следниот начин:
Цифра	Буква
2	ABC
3	DEF
4	GHI
5	JKL
6	MNO
7	PQR
8	STU
9	VWX
0	YZ
а) За даден седумбуквен стринг да се изгенерира бројот на телефон. Пример: “TELEKOM” = 8353566
б) За даден седмоцифрен број да се изгенерираат што поголем број на стрингови. Да се внимава дека 0 има само две букви.
 */

#define NUMBER_SIZE 7

char *letters[] = {"YZ-", "---", "ABC", "DEF", "GHI", "JKL", "MNO", "PQR", "STU", "VWX"};

int main() {


    printf("press 1 for string into 1 number or 0 to generate all strings from number");
    int choice;
    scanf("%d", &choice);

    if (choice) {
        char number[NUMBER_SIZE + 1];
        scanf("%s", number);
        for (int i = 0; i < NUMBER_SIZE; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (strchr(letters[j], number[i])) {
                    printf("%d", j);
                    break;
                }
            }
        }
    } else {
        int numberInt;
        scanf("%d", &numberInt);
        int number[NUMBER_SIZE];

        int i = 0;
        printf("%d\n", numberInt);
        while (numberInt != 0) {
            number[i] = numberInt % 10;
            numberInt /= 10;
            i++;
        }
        char letterString[7] = "";

        for (i = 0; i < 3; i++) {
            letterString[0] = letters[number[6]][i];
            for (int j = 0; j < 3; j++) {
                letterString[1] = letters[number[5]][j];
                for (int k = 0; k < 3; k++) {
                    letterString[2] = letters[number[4]][k];
                    for (int l = 0; l < 3; l++) {
                        letterString[3] = letters[number[3]][l];
                        for (int m = 0; m < 3; m++) {
                            letterString[4] = letters[number[2]][m];
                            for (int n = 0; n < 3; n++) {
                                letterString[5] = letters[number[1]][n];
                                for (int p = 0; p < 3; p++) {
                                    letterString[6] = letters[number[0]][p];
                                    int f = 1;
                                    for (int r = 0; r < 7; r++) {
                                        if (letterString[r] == '-') {
                                            f = 0;
                                        }
                                    }
                                    if (f == 1) {
                                        puts(letterString);
                                    }
                                    printf("\n");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}