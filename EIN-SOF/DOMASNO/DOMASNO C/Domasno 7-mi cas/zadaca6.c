/* Program zadaca6.c
   rekurzivno naoga NZD na dva venseni broja */
#include <stdio.h>

int nzd( int x,int y ); /* funkciski prototip */
 int pom;
/* funkcijata main go zapochnuva izvrshuvanjeto na programot */
int main()
{
   int broj1,broj2; /* brojach */
   printf("vnesi gi dvata broja na koi sakas da presmetas NZD\n");
   scanf("%d%d",&broj1,&broj2);

   if (broj1>broj2)  /*ovde koristime inicijalizacija na globalna promenliva nadvor od*/
   pom=broj2;        /*funkcija bidejki ako se inicijalizira vnatre se menuva*/
   else              /* ne moze da se koristi statik bidejki pom prima promenliva*/
   pom=broj1;

   printf(" nzd na broevite %d i %d e %d",broj1,broj2,nzd(broj1,broj2));
   printf( "\n" );

   return 0; /* uspeshen kraj */

} /* kraj main */


/* definicija na funkcijata nzd koja go vraka najgolemiot zaednicki delitel na x i y */
int nzd( int x,int y )
{
 if ((x==1) || (y==1))
 return 1;
if (x>y)  /*ako prviot e pogolem od vtoriot*/
{
 if (!(x%y) && !(pom%y))  /*proveruvame od pomaliot pa nadolu barame dali i dvata broja se delivi so pom*/
 return y;
 nzd(x,y-1);
}
else
{
 if (!(pom%x) && !(y%x))
 return x;
 nzd(x-1,y);
}

} /* kraj na funkcijata nzd */

