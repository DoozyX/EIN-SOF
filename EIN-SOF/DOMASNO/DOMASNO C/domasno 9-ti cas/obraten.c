 /* Program zadaca3.c
programot go pisuva daden broj vo obraten redosled*/
#include <stdio.h>
#include <math.h>

int obratno( int y ); /* funkciski prototip */

/* funkcijata main go zapochnuva izvrshuvanjeto na programot */
int main()
{ int broj; /*go vnesuvame od tastatura */
  printf("vnesi eden broj\n");
  scanf  ("%d",&broj);
  printf("brojot so obraten redosled na cifrite e %d",obratno(broj));
  printf( "\n" );

   return 0; /* uspeshen kraj */

} /* kraj main */


int obratno( int y ) /* definicija na funkcijata koja go vraka obratniot broj na vneseniot */
{  int ost,brcifri,obraten;
ost=y; brcifri=0; obraten=0; /* inicijalizacija na promenlivite*/
while (ost!=0) /*go naogam brojot na cifri*/
{
ost/=10;
brcifri+=1;
}
while (brcifri>0)     /* go naogame obratniot broj na vneseniot*/
{
brcifri-=1;
obraten+=(y%10)*pow(10,brcifri);
y/=10;
}
return obraten;
} /* kraj na funkcijata obratno */

