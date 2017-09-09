/*programa zadaca10.c*/
/*za naoganje na rastecki podnizi od vnesena niza*/
#include <stdio.h>
void printniza(int a[], int n); /*prototip na funkcijata*/
/*pocetok na glavnata programa*/
int main()
{
    int niza[100]; /*ovde ke gi vneseme elementite na nizata*/
    int n; /*za vnesuvanje na br na elementi vo nizata*/
    int podniza[100];
    int i,j,k;
    printf("vnesi go brojot na eleminti vo nizata\n");
    scanf("%d",&n); /*go vnesuvame brojot na elementite*/
    printf("vnesuvaj gi elementite");
    for (i=0;i<n;i++) /*so ovoj ciklus gi vnesuvame elmenitte vo nizata*/
    scanf("%d",&niza[i]);

    for (i=0;i<n-1;i++) /*vo ovoj ciklus ke se dvizime niz nizata*/
    {   k=0;
        j=i+1;
        while ((niza[j]>niza[j-1]) && (j<n))  /*ovde ke gi generirame podnizite*/
        {


            podniza[k]=niza[j-1];
            k++;
            podniza[k]=niza[j];


            j++;
            printniza(podniza,k+1);

        }   /*kraj za podcilkusot so while*/
    }    /*kraj za for ciklusot*/
        
 return 0;
} /*kraj na glavnata programa*/

/*funkcija za pecatenje na niza*/
void printniza(int x[],int n)
{
    int i;
    for (i=0;i<n;i++)
    printf("%d  ",x[i]);
    printf("\n");
}  /*kraj na funkcijata za pecatenje*/
    
