  /* Program zadaca4a_8.c
   vnesuvanje i ispisuvanje na matrica */
#include <stdio.h>
int red,kol;           /*redici i koloni na matricata*/
int matrica[100][100];
void vnesimatrica( int a[red][kol]);   /* funkciski prototip */
void pechatimatrica( const int a[red][ kol] );

/* pochetok na izvrshuvanjeto */
int main()
{


   printf( "Vnesi go brojot na redovi na matricata:\n" );
   scanf("%d",&red);

   printf( "Vnesi go brojot na koloni vo matricata:\n" );
   scanf("%d",&kol);
   printf( "Vnesuvaj gi elementite na matricata\n" );
   vnesimatrica(matrica);
   printf( "Eve ja matricata\n" );
   pechatimatrica( matrica );

   return 0; /* uspeshen kraj */

} /* kraj na main */

/* funkcija koja pechati matrica */
void pechatimatrica( const int a[red][kol] )
{
   int i; /* brojach na redovi */
   int j; /* brojach na koloni */

   /* pomini niz redovite */
   for ( i = 0; i <= red-1; i++ ) {
      /* ispechati gi vrednostite na kolonite */
      for ( j = 0; j <= kol-1; j++ ) {
         printf( "%d ", a[ i ][ j ] );
      } /* kraj za vnatreshnoto for */
      printf( "\n" ); /* nova linija na izlezot */
   } /* kraj na nadvoreshnoto for */
} /* kraj na funkcijata pecatimatrica */

 void vnesimatrica(  int a[red][kol] )
{
   int i; /* brojach na redovi */
   int j; /* brojach na koloni */

   /* pomini niz redovite */
   for ( i = 0; i <= red-1; i++ ) {

      for ( j = 0; j <= kol-1; j++ ) {
         scanf("%d",&a[i][j]);
      } /* kraj za vnatreshnoto for */

   } /* kraj na nadvoreshnoto for */
} /* kraj na funkcijata vnesimatrica*/
