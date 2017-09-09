#include <stdio.h>
#include <stdlib.h>

/*
 * 1.	Напиши функција pecatiListaNanazad која рекурзивно ги печати елементите од листа наназад.
 * Елементите на листата се состојат од едно целоборјно поле broj и еден карактер кој се вика karakter.
 */

/* samo-referencirachka struktutra */
struct listNode {
    int broj;
    char karakter; /* sekoj listNode sodrzhi karakter */
    struct listNode *nextPtr; /* pokazhuvach do sledniot jazol */
}; /* kraj na strukturata listNode */

typedef struct listNode ListNode; /* sinonim za strukturata listNode */
typedef ListNode *ListNodePtr; /* sinonim za ListNode* */

void instructions(void) {
    printf("Vnesi izbor:\n"
                   "   1 za vnesuvanje element vo lista.\n"
                   "   2 za brishenje element od lista.\n"
                   "   3 za kraj.\n");
} /* kraj na funkcijata instructions */

/* Vnesi nova vrednost vo listata sortiranor */
void insert(ListNodePtr *sPtr, char karakter, int broj) {
    ListNodePtr newPtr;      /* pointer do nov jazel */
    ListNodePtr previousPtr; /* pokazhuvach do prethodniot jazel vo listata */
    ListNodePtr currentPtr;  /* pokazhuvach do tekovniot jazel */

    newPtr = malloc(sizeof(ListNode)); /* sozdadi jazel */

    if (newPtr != NULL) { /* ako ima mesto */
        newPtr->karakter = karakter; /* stavi vrednost vo jazelot */
        newPtr->broj = broj;
        newPtr->nextPtr = NULL; /* jazelot ne e povrzan so drug jazel */

        previousPtr = NULL;
        currentPtr = *sPtr;

        /* vrti dodeka ne ja najdesh tochnata pozicija vo listata */
        while (currentPtr != NULL && karakter > currentPtr->karakter) {
            previousPtr = currentPtr;          /* odi do ...   */
            currentPtr = currentPtr->nextPtr;  /* ... sledniot jazel */
        } /* kraj while */

        /* vnesi nov jazel na pochetokot na listata */
        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        } /* kraj if */
        else { /* vnesi nov jazel megju previousPtr i currentPtr */
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        } /* kraj else */

    } /* kraj if */
    else {
        printf("%c ne e vnesen. Nema dovolno memorija.\n", karakter);
    } /* kraj else */

} /* kraj na funkcijata insert */

/* Izbrishi element od lista */
char delete(ListNodePtr *sPtr, char value) {
    ListNodePtr previousPtr; /* pokazhuvach do prethodniot element vo listata */
    ListNodePtr currentPtr;  /* pokazhuvach do tekovniot jazel */
    ListNodePtr tempPtr;     /* pokazhuvach do privremen element */

    /* izbrishi go prviot jazel */
    if (value == (*sPtr)->karakter) {
        tempPtr = *sPtr; /* chuvaj go jazelot shto se brishe */
        *sPtr = (*sPtr)->nextPtr; /* sredi ja listata */
        free(tempPtr); /* oslobodi go nepotrebniot jazel */
        return value;
    } /* kraj if */
    else {
        previousPtr = *sPtr;
        currentPtr = (*sPtr)->nextPtr;

        /* vrti dodeka ne ja najdesh tochnata pozicija */
        while (currentPtr != NULL && currentPtr->karakter != value) {
            previousPtr = currentPtr;         /* odi do ...   */
            currentPtr = currentPtr->nextPtr; /* ... sledniot jazel */
        } /* kraj while */

        /* izbrishi go jazelot na currentPtr */
        if (currentPtr != NULL) {
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return value;
        } /* kraj if */

    } /* kraj else */

    return '\0';

} /* kraj na funkcijata delete */

/* Vrati 1 ako listata e prazna, 0 inaku */
int isEmpty(ListNodePtr sPtr) {
    return sPtr == NULL;

} /* kraj na funkcijata isEmpty */

/* Ispechati ja listata */
void printList(ListNodePtr currentPtr) {

    /* ako listata e prazna */
    if (currentPtr == NULL) {
        printf("Listata e prazna.\n\n");
    } /* kraj if */
    else {
        printf("Listata e:\n");

        /* dodeka ne e kraj na listata */
        while (currentPtr != NULL) {
            printf("%c --> ", currentPtr->karakter);
            currentPtr = currentPtr->nextPtr;
        } /* kraj while */

        printf("NULL\n\n");
    } /* kraj else */

} /* kraj na funkcijata printList */


void pecatiListaNanazad(ListNodePtr currentPtr) {
    if (currentPtr != NULL) {
        pecatiListaNanazad(currentPtr->nextPtr);
        printf("broj: %d\tkarakter:%c\n", currentPtr->broj, currentPtr->karakter);
    }
}

int main() {
    ListNodePtr lista = NULL;
    insert(&lista, 'a', 1);
    insert(&lista, 'b', 2);
    insert(&lista, 'c', 3);
    insert(&lista, 'd', 4);
    printList(lista);
    printf("\n");
    pecatiListaNanazad(lista);
    return 0;
}