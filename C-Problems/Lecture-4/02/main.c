#include <stdio.h>

/*
 * 2.      Модифицирај го програмот p04_02.c така да наместо да е предефинирана вредноста на променливата counter,
 *         треба на корисникот да му се овозможи тој да внесе колку ученици има во класот.
 */

/* Program p04_02.c
   Program koj pregmetuva prosek na klas
   so povtoruvanje kontrolirano od brojach */
#include <stdio.h>

/* pochnuva izvrshuvanjeto na prоgramot */
int main() {
    int counter; /* brojach na vneseni oceni */
    int grade;   /* vrednost na ocena */
    int total;   /* suma na ocenite vneseni od korisnikot */
    int average; /* sredna vrednost na ocenite */
    int size;

    /* inicijalizacija */
    total = 0;   /* inicijaliziraj total */
    counter = 1; /* inicijaliziraj go brojachot na ciklusi */

    printf("Vnesi kolku ucenici ima klasot:");
    scanf("%d", &size);
    /* procesiranje */
    while (counter <= size) {     /* povtori 10 pati */
        printf("Vnesi ocena: "); /* prompt za vlez */
        scanf("%d", &grade);     /* chitaj ocena od korisnikot */
        total = total + grade;     /* dodaj ja ocenata na total */
        counter = counter + 1;     /* zgolemi go brojachot */
    } /* kraj na while */

    /* zavrshna faza */
    average = total / size; /* celobrojno delenje */

    printf("Srednata vrednost na klasot e %d\n", average); /* pechati rezultat */

    return 0; /* uspeshen kraj na programot */

} /* kraj na main */
