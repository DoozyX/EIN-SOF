 /* Program zadaca7.c
programot proveruva dali daden broj e deliv so  brojot  napisan vo obraten redosled*/
#include <stdio.h>
#include <math.h>

int obratno( int y ); /* funkciski prototip */

/* funkcijata main go zapochnuva izvrshuvanjeto na programot */
int main()
{   int n1,n2; /*gi vnesuvame od tastatura granicite na intervalot za proverka*/
    int i; /*ni sluzi kako brojac so koj gi proveruvame broevite vo intervalot*/

    printf("vnesi go n1 broj\n");
    scanf  ("%d",&n1);
    printf("vnesi go n2 broj\n");
    scanf  ("%d",&n2);
    for (i=n1;i<=n2;i++)
    {
        if (!(i%obratno(i)))
        printf("brojot %d e deliv so svojot sprotiven broj\n",i);
    }
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

