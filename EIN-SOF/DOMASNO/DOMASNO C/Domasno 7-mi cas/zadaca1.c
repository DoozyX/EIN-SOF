  /* Program zadaca1.c
   proverka dali brojot e paren */
#include <stdio.h>

int paren( int y ); /* funkciski prototip */

/* funkcijata main go zapochnuva izvrshuvanjeto na programot */
int main()
{
   int x,n; /* brojach */
   printf("vnesi za kolku broja sakas da proveris parnost");
   scanf("%d",&n);
   /* vnesuva n  broja i proveruvaj dali se parni */
   for ( x = 1; x <= n; x++ ) {
      printf( "brojot %d e %d\n",x,paren( x ) ); /* funkciski povik */
   } /* kraj for */

   printf( "\n" );

   return 0; /* uspeshen kraj */

} /* kraj main */

/* definicija na funkcijata square vrakja kvadrat na parametarot */
int paren( int y ) /* y e kopija na argumentot vo funkcijata */
{  if (y%2)
   return 0;
   return 1; /* vraka 0 za neparen broj i 1 za paren broj*/

} /* kraj na funkcijata paren */

