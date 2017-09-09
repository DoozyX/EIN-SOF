#include <stdio.h>
/* programa za presmetuvanje na sredna temperatura za daden mesec*/
/* funkciski prototip */
float srtemperatura(const int t[32]);
int denovi;
int main()
{   int temperaturi[32]; /*vo ovaa niza gi smestuvame temperaturite za denovite*/
    int mesec,i;   /*koj mesec sme go vnele*/
    char prestapna; /*dali e prestapna godinata d n */
    printf("vnesi dali godinata e prestapna\n");
    scanf("%c",&prestapna);
    printf("vnesi za koj mesec ke presmetuvame prosecna temperatura");
    scanf("%d",&mesec);
    switch (mesec) /*postavuvanje na denovite vo mesecot*/
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: denovi=31; break;
    case 4:
    case 6:
    case 9:
    case 11: denovi=30; break;
    case 2:  if (prestapna=='d')
             denovi=28;
             else denovi=29;
             break;
    default: printf("vnese pogresen mesec");
             break;
    }
    printf("\ndenovi se %d",denovi);
    for (i=1;i<=denovi;i++) /*ovde gi vnesuvame temperaturite za sekoj den vo mesecot*/
    {
    printf("vnesi teperatura za %d-iot den  ",i);
    scanf("%d",&temperaturi[i]);
    }
    printf("srednata temperatura za mesec %d e %.2f",mesec,srtemperatura(temperaturi));
    return 0;
}

float  srtemperatura(const int t[32])  /*ova funkcija prima niza i ja presmetuva srednata temperatura*/
{
    int i,sum=0;
    for (i=1;i<=denovi;i++)
    sum+=t[i];
    return (sum/((float) denovi));
}
