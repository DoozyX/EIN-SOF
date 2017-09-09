/* Program zadaca2.c
   Programa so koja se proveruva dali indeksite na edna niza se prosti broevi, ako se dobivaat vrednost 0*/
#include <stdio.h>
#define max 100
int prost(int x);/*funkcija prototip, za proverka na broj dali e prost*/
/* zapochnuva izvrshuvanjeto */
int main()
{
    /* simbolichkata konstanata SIZE ja koristime za odreduvanje na goleminata na nizata */
   int s[ max ]; /* nizata s ima max elementi */
   int j,n; /* brojach */
   printf("Vnesi kolku elementi sakas da ima nizata, maksimum do 100\n ");
   scanf("%d",&n);
   for ( j = 0; j < n; j++ ) { /* postavi gi vrednostite na 1 */
      s[ j ]= 1;
   } /* kraj for */
   printf("Prvobiten izgled na nizata:\n");
   printf( "%s%13s\n", "Element", "Vrednost" );

   /* ispechati ja sodrzhinata na nizata s vo tabularen format */
   for ( j = 0; j < n; j++ ) {
      printf( "%7d%13d\n", j, s[ j ] );
   } /* kraj for */
   for ( j = 0; j < n; j++ )/* proveri koi indeksi se prosti broevi*/
   {if (prost(j))
        s[j]=0;/*ako e prost na nizata i zapisuvame na toa mesto 0*/
   }
   printf("Posle promenata se dobiva nizata:\n");
   /* ispechati ja sodrzhinata na nizata s vo tabularen format, posle izmenata */
    printf( "%s%13s\n", "Element", "Vrednost" );
        for ( j = 0; j < n; j++ ) {
      printf( "%7d%13d\n", j, s[ j ] );
   } /* kraj for */

   return 0; /* uspeshen kraj */

} /* kraj main */
int prost(int x)/*definicija na prost funkcijata*/
{   int i;

    if ((x==1)||(x==2)||(x==0))
    return 1; /*ako e vneseniot bro 0,1,2 togas e prost i vrakame 1*/
    for(i=2;i<x;i++)
    {    if (!(x%i))
        return 0;/*ako e deliv so nekoj broj od 2 do negovata vrednost, togas vrakame 0*/
    }
    return 1;
}
    
    
