#include <stdio.h>
/*
 * 6. Напишете програма која од стандардниот влез зема 5 букви и ги испечатува по следниот редослед: прво петтата, па третата, па втората, па првата, па четвртата буква. Пример:
vnesi pet bukvi
prva bukva: e
vtora bukva: i
treta bukva: b
chetvrta  bukva: n
petta bukva: p
Se dobi: pbien

 */
int main() {
    char letter1, letter2, letter3, letter4, letter5;

    printf("prva bukva:");
    scanf(" %c", &letter1);
    printf("vtora bukva:");
    scanf(" %c", &letter2);
    printf("treta bukva:");
    scanf(" %c", &letter3);
    printf("chetvrta bukva:");
    scanf(" %c", &letter4);
    printf("petta bukva:");
    scanf(" %c", &letter5);

    printf("se dobi: %c%c%c%c%c", letter5, letter3, letter2, letter1, letter4);
    return 0;
}