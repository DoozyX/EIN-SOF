/* Program p09_14.c
   Program za delenje karti */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* prototipovi */
void meshaj( int wDeck[][ 13 ] );
void deli( const int wDeck[][ 13 ], const char *wFace[],
           const char *wSuit[] );

int main()
{
   /* inicijaliziraj ja nizata na boi */
   const char *boja[ 4 ] = { "Srce", "Karo", "List", "Detelina" };

   /* inicijaliziraj ja nizata na brojki */
   const char *brojka[ 13 ] =
      { "As", "Dva", "Tri", "Chetiri",
        "Pet", "Shest", "Sedum", "Osum",
        "Devet", "Deset", "Dzandar", "Dama", "Pop" };

   /* inicijaliziraj niza na spil */
   int spil[ 4 ][ 13 ] = { 0 };

   srand( time( 0 ) ); /* generator na sluchajni broevi */

   meshaj( spil );

   deli( spil, brojka, boja );

   return 0; /* uspeshen kraj */

} /* kraj main */

/* meshaj gi kartite vo shpilot */
void meshaj( int wDeck[][ 13 ] )
{
   int row;    /* broj na red */
   int column; /* broj na kolona */
   int card;   /* brojach */

   /* za sekoja od 52-te karti,
   odberi sluchajno mesto vo shpilot */
   for ( card = 1; card <= 52; card++ ) {

      /* biraj nova sluchajna lokacija dodeka ne najdesh
      slobodno mesto */
      do {
         row = rand() % 4;
         column = rand() % 13;
      } while( wDeck[ row ][ column ] != 0 ); /* kraj do...while */

      /* pojtavi ja kartata na izbranoto mesto vo spilot */
      wDeck[ row ][ column ] = card;
   } /* kraj for */
} /* kraj na funkcijata meshaj */

/* deli gi kartite vo shpilot */
void deli( const int wDeck[][ 13 ], const char *wFace[],
           const char *wSuit[] )
{
   int card;   /* brojach na karti */
   int row;    /* brojach na redovi */
   int column; /* brojach na koloni */
   int par[6],bojac[6],i=0,br=0,j,f;
    int init[13]={0},init1[4]={0};
    int nov[6],hold,pass;
   /* podeli ja sekoja od 52-te karti */
   for ( card = 1; card <= 5; card++ ) {

      /* pomini niz redovite na wDeck */
      for ( row = 0; row <= 3; row++ ) {

         /* pomini niz kolonite na wDeck za tekovniot red */
         for ( column = 0; column <= 12; column++ ) {

            /* ako mestoto ja sodrzhi tekovnata karta, prikazhi ja kartata */
            if ( wDeck[ row ][ column ] == card ) {
                printf( "%8s %-8s\n", wFace[ column ], wSuit[ row ] );
                par[card]=column;

                bojac[card]=row;

            } /* kraj if */

         } /* kraj for */

      } /* kraj for */
   } /* kraj for */


   for(j=1;j<=5;j++)
   ++init[par[j]];/*vo init vleguvaat kako indeksi goleminite na kartite*/
   for(j=1;j<=5;j++)
   ++init1[bojac[j]];/*vo init1 vleguvaat kako indeksi boite na kartite*/
   printf("Od gornite karti dobivte:\n");
   /*naredbi za naoganje na kombinaciite: par, dva para,triling i cetiri na kartite*/
   for(j=0;j<=12;j++)
   {
   if(init[j]==3)
   br=3;
   if(init[j]==4)
   br=4;
   if(init[j]==2)
   f++;
   }
   if(br==4)
   printf("   C E T I R I\n");
   if(br==3)
   printf("   T R I L I N G\n");
   if(f==1)
   printf("   P A R\n");
   if(f==2)
   printf("   D V A  P A R A\n");
   br=0;
    /*naredba za odreduvanje na boja*/
    for(j=0;j<=3;j++)
    if(init1[j]==1)
    br++;
    if(br==4)
    printf("   B O J A\n");

    for(i=1;i<=5;i++)
    nov[i-1]=par[i];/*nova niza pomosna vo koja gi smestuvame goleminite na kartite*/
        /*Bubble Sort za sortiranje na pomosnata niza koja ni koristi za odreduvanje na kenta*/
        for ( pass = 1; pass < 5; pass++ ) {
      /* ciklus za kontroliranje na broj?t na promeni pri sekoe pominuvanje na nizata */
      for ( i = 0; i < 4; i++ ) {
         /* sporedi gi sosednite elementi i promeni gi ako
         prviot element e pogolem od vtoriot */
         if ( nov[ i ] > nov[ i + 1 ] ) {
            hold = nov[ i ];
            nov[ i ] = nov[ i + 1 ];
            nov[ i + 1 ] = hold;
         } /* kraj if */
      } /* kraj na vnatreshnoto for */
   } /* kraj na nadvoreshnoto for */


     f,br=0;
    /*naredbi za odreduvanje dali dobil kenta igracot*/
    for(i=0;i<4;i++)
    if(nov[i+1]==(nov[i]+1))
     br++;
     if(br==4)
    {
    for(j=0;j<=3;j++)
    if(init1[j]==1)
    f++;
    if(f==4)
    printf("   K E N T A\n");
    }
 printf("Vi cestitame na dobivkata.\n");
} /* kraj na funkcijata deli */

