/* Program zad2.c
   Manipuliranje so lista vklucuvajki podreduvanje vo opagacki i rastecki redosled */
#include <stdio.h>
#include <stdlib.h>

/* samo-referencirachka struktutra */
struct listNode {
   int data; /* sekoj listNode sodrzhi broj */
   struct listNode *nextPtr; /* pokazhuvach do sledniot jazol */
}; /* kraj na strukturata listNode */

typedef struct listNode ListNode; /* sinonim za strukturata listNode */
typedef ListNode *ListNodePtr; /* sinonim za ListNode* */
ListNodePtr startPtr = NULL; /* vo pochetokot nema jazli */
/* prototipovi */
void vnesi( ListNodePtr *sPtr, int value );
char brisi( ListNodePtr *sPtr, int value );
int isEmpty( ListNodePtr sPtr );
void sortRastecki(ListNodePtr *sPtr);
void sortOpagacki(ListNodePtr *sPtr);
void sortNEOpaganje(ListNodePtr *sPtr);
void sortNERastenje(ListNodePtr *sPtr);
void printList( ListNodePtr currentPtr );
void instructions( void );
void instructions1( void );
int main()
{
   
   int choice; /* korisnichki izbor */
   int choice1; /* korisnichki izbor */
   int item;  /* korisnichki vnesen karakter */
   void (*f[ 4 ])( ListNodePtr *sPtr ) = { sortRastecki, sortOpagacki, sortNEOpaganje, sortNERastenje };


   instructions(); /* pechati meni */
   printf( "? " );
   scanf( "%d", &choice );

   /* vrti dodeka korisnikot ne vnese 3 */
   while ( choice != 4 ) {

      switch ( choice ) {

         case 1:
            printf( "Vnesi broj: " );
            scanf( "\n%d", &item );
            vnesi( &startPtr, item ); /* vnesi element vo listata */
            printList( startPtr );
            break;

         case 2:

            /* ako listata ne e prazna */
            if ( !isEmpty( startPtr ) ) {
               printf( "Vnesi karakter za brishenje: " );
               scanf( "\n%d", &item );

               /* ako brojot e vo listata, izbrishi go */
               if ( brisi( &startPtr, item ) ) { /* izbrishi */
                  printf( "%d deleted.\n", item );
                  printList( startPtr );
               } /* kraj if */
               else {
                  printf( "%d ne e vo listata.\n\n", item );
               } /* kraj else */

            } /* kraj if */
            else {
               printf( "Listata e prazna.\n\n" );
            } /* kraj else */

            break;
         case 3: 
			     instructions1(); /* pechati meni */
				 scanf("%d",&choice1);
                 (*f[ choice1-1 ])( &startPtr );
                 printList( startPtr );
            
            break;
         
         default:
            printf( "Greshen izbor.\n\n" );
            instructions();
            break;

      } /* kraj switch */

      printf( "? " );
      scanf( "%d", &choice );
   } /* kraj while */

   printf( "Kraj.\n" );

   return 0; /* uspeshen kraj */

} /* kraj main */

/* ispechati gi instrukciite za korisnikot */
void instructions( void )
{
   printf( "Vnesi izbor:\n"
      "   1 za vnesuvanje element vo lista.\n"
      "   2 za brishenje element od lista.\n"
      "   3 za sortiranje.\n"
      "   4 za kraj.\n" );
} /* kraj na funkcijata instructions */

/* ispechati gi instrukciite za korisnikot */
void instructions1( void )
{
   printf( "Vnesi izbor:\n"
      "   1 Rastecki.\n"
      "   2 Opagacki.\n"
      "   3 Neopagacki.\n"
      "   4 Nerastecki.\n" );
} /* kraj na funkcijata instructions1 */
/* Vnesi nova vrednost vo listata na krajot */
void vnesi( ListNodePtr *sPtr, int value )
{
   ListNodePtr newPtr;      /* pointer do nov jazel */

  

   newPtr = malloc( sizeof( ListNode ) ); /* sozdadi jazel */

   if ( newPtr != NULL ) { /* ako ima mesto */
      newPtr->data = value; /* stavi vrednost vo jazelot */
      newPtr->nextPtr = newPtr; /* jazelot ne e povrzan so drug jazel */


      

         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
         
         

   } /* kraj if */
   else {
      printf( "%c ne e vnesen. Nema dovolno memorija.\n", value );
   } /* kraj else */

} /* kraj na funkcijata insert */

