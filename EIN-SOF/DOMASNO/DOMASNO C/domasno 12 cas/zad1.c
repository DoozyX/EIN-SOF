/*Programa zad1.c*/
/*za mnozenje so broj koj e  stepen na dva*/
#include <stdio.h>

/*prototipi na funkciite*/
unsigned MnoziSoStepenOdDva(int broj, int stepen);
void prikaziBitovi( unsigned vrednost ); /* prototip */

 

int main()

{ 

   unsigned broj; /* promenliva koja go chuva korisnichkiot vlez */
   int stepen;
 

   printf( "Vnesi go brojot: " );

   scanf( "%u", &broj );
   printf("Vnesi go mnozitelot\n");
   scanf("%d",&stepen);
   
   
  
   prikaziBitovi( MnoziSoStepenOdDva(broj,stepen));

   

   return 0; /* uspeshen kraj */

 

} /* kraj na main */

/*funkcijata go raboti slednovo broj * 2^stepen */
unsigned MnoziSoStepenOdDva(int broj,int stepen)
{
	return (broj << stepen);
} /* kraj na funkcijata  MnoziSoStepenOdDva */

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

 

