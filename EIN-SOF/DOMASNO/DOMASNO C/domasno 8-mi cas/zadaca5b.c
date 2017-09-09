 /* Program zadaca5a_8.c
   rekurzivno selekcisko sorturanje na niza*/
#include <stdio.h>
void selekcija(int ra[], int start, const int length);
int brelementi;
/* pochetok na izvrshuvanjeto */
int main()
{
   int  i;
   int niza[100];
   printf( "Vnesi go brojot na elementi vo nizata:\n" );
   scanf("%d",&brelementi);
   printf("vnesuvaj gi elementite na nizata koja sakas da ja sortiram\n");
   for ( i = 0; i < brelementi; i++ ) {
      scanf("%d", &niza[ i ] );
   } /* kraj for */
   selekcija(niza,0,brelementi);
  /* ispechati ja sodrzhinata na nizata n vo tabularen format */
   for ( i = 0; i < brelementi; i++ ) {
      printf( "%7d%13d\n", i, niza[ i ] );
   } /* kraj for */
   return 0;
} /*kraj na main*/
/*ova e selection sort resena rekurzivno za sortiranje na nizi*/

void selekcija(int n[], int start, const int dolzina)
{
    if (start < dolzina) {

	/*inicijaliziranje na min*/
      int min = n[start], min_na = start,indeks;

	/*najdi nareden minimum*/
      for ( indeks = start; indeks < dolzina; indeks++) {
         if (n[indeks] < min) {
            min = n[indeks];
            min_na = indeks;
         }/*if*/
      }/*for*/

	/*stavi go min napred*/
      n[min_na] = n[start];
      n[start] = min;

	/*rekurziski povik*/
      selekcija(n, start + 1, dolzina);
   } /*if*/

} /*kraj na selekcijata*/

