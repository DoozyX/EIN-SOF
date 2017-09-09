/*program zadaca9.c*/
/*programa koja presmetuva broj na bakterii posle k minuti*/
#include <stdio.h>
#include <math.h>
/*pocetok na glavnata programa*/
int main()
{
    int n; /*poceten br na bakterii*/
    int i; /*na kolku min se delat bakteriite*/
    int j; /*na kolku min umiraat del od bakteriite*/
    int x; /*kolkav procent umiraat od bakteriite*/
    int k; /*posle kolku min sakas broj na bakterii*/
    int bakterii; /*se presmetuva brojot na bakterii*/
    int min=0;   /*za broenje na minutite koi pominuvaat*/
    int i1,j1;
    printf("vnesi go pocetniot broj na bakteriite\n");
    scanf("%d",&n);
    printf("vnesi na kolku min se delat bakteriite\n");
    scanf("%d",&i);
    printf(" vnesi na kolku min umiraat\n");
    scanf("%d",&j);
    printf(" vnesi kolku procenti umiraat\n");
    scanf("%d",&x);
    printf("vnesi polse kolku min sakas da go znaes brojot na bakterii\n");
    scanf("%d",&k);
    bakterii=n;
    i1=i;
    j1=j;
    while (min<=k) /*ciklus kade minuvaat minutite*/
    {
        if (min==i1)
        {
            i1+=i;
            bakterii=bakterii*2;

        }
        if (min==j1)
        {
            j1+=j;
            bakterii-=bakterii*x/100;
        }
        min++;



    }   /*kraj na while ciklusot*/
    printf(" brojot na bakterii e %d",bakterii);
    return 0;
} /*kraj na programata*/
    
        
    
