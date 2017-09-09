  /* Program zadaca4.c
   naoga NZD na dva venseni broja */
#include <stdio.h>

int nzd( int x,int y ); /* funkciski prototip */

/* funkcijata main go zapochnuva izvrshuvanjeto na programot */
int main()
{
   int broj1,broj2; /* brojach */
   printf("vnesi gi dvata broja na koi sakas da presmetas NZD\n");
   scanf("%d%d",&broj1,&broj2);
   printf(" nzd na broevite %d i %d e %d",broj1,broj2,nzd(broj1,broj2));
   printf( "\n" );

   return 0; /* uspeshen kraj */

} /* kraj main */

/* definicija na funkcijata nzd koja go vraka najgolemiot zaednicki delitel na x i y */
int nzd( int x,int y )
{
int pom;
if (x>y)  /*ako prviot e pogolem od vtoriot*/
{pom=y;
while (pom>0)  /*proveruvame od pomaliot pa nadolu barame dali i dvata broja se delivi so pom*/
{ if (!(x%pom) && !(y%pom))
return pom;
pom-=1;
}
}
else
{pom=x;
while (pom>0)
{ if (!(x%pom) && !(y%pom))
return pom;
pom-=1;
}
}
} /* kraj na funkcijata nzd */

