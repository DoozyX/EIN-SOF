/* Program zadaca2.c
   presmetuva broj na sekundi do 12 casot */
#include <stdio.h>

int vreme( int cas,int min,int sec);  /* funkciski prototip */

/* funkcijata main go zapochnuva izvrshuvanjeto na programot */
int main()
{
   int cas,min,sec; /* promenlivi za vnesuvanje na momentalnoto vreme*/
   printf("vnesi go vremeto kako hh:mm:ss\n");
   scanf("%d%*c%d%*c%d",&cas,&min,&sec);
   printf("do 12 casot ostanuvaat uste %d sec",vreme(cas,min,sec));
   printf( "\n" );

   return 0; /* uspeshen kraj */

} /* kraj main */

/* definicija na funkcijata vreme koja vraka broj na secundi do 12 casot */
int vreme( int cas,int min,int sec)
{
return (12*3600-(cas*3600+min*60+sec));
} /* kraj na funkcijata vreme */

