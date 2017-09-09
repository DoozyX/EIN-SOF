/* Program zad1.c
   Manipuliranje so lista i rekurzivno precatenje */
#include <stdio.h>
#include <stdlib.h>

/* samo-referencirachka struktutra */
struct listNode {
   char karakter; /* sekoj listNode sodrzhi karakter */
   int broj;/* sekoj listNode sodrzhi broj */
   struct listNode *nextPtr; /* pokazhuvach do sledniot jazol */
}; /* kraj na strukturata listNode */

typedef struct listNode ListNode; /* sinonim za strukturata listNode */
typedef ListNode *ListNodePtr; /* sinonim za ListNode* */

/* prototipovi */
void insert( ListNodePtr *sPtr, char value, int br );
void printList( ListNodePtr currentPtr);
void instructions( void );

int main()
{
   ListNodePtr startPtr = NULL; /* vo pochetokot nema jazli */
   int choice,br1; /* korisnichki izbor */
   char item;  /* korisnichki vnesen karakter */

   instructions(); /* pechati meni */
   printf( "? " );
   scanf( "%d", &choice );

   /* vrti dodeka korisnikot ne vnese 3 */
   while ( choice != 2 ) {

      switch ( choice ) {

         case 1:
            printf( "Vnesi karakter: " );
            scanf( "\n%c", &item );
            printf( "Vnesi broj: " );
            scanf( "\n%d", &br1 );
            insert( &startPtr, item,br1 ); /* vnesi element vo listata */
            break;

         default:
            printf( "Greshen izbor.\n\n" );
            instructions();
            break;

      } /* kraj switch */

      printf( "? " );
      scanf( "%d", &choice );
   } /* kraj while */
   printf("Obratno napisanata lista izgleda vaka:\n");
   printList( startPtr );
   printf("NULL\n");
   printf( "Kraj.\n" );

   return 0; /* uspeshen kraj */

} /* kraj main */

/* ispechati gi instrukciite za korisnikot */
void instructions( void )
{
   printf( "Vnesi izbor:\n"
      "   1 za vnesuvanje element vo lista.\n"
      "   2 za kraj.\n" );
} /* kraj na funkcijata instructions */

/* Vnesi nova vrednost vo listata sortiranor */
void insert( ListNodePtr *sPtr, char value, int x )
{
   ListNodePtr newPtr;      /* pointer do nov jazel */
   ListNodePtr previousPtr; /* pokazhuvach do prethodniot jazel vo listata */
   ListNodePtr currentPtr;  /* pokazhuvach do tekovniot jazel */

   newPtr = malloc( sizeof( ListNode ) ); /* sozdadi jazel */

   if ( newPtr != NULL ) { /* ako ima mesto */
      newPtr->karakter = value; /* stavi vrednost vo jazelot */
      newPtr->broj = x;
      newPtr->nextPtr = NULL; /* jazelot ne e povrzan so drug jazel */

      previousPtr = NULL;
      currentPtr = *sPtr;

      /* vrti dodeka ne ja najdesh tochnata pozicija vo listata */
      while ( currentPtr != NULL && x > currentPtr->broj ) {
         previousPtr = currentPtr;          /* odi do ...   */
         currentPtr = currentPtr->nextPtr;  /* ... sledniot jazel */
      } /* kraj while */

      /* vnesi nov jazel na pochetokot na listata */
      if ( previousPtr == NULL ) {
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
      } /* kraj if */
      else { /* vnesi nov jazel megju previousPtr i currentPtr */
         previousPtr->nextPtr = newPtr;
         newPtr->nextPtr = currentPtr;
      } /* kraj else */

   } /* kraj if */
   else {
      printf( "%c ne e vnesen. Nema dovolno memorija.\n", value );
   } /* kraj else */

} /* kraj na funkcijata insert */
/* Ispechati ja listata rekurzivno */
void printList( ListNodePtr currentPtr )
{

   /* ako listata e prazna */
   if ( currentPtr == NULL ) {

      return;
   } /* kraj if */
   else {
         printList(currentPtr->nextPtr);
         printf( "[%c %d] --> ", currentPtr->karakter,currentPtr->broj );
   } /* kraj else */

} /* kraj na funkcijata printList */