/* Izbrishi element od lista */
char brisi( ListNodePtr *sPtr, int value )
{
   ListNodePtr previousPtr; /* pokazhuvach do prethodniot element vo listata */
   ListNodePtr currentPtr;  /* pokazhuvach do tekovniot jazel */
   ListNodePtr tempPtr;     /* pokazhuvach do privremen element */

   /* izbrishi go prviot jazel */
   if ( value == ( *sPtr )->data ) {
      tempPtr = *sPtr; /* chuvaj go jazelot shto se brishe */
      *sPtr = ( *sPtr )->nextPtr; /* sredi ja listata */
      free( tempPtr ); /* oslobodi go nepotrebniot jazel */
      return value;
   } /* kraj if */
   else {
      previousPtr = *sPtr;
      currentPtr = ( *sPtr )->nextPtr;

      /* vrti dodeka ne ja najdesh tochnata pozicija */
      while ( currentPtr != NULL && currentPtr->data != value ) {
         previousPtr = currentPtr;         /* odi do ...   */
         currentPtr = currentPtr->nextPtr; /* ... sledniot jazel */
      } /* kraj while */

      /* izbrishi go jazelot na currentPtr */
      if ( currentPtr != NULL ) {
         tempPtr = currentPtr;
         previousPtr->nextPtr = currentPtr->nextPtr;
         free( tempPtr );
         return value;
      } /* kraj if */

   } /* kraj else */

   return '\0';

} /* kraj na funkcijata delete */

/* Vrati 1 ako listata e prazna, 0 inaku */
int isEmpty( ListNodePtr sPtr )
{
   return sPtr == NULL;

} /* kraj na funkcijata isEmpty */

/*za sortiranje na listata vo neopagacki redosled*/
void sortNEOpaganje(ListNodePtr *sPtr)
{
    ListNodePtr Ptr1,Ptr2; /*za dvizenje niz listata*/
    int pom;
    Ptr1=*sPtr; /*pocetna pozicija*/
    while (Ptr1!=NULL)
    {
        Ptr2=Ptr1;
        while (Ptr2!=NULL)
        {
            if (Ptr1->data>Ptr2->data)
            {
                pom=Ptr1->data;
                Ptr1->data=Ptr2->data;
                Ptr2->data=pom;
            }
            Ptr2=Ptr2->nextPtr;
        }
         Ptr1=Ptr1->nextPtr;
    }
} /*kraj na funkcijata neopagacki redosled*/

/*za sprtiranje na listata vo nerastecki redosled*/
void sortNERastenje(ListNodePtr *sPtr)
{
    ListNodePtr Ptr1,Ptr2;
    int pom;
    Ptr1=*sPtr;
    while (Ptr1!=NULL)
    {
        Ptr2=Ptr1;
        while (Ptr2!=NULL)
        {
            if (Ptr1->data<Ptr2->data)
            {
                pom=Ptr1->data;
                Ptr1->data=Ptr2->data;
                Ptr2->data=pom;
            }
            Ptr2=Ptr2->nextPtr;
        }
         Ptr1=Ptr1->nextPtr;
    }
} /*kraj na funkcijata nerastecki redosled*/

/*za sortiranje na listata vo rasteckii redosled*/
void sortRastecki(ListNodePtr *sPtr)
{   
    //char brisi( ListNodePtr *sPtr, int value );
    ListNodePtr Ptr1,Ptr2; /*za dvizenje niz listata*/
    int pom;
    Ptr1=*sPtr; /*pocetna pozicija*/
    while (Ptr1!=NULL)
    {
        Ptr2=Ptr1;
        while (Ptr2!=NULL)
        {
            if (Ptr1->data>Ptr2->data)
            {
                pom=Ptr1->data;
                Ptr1->data=Ptr2->data;
                Ptr2->data=pom;
            }
			/* ********************************************************************** */
			/*idejata mi e da gi izbriseme jazelot koj go ima poveke pati vo listata samo nesto mi javuva greska
			if (Ptr1->data==Ptr2->data)
			{ brisi(&startPtr,Ptr->data);
			} */

            Ptr2=Ptr2->nextPtr;
        }
         Ptr1=Ptr1->nextPtr;
    }
} /*kraj na funkcijata sortRastecki*/

/*za sprtiranje na listata vo opagacki redosled*/
void sortOpagacki(ListNodePtr *sPtr)
{
    ListNodePtr Ptr1,Ptr2;
    int pom;
    Ptr1=*sPtr;
    while (Ptr1!=NULL)
    {
        Ptr2=Ptr1;
        while (Ptr2!=NULL)
        {
            if (Ptr1->data<Ptr2->data)
            {
                pom=Ptr1->data;
                Ptr1->data=Ptr2->data;
                Ptr2->data=pom;
            }
            /* ********************************************************************** */
			/*idejata mi e da gi izbriseme jazelot koj go ima poveke pati vo listata samo nesto mi javuva greska
			if (Ptr1->data==Ptr2->data)
			{ brisi(&startPtr,Ptr->data);
			} */
            Ptr2=Ptr2->nextPtr;
        }
         Ptr1=Ptr1->nextPtr;
    }
} /*kraj na funkcijata sortOpagacki*/


/* Ispechati ja listata */
void printList( ListNodePtr currentPtr )
{

   /* ako listata e prazna */
   if ( currentPtr == NULL ) {
      printf( "Listata e prazna.\n\n" );
   } /* kraj if */
   else {
      printf( "Listata e:\n" );

      /* dodeka ne e kraj na listata */
      while ( currentPtr != NULL ) {
         printf( "%d --> ", currentPtr->data );
         currentPtr = currentPtr->nextPtr;
      } /* kraj while */

      printf( "NULL\n\n" );
   } /* kraj else */

} /* kraj na funkcijata printList */


