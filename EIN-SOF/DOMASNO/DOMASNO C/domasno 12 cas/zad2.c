/*Program zad2.c*/
/*programa za preslikuvanje na bitovite kako vo ogledalo*/
#include <stdio.h>
#include <math.h>
 
unsigned prevrtiBitovi ( unsigned vrednost);
void prikaziBitovi( unsigned vrednost ); /* prototip */

 

int main()

{ 

   unsigned x; /* promenliva koja go chuva korisnichkiot vlez */

 

   printf( "Vnesi unsigned integer: " );

   scanf( "%u", &x );

 

   prikaziBitovi( x );
   prikaziBitovi(prevrtiBitovi(x));
   

   return 0; /* uspeshen kraj */

 

} /* kraj na main */

/*funkcija za prevrtuvanje na bitovite*/

unsigned prevrtiBitovi ( unsigned vrednost)
{   
	unsigned pomosen=0;
	unsigned mask=1; /*se koristi kako maska*/
	
	int j; /*se koristi kako brojac*/
    for (j=31;j>=0;j--)
	{
	pomosen+=(mask & vrednost)*(unsigned long) pow(2,j);
   vrednost>>=1;
	}
	return pomosen;
	}  /* kraj na funkcijata prevrtiBitovi*/

/* ispechati gi bitovite na vrednost na unsigned integer */

void prikaziBitovi( unsigned vrednost )

{ 

   unsigned c; /* brojach */

 

   /* definiraj prikazhiMaska i shiftiraj ja vo levo za 31 bit */

   unsigned prikazhiMaska = 1 << 31; 

 

   printf( "%10u = ", vrednost );

 

   /* pomini niz bitovite */ 

   for ( c = 1; c <= 32; c++ ) { 

      putchar( vrednost & prikazhiMaska ? '1' : '0' );

      vrednost <<= 1; /* shiftiraj ja vrednosta vo levo za 1 */   

 

      if ( c % 8 == 0 ) { /* ispechati prazno mesto posle 8 bita */

         putchar( ' ' );

      } /* kraj if */

   } /* kraj for */

   putchar( '\n' );

} /* kraj na funkcijata prikaziBitovi */

 

