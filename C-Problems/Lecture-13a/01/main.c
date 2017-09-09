#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 1.	Напиши програм кој внесува линија текст и користи стек за да се испечати текстот во обратен дерослед.
 * Текстот да содржи и празни места.
 */

/* samo-referencirachka struktura */
struct stackNode {
    char *data;                  /* definiraj int podatoci */
    struct stackNode *nextPtr; /* stackNode pokazhuvach */
}; /* kraj na strukturata stackNode */

typedef struct stackNode StackNode; /* sinonim za struct stackNode */
typedef StackNode *StackNodePtr; /* sinonim za StackNode* */
/* Vnesi jazel na vrvot na stekot */
void push(StackNodePtr *topPtr, char *info) {
    StackNodePtr newPtr; /* pokazhuvach do noviot jazel */

    newPtr = malloc(sizeof(StackNode));

    /* vnesi jazel na vrvot na stekot */
    if (newPtr != NULL) {
        newPtr->data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    } /* kraj if */
    else { /* nema mesto */
        printf("%s ne e vnesen. Nema dovolno memorija.\n", info);
    } /* kraj else */

} /* kraj na funkcijata push */

/* Izvadi jazel od vrvot na stekot */
char *pop(StackNodePtr *topPtr) {
    StackNodePtr tempPtr; /* pokazhuvach do privremen jazol */
    char *popValue;
    tempPtr = *topPtr;
    popValue = (*topPtr)->data;
    *topPtr = (*topPtr)->nextPtr;
    free(tempPtr);

    return popValue;


} /* kraj na funkcijata pop */

/* Ispechati go stekot */
void printStack(StackNodePtr currentPtr) {

    /* ako stekot e prazen */
    if (currentPtr == NULL) {
        printf("Stekot e prazen.\n\n");
    } /* kraj if */
    else {
        printf("Stekot e:\n");

        /* dodeka ne e kraj na stekot */
        while (currentPtr != NULL) {
            printf("%s --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        } /* kraj while */

    } /* kraj else */

} /* kraj na funkcijata printList */

/* Vrati 1 ako stekot e prazen,0 inaku */
int isEmpty(StackNodePtr topPtr) {
    return topPtr == NULL;

} /* kraj na funkcijata isEmpty */

int main() {
    char str[255];
    gets(str);
    char *token = strtok(str, " ");
    StackNodePtr stack = NULL;

    while (token != NULL) {
        push(&stack, token);
        token = strtok(NULL, " ");
    }

    while (!isEmpty(stack)) {
        printf("%s ", pop(&stack));
    }
    return 0;
}