#include <stdio.h>

/*
 * 3. Обидете се со спецификаторот за конверзија %d да испечатите букви на следниот начин:
 *  printf(“%d”, ‘A’)  karakteri se koristat vo edinecni navodnici
 *  //Што се случува кога се печатат следните карактери: b  c  0  1  2  $  *  +  / и празно место?
*/

int main() {
    printf("%d\n", 'A');
    printf("%d\n", 'b');
    printf("%d\n", 'c');
    printf("%d\n", '0');
    printf("%d\n", '1');
    printf("%d\n", '2');
    printf("%d\n", '$');
    printf("%d\n", '^');
    printf("%d\n", '+');
    printf("%d\n", '/');
    printf("%d\n", ' ');
    //Se pecatat nivnite ASCI vrednosti
    return 0;
}