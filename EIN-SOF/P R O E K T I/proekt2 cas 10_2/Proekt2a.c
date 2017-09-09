/* Program p09_14.c
   Program za delenje karti */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* prototipovi */
void meshaj( int wDeck[][ 13 ] );
int deli( const int wDeck[][ 13 ], const char *wFace[],
           const char *wSuit[],int niza[2]);

int main()
{
   /* inicijaliziraj ja nizata na boi */
   const char *boja[ 4 ] = { "Srce", "Karo", "List", "Detelina" };
   int prv,vtor;
   /* inicijaliziraj ja nizata na brojki */
   const char *brojka[ 13 ] =
      { "As", "Dva", "Tri", "Chetiri",
        "Pet", "Shest", "Sedum", "Osum",
        "Devet", "Deset", "Dzandar", "Dama", "Pop" };
   int niza1[2]={0};/*pomosni nizi za doznavanje na brojot na kartata*/
   int niza2[2]={0};
   int pom;
   /* inicijaliziraj niza na spil */
   int spil1[ 4 ][ 13 ] = { 0 };
   int spil2[ 4 ][ 13 ] = { 0 };
   srand( time( 0 ) ); /* generator na sluchajni broevi */

   meshaj( spil1 );
   meshaj(spil2);

   prv=deli( spil1, brojka, boja,niza1);/*za igracite po 5 karti*/
   printf("\n");
   vtor=deli( spil2, brojka, boja,niza2);/*za igracite po 5 karti*/
   printf("\n");
   printf("Goredadenite kombinacii od karti se za dvata igraci soodvetno.\n");
   printf("\n");
   if(niza1[0]<niza1[1])/*rutini za proverka na goleminite na kartite*/
   {pom=niza1[0];
   niza1[0]=niza1[1];
   niza1[1]=pom;
   }
   /*ja podreduvame pomosnata niza za olesnuvanje na goleminata na kombinacijata pri dva para*/
   if(niza2[0]<niza2[1])
   {pom=niza2[0];
   niza2[0]=niza2[1];
   niza2[1]=pom;
   }
   if(prv>vtor)

   printf("Prviot igrac pobedil");

   else
      if(prv==vtor)
      {
          if(niza1[1]==0)
          {
          if(niza1[0]>niza2[0])
          printf("Prviot igrac pobedil");
          else
          if(niza1[0]<niza2[0])
          printf("Vtoriot igrac pobedil");
          else
           printf("Nikoj ne pobedil");
          }
          else
          {
            if(niza1[0]>niza2[0])
             printf("Prviot igrac pobedil");
             else
             if(niza1[0]<niza2[0])
              printf("Vtoriot igrac pobedil");
              else
              printf("Nikoj ne pobedil");
          }
             
      }
      else
      printf("Vtoriot igrac pobedil");
    printf(", bidejki ");
    /*Switch naredbi za da vidime koj sto dobil*/
    switch (prv)
    {
    case 0:printf("prviot ne dobil nisto,");break;
    case 1:printf("prviot dobil par(pogolem/pomal),");break;
    case 2:printf("prviot dobil dva para(pogolemi/pomali),");break;
    case 3:printf("prviot dobil boja,");break;
    case 4:printf("prviot dobil triling,");break;
    case 5:printf("prviot dobil cetvorka,");break;
    case 6:printf("prviot dobil kenta,");break;
   }
   printf(" a ");
   switch(vtor){
    case 0:printf("vtoriot ne dobil nisto.\n");break;
    case 1:printf("vtoriot dobil par(pogolem/pomal).\n");break;
    case 2:printf("vtoriot dobil dva para(pogolemi/pomali).\n");break;
    case 3:printf("vtoriot dobil boja.\n");break;
    case 4:printf("vtoriot dobil triling.\n");break;
    case 5:printf("vtoriot dobil cetvorka.\n");break;
    case 6:printf("vtoriot dobil kenta.\n");break;
   }
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
/*funkcijata vraka integer so cel da se vidi koja kombinacija mu se padnala*/
int deli( const int wDeck[][ 13 ], const char *wFace[],
           const char *wSuit[],int niza[2])
{
   int card;   /* brojach na karti */
   int row;    /* brojach na redovi */
   int column; /* brojach na koloni */
   int par[6],bojac[6],i=0,br=0,f,j,k=0;
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
    br=0;f=0;
    for(j=1;j<=5;j++)
   ++init[par[j]];/*kaj init nizata indeksite se goleminite na kartite*/
   for(j=1;j<=5;j++)
   ++init1[bojac[j]];/*kaj init1 indeksite se boite na kartite*/
   /*naredbi za odreduvanje na toa dali na igracot mu se padnalo odredena kombinacija*/
   for(j=0;j<=12;j++)
   {
   if(init[j]==3)
   {br=3;
   niza[0]=j;/*vo niza vleguva goleminata na kartata*/
   }
   if(init[j]==4)
   {
   br=4;niza[0]=j;
   }
   if(init[j]==2)
   {niza[k]=j;  /*vo niza vleguva goleminata na kartite vo slucaj na par*/
   k++;
   f++;
   }
   }
   if(br==4)
   return 5;/*ako vrati 5 znaci ima cetvorka*/
   if(br==3)
   return 4;/*dobil triling*/
    if(f==1)
   return 1;/*dobil par*/
    if(f==2)
   return 2;/*dva para*/
   br=0;
    /*naredbi za proverka na boja*/
    for(j=0;j<=3;j++)
    if(init1[j]==1)
    br++;
    if(br==4)
    return 3;/*dobil boja*/
    for(i=1;i<=5;i++)
    nov[i-1]=par[i];/*gi podreduvame kartite so pomos na Bubble Sort za da odredime
                     dali ima dobieno kenta*/

        for ( pass = 1; pass < 5; pass++ ) {
      /* ciklus za kontroliranje na brojot na promeni pri sekoe pominuvanje na nizata */
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
    f=0;br=0;
    /*naredbi za proverka na kenta*/
    for(i=0;i<4;i++)
    if(nov[i+1]==(nov[i]+1))
     br++;
     if(br==4)
    {
    for(j=0;j<=3;j++)
    if(init1[j]==1)
    f++;
    if(f==4)
    return 6;/*dobil kenta*/
    }

return 0;
} /* kraj na funkcijata deli */

