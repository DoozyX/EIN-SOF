/* Program zadaca4b_8.c
   vnesuvanje i ispisuvanje na matrica rekurzivno*/
#include <stdio.h>
int red,kol,j=0;         /*redici i koloni na matricata i j e potrebna kako globalna promenliva za funkcijata*/
int matrica[100][100];
int vnesimatrica( int a[red][kol]);   /* funkciski prototip */
int pechatimatrica( const int a[red][ kol] );

/* pochetok na izvrshuvanjeto */
int main()
{


   printf( "Vnesi go brojot na redovi na matricata:\n" );
   scanf("%d",&red);

   printf( "Vnesi go brojot na koloni vo matricata:\n" );
   scanf("%d",&kol);
   printf( "Vnesuvaj gi elementite na matricata\n" );
   vnesimatrica(matrica);  /*ja povikuvame funkcijata vnesimatrica*/
   printf( "Eve ja matricata\n" );
   j=0;
   pechatimatrica( matrica );  /*ja povikuvame funkcijata pechatimatrica*/

   return 0; /* uspeshen kraj */

} /* kraj na main */

/* rekurzivna funkcija koja pechati matrica */
int pechatimatrica(  const int a[red][kol] )
{   static int i=0;

    printf("%d ",a[i][j]);
    ++j;
    if (j<kol)
    pechatimatrica(a);
    ++i;
    if (i<red)
    {
    printf("\n");
    j=0;
    pechatimatrica(a);
    }
    return 0;
} /* kraj na funkcijata pecatimatrica */
 /* rekurzivna funkcija koja vnesuva matrica*/
 int vnesimatrica(  int a[red][kol] )
{   static int i=0;

    scanf("%d",&a[i][j]);
    ++j;
    if (j<kol)
    vnesimatrica(a);
    ++i;
    if (i<red)
    {
    j=0;
    vnesimatrica(a);
    }
    return 0;


} /* kraj na funkcijata vnesimatrica */

