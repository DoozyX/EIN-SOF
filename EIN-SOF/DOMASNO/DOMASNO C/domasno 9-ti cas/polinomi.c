/*program zadaca12.c*/
/*za sobiranje na polinomi od stepen n i m*/
#include<stdio.h>
void printniza(int a[], int n); /*prototip na funkcijata*/
/*pocetok na programata*/
int main()
{
    int n,m; /*se stepenite na polinomite koi gi vnesuvame*/
    int i;
    int koeficientiN[100]; /*ovde gi smestuvame koeficientite na prviot polinom*/
    int koeficientiM[100]; /*ovde gi smestuvame koeficientite na vtoriot polinom*/
    int koeficientiNM[100]; /*ovde gi smestuvame koeficientite na rezultantniot  polinom*/
    printf("vnesi od koj stepen e prviot polinom\n");
    scanf("%d",&n);
    printf("vnesi od koj stepen e vtoriot polinom\n");
    scanf("%d",&m);
    printf("sega vnesuvaj gi koeficientite na prviot polinom\n");
    for (i=0;i<=n;i++)
    scanf("%d",&koeficientiN[i]);
    printf("sega vnesuvaj gi koeficientite na vtoriot polinom\n");
    for (i=0;i<=m;i++)
    scanf("%d",&koeficientiM[i]);
    i=0;
    while ((i<=n) && (i<=m))
    {
        koeficientiNM[i]=koeficientiN[i]+koeficientiM[i];
        i++;
    }

    if (n>m)
    while (i<=n)
    {
        koeficientiNM[i]=koeficientiN[i];
        i++;
    }
     if (n<m)
    while (i<=m)
    {
        koeficientiNM[i]=koeficientiM[i];
        i++;
    }
    printf("koeficientite na zbirot na polinomite se slednive\n");
    printniza(koeficientiNM,i);
     return 0;
} /*kraj na glavnata programa*/

/*funkcija za pecatenje na niza*/
    void printniza(int x[],int n)
{
    int i;
    for (i=0;i<n;i++)
    printf("%d  ",x[i]);
    printf("\n");
}    /*kraj na funkcijata za pecatenje*/

    
