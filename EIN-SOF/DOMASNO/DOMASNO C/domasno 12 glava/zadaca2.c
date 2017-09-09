/* Program za zadaca 2 koja e za pretvaranje vo obraten redosled na daden broj i pecatenje na negovata vrednost */
#include <stdio.h>
#include<math.h>
 void pechatiBitovi( unsigned value ); /* prototip */
 void prevrtiBitovi( unsigned value ); /*prototip za prevrti f-jata*/
int main()

{

   unsigned number; /* inicijaliziraj number */
   printf("vnesi go brojot\n");
   scanf("%u",&number);/*go vnesuvame sakaniot broj*/
   printf( "\nRezultatot od prevrtuvanjeto na brojot:\n" );
    pechatiBitovi( number );/*go pecatime brojot obicen*/
   printf( "e prevrteniot broj: \n");
   prevrtiBitovi( number );/*go prevrtuvame brojot*/
  

   return 0; /* uspeshen kraj */

} /* kraj na main */

 

/* prikazhi gi bitovite na unsigned integer vrednost */

void pechatiBitovi( unsigned value )

{

   unsigned c; /* counter */

  

   /* deklariraj pechatiMaska i shiftiraj ja vo levo za 31 bit */

   unsigned pechatiMaska = 1 << 31;

 

   printf( "%7u = ", value );

 

   /* pomini niz bitovite */

   for ( c = 1; c <= 32; c++ ) {

      putchar( value & pechatiMaska ? '1' : '0' );

      value <<= 1; /* shiftiraj ja vrednosta vo levo za 1 */

 

      if ( c % 8 == 0 ) { /* ispechati prazno mesto posle 8 bita */

         putchar( ' ' );

      } /* kraj if */

   } /* kraj for */

   putchar( '\n' );

} /* kraj na funkcijata pechatiBitovi */
/*pocetok na funkcijata prevrti koja so tekot na pecatenjeto na brojot ja smeta negovata vrednost
i mozeme da kazeme deka e dosta minimalen kodot na zadacata*/
void prevrtiBitovi( unsigned value )

{

   unsigned c; /* counter */
   unsigned long broj;/*vrednost koja ke ja vratime*/


   /* deklariraj pechatiMaska */

   unsigned pechatiMaska = 1;

   broj=0;  /*go inicijalizirame brojot na 0*/
   /* pomini niz bitovite */

   for ( c = 1; c <= 32; c++ ) {

      putchar( value & pechatiMaska ? '1' : '0' );
       if(value & pechatiMaska)/*ako vrednosta e 1 t.e. ako imame 1 na dadenoto mesto */
        broj+=(unsigned long)pow(2,(32-c));/*za dobivanje na brojot,koristejki go indeksot c kako stepen*/
       value >>= 1;
      /* shiftiraj ja vrednosta vo desno za 1 */
	  if ( c % 8 == 0 ) { /* ispechati prazno mesto posle 8 bita */

       putchar( ' ' );

      } /* kraj if */

   } /* kraj for */

  printf("ili negovata vrednost e: %u",broj);
   putchar( '\n' );

} /* kraj na funkcijata prevrtiBitovi */
