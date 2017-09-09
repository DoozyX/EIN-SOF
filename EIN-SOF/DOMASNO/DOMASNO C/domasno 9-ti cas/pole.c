/*program zadaca13.c*/
/*za generiranje na dadeno pole*/
#include<stdio.h>
/*prototip na funkcijata pecatimatrica*/
void pechatimatrica( int a[][100],int n,int m );
/*pocetok na glavnata programa*/
int main()
{
    int n,m; /*redovi i koloni na poleto koe treba da se generira*/
    int i,j; /*se koristat za brojaci */
    int broj=0; /*so nego ke gi vnesuvame broevite*/
    int pole[100][100]; /*poleto koe ke go ispisuvame*/
    printf("vnesi kolku redici sakas da ima poleto\n");
    scanf("%d",&n);
    printf("vnesi kolku koloni sakas da ima poleto\n");
    scanf("%d",&m);
    for ( i = 0; i<m; i++ )
    {
      for ( j = 0; j<n; j++ )
        {
        pole[j][i]=broj;
        broj++;
        }
        
    }
    pechatimatrica(pole,n,m );
    return 0;
}   /*kraj na programata*/
/*funkcija za pecatenje na matricata*/
    void pechatimatrica( int  p[][100],int n,int m )
{
   int i; /* brojach na redovi */
   int j; /* brojach na koloni */

   /* pomini niz redovite */
   for ( i = 0; i<n; i++ ) {
      /* ispechati gi vrednostite na kolonite */
      for ( j = 0; j<m; j++ ) {
         printf( "%d  ", p[i][j] );
      } /* kraj za vnatreshnoto for */
      printf( "\n" ); /* nova linija na izlezot */
   } /* kraj na nadvoreshnoto for */
} /* kraj na funkcijata pecatimatrica */
