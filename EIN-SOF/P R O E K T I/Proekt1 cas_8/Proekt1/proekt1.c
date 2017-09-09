/*programa Proekt1.c*/
/*operacii na niza*/
#include<stdio.h>
 #define SIZE 100 /*definirame golemina za nizata*/
  int brojac; /*brojaci za dvizenje niz nizata*/
/*prototip na funkcijata za sortiranje*/
 void sort(int niza[SIZE]);
/*prototip na funkcijata sredna vednost*/
 float srVrednost(int niza[SIZE]);
/*prototip na funkcijata medijana*/
 float medijana(int niza[SIZE]);
/*prototip na funkcijata xistogram*/
 int histogram(int niza[SIZE]);
/*prototip na funkcijata printniza*/
 void printniza(int x[],int n);
/*pocetok na glavnata programa*/
 int main()
{
int niza[SIZE]; /*ovde ja najavuvame nizata*/
char stop; /*ja definirame za kraj za vnesuvanje na elementi vo nizata*/
printf(" dali sakas da vnesuvas broevi vo nizata d/n \n");
scanf("%c",&stop);
brojac=0;
while  (stop=='d')
{
    printf("vnesi go %d-tiot element\n",brojac);
    scanf("%d",&niza[brojac]);
    printf("Vnesi dali sakas da vnesuvas uste broevi vo nizata d/n \n");
    scanf(" %c",&stop);
    brojac++;
}
sort(niza);
printf("Eve ja nizata sortirana\n");
printniza(niza,brojac); /*ja pecatime nizata vo rastecki redosled*/
printf("\n");
printf("Srednata vrednost na nizata e %.2f\n",srVrednost(niza));
printf("Medijana na nizata e %.2f\n",medijana(niza));
printf("Najfrekfentna vrednost vo nizata e %d\n",histogram(niza));
return 0;
} /*kraj na programata*/

/*funkcija  za sortiranje na nizata*/
void sort(int niza[brojac])
{
    int i,j,pom;
    for (i=0;i<brojac;i++)
    for (j=i;j<brojac;j++)
    {
        if (niza[i]>niza[j])
        {
            pom=niza[i];
            niza[i]=niza[j];
            niza[j]=pom;
        }
    }
}  /*kraj na funkcijata za sortiranje*/

/*funkcija za baranje sredna vrednost*/
float srVrednost(int niza[brojac])
{
    int i;
    float sum=0.0;
    for (i=0;i<brojac;i++)
    sum+=niza[i];
    return (sum/brojac);
} /*kraj na funkcijata sredna vrednost*/

/*funkcija za presmetuvanje na medijanata*/
float medijana(int niza[brojac])
{
    if (!(brojac%2))
    return (((float) niza[brojac/2]+niza[brojac/2-1])/2);
    else
    return (niza[brojac/2]);
} /*kraj na funkcijata za baranje medijana*/

/*funkcija za pecatenje na niza*/
void printniza(int x[],int n)
{
    int i;
    for (i=0;i<n;i++)
    printf("%d  ",x[i]);
    printf("\n");
}  /*kraj na funkcijata za pecatenje*/

/*funkcija histogram za presmetuvanje na najfrekfentna vrednost i za pecatanje na histogramot*/
int histogram(int niza[brojac])
{
    int memoIndex;  /*ovde go stavame najfrekfentniot borj vo nizata*/
    int i,j;
    int max;
    int frekfencija[SIZE]={0};
    for ( i=0;i<brojac;i++ )
    {
      ++frekfencija[ niza [ i ] ];
    } /* kraj for */
    max=frekfencija[0];
    memoIndex=0;
    for (i=1;i<SIZE;i++)
    {
        if  (frekfencija[i]>max)
        {
        max=frekfencija[i];
        memoIndex=i;
        }
    }

    printf("\nEve kako izgleda histogramot\n");
    for (i=0;i<SIZE;i++)
    {   if (frekfencija[i]>0)
    {   printf("%d      ",i);
        for (j=1;j<=frekfencija[i];j++)
        printf("I ");
        printf("\n");
    }
    }
    return memoIndex; /*go vrakame najfrekventiot broj*/
}


    
     

    

