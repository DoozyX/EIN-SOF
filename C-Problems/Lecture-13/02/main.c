#include <stdio.h>
#include <stdlib.h>

/*
 * 2.	Напиши програма која внесува елементи со функцијата vnesi несортирано, на крајот на листата,
 * ја користи функцијата sortOpagjanje која сортира елементи во опаѓачки редослед,
 * функцијата sortRastenje која ги сортира елемнтите во растечки редослед, brisi која брише елемент со дадена содржина.
 * Елементите на листата се целобројни елементи.
 */

/* samo-referencirachka struktutra */
struct listNode {
    int data; /* sekoj listNode sodrzhi karakter */
    struct listNode *nextPtr; /* pokazhuvach do sledniot jazol */
}; /* kraj na strukturata listNode */

typedef struct listNode ListNode; /* sinonim za strukturata listNode */
typedef ListNode *ListNodePtr; /* sinonim za ListNode* */

void insert(ListNodePtr *sPtr, int value) {
    ListNodePtr newPtr;      /* pointer do nov jazel */
    ListNodePtr currentPtr;

    newPtr = malloc(sizeof(ListNode)); /* sozdadi jazel */

    if (newPtr != NULL) {
        newPtr->data = value;
        newPtr->nextPtr = NULL;

        currentPtr = *sPtr;
        if (currentPtr == NULL) {
            *sPtr = newPtr;
        } else {
            while (currentPtr->nextPtr != NULL) {
                currentPtr = currentPtr->nextPtr;
            }
            currentPtr->nextPtr = newPtr;
        }

    } /* kraj if */
    else {
        printf("%c ne e vnesen. Nema dovolno memorija.\n", value);
    } /* kraj else */

} /* kraj na funkcijata insert */

/* Izbrishi element od lista */
int brisi(ListNodePtr *sPtr, int value) {
    ListNodePtr previousPtr; /* pokazhuvach do prethodniot element vo listata */
    ListNodePtr currentPtr;  /* pokazhuvach do tekovniot jazel */
    ListNodePtr tempPtr;     /* pokazhuvach do privremen element */

    /* izbrishi go prviot jazel */
    if (value == (*sPtr)->data) {
        tempPtr = *sPtr; /* chuvaj go jazelot shto se brishe */
        *sPtr = (*sPtr)->nextPtr; /* sredi ja listata */
        free(tempPtr); /* oslobodi go nepotrebniot jazel */
        return value;
    } /* kraj if */
    else {
        previousPtr = *sPtr;
        currentPtr = (*sPtr)->nextPtr;

        /* vrti dodeka ne ja najdesh tochnata pozicija */
        while (currentPtr != NULL && currentPtr->data != value) {
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
            printf("%d --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        } /* kraj while */

        printf("NULL\n\n");
    } /* kraj else */

} /* kraj na funkcijata printList */


void sortOpagjanje(ListNodePtr *sPtr) {
    if (sPtr == NULL) {
        printf("Listata e prazna.\n\n");
    } /* kraj if */
    else {
        ListNodePtr currentPtr = *sPtr;
        /* dodeka ne e kraj na listata */
        while (currentPtr != NULL) {
            ListNodePtr jPtr = currentPtr->nextPtr;
            while (jPtr != NULL) {
                if (currentPtr->data > jPtr->data) {
                    int temp = currentPtr->data;
                    currentPtr->data = jPtr->data;
                    jPtr->data = temp;
                }
                jPtr = jPtr->nextPtr;
            }
            currentPtr = currentPtr->nextPtr;
        } /* kraj while */
    } /* kraj else */

}

void sortRastenje (ListNodePtr *sPtr) {
    if (sPtr == NULL) {
        printf("Listata e prazna.\n\n");
    } /* kraj if */
    else {
        ListNodePtr currentPtr = *sPtr;
        /* dodeka ne e kraj na listata */
        while (currentPtr != NULL) {
            ListNodePtr jPtr = currentPtr->nextPtr;
            while (jPtr != NULL) {
                if (currentPtr->data < jPtr->data) {
                    int temp = currentPtr->data;
                    currentPtr->data = jPtr->data;
                    jPtr->data = temp;
                }
                jPtr = jPtr->nextPtr;
            }
            currentPtr = currentPtr->nextPtr;
        } /* kraj while */
    } /* kraj else */

}

int main() {
    ListNodePtr lista;

    insert(&lista, 1);
    insert(&lista, 5);
    insert(&lista, 3);
    insert(&lista, 4);
    printList(lista);
    brisi(&lista, 3);
    printList(lista);
    insert(&lista, 3);
    sortOpagjanje(&lista);
    printList(lista);
    sortRastenje(&lista);
    printList(lista);
    return 0;
}