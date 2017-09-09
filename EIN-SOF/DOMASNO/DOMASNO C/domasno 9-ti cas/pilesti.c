/*programa zadaca11.c*/
/*za naoganje na pilesti podnizi na vnesenata niza*/
#include <stdio.h>
/*pocetok na glavnata programa*/
int main()
{
    int niza[100]; /*ovde ke gi vneseme elementite na nizata*/
    int n; /*za vnesuvanje na br na elementi vo nizata*/

    int i,j;
    printf("vnesi go brojot na eleminti vo nizata\n");
    scanf("%d",&n); /*go vnesuvame brojot na elementite*/
    printf("vnesuvaj gi elementite");
    for (i=0;i<n;i++) /*so ovoj ciklus gi vnesuvame elmenitte vo nizata*/
    scanf("%d",&niza[i]);
    printf("Eve gi pilestite nizi:\n");
    for (i=0;i<n;i++) /*vo ovoj ciklus ke se dvizime niz nizata*/
    {
        j=i+1;
        if ((niza[j]>niza[j-1])&&(niza[j]<niza[j+1])&&(j<n-1))/*uslov za pilestite nizi*/
        {
            printf(" %d",niza[j-1]);
            printf("% d",niza[j]);
            printf(" %d\n",niza[j+1]);
        }


          /*kraj za podcilkusot so while*/
    }    /*kraj za for ciklusot*/
        
 return 0;
} /*kraj na glavnata programa*/


    
