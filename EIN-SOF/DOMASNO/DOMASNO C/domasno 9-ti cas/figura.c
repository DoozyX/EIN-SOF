/*programa zadaca14.c*/
/*za pecatenje na figuri*/
#include<stdio.h>
int niza[]; /*ovde se snimaat broevite koi se pecatat podocna*/
 /*prototip na funkcijata printniza*/
void printniza(int x[],int poc,int kraj);
/*prototip na funkcijata figura*/
int figura(int n);
/*pocetok na programata*/
int main()
{
    int n; /*broj za koj ja pecatime figurata*/
    printf("vnesi go brojot\n");
    scanf("%d",&n);

    figura(n); /*ja povikuvame funkcijata figura*/
    
    return 0;
} /*kraj na programata*/
 /* funkcija za pecatenje na niza so dadeni granici vo obraten redosled*/
 void printniza(int x[],int poc,int kraj)
{

    while (kraj>=poc)
    {
    printf("%d  ",x[kraj]);
    kraj--;
    }
    printf("\n");
}    /*kraj na funkcijata za pecatenje*/


/*pocetok na funkcijata figura realizirana rekurzivno*/
int figura(int n)
{    static int i=0; /*staticka promenliva so cija pomos se dvizime niz nizata*/
    if (n>0)
    {
    niza[i]=n; /* gi vnesuvame broevite vo nizata*/
    printniza(niza,0,i); /*ja pecatime nizata vo sekoja rekurzija koga odi nanapred rekurzijata*/
    i++;
    figura(n-1);  /*rekurziven povik*/
    i--;
    printniza(niza,0,i-1);  /*ja pecatime nizata koga rekurzijata se vraka nanazad i se doizvrsuva ona kade zastanala*/
} /*kraj na funkcijata figura*/



}
