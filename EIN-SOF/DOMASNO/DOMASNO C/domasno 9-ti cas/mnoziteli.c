/*program za zadaca 5, kaj koja eden broj koj e vnesen go razlozuvame na prosti mnoziteli*/
#include<stdio.h>
int main()
{
    int broj,mnoziteli[20];/*vi nizata mnoziteli gi zapisuvame site prosti mnoziteli*/
    int a,i,j=0;
    printf("Vnesi go brojot koj sakas da go razlozis na prosti mnoziteli\n");
    scanf("%d",&broj);/*go vnesuvame sakaniot broj*/
    a=broj;
    for(i=2;i<=broj;i++)/*gi proveruvame site broevi od 2 do sakaniot, kako mozni mnoziteli*/
    {
           while(!(a%i))/*ako e deliv so i, vneseniot broj*/
           {
               if(prost(i))/*proveruvame dali e prost broj*/
               {
                  mnoziteli[j]=i;/* ako e go memorirame vo nizata mnoziteli*/
                  j++;
               }
               a/=i;
          }
    }

printf("Brojot %d, razvien na mnoziteli e:  1",broj);
for(i=0;i<j;i++)/*gi pecatime site mnoziteli koi se memorirani vo nizata koja e so dolzina j*/
{
    printf("* %d ",mnoziteli[i]);
}
}
int prost(int x)/*definicija na prost funkcijata*/
{   int i;

    if ((x==1)||(x==2))
    return 1; /*ako e vneseniot broj e 1,2 togas e prost i vrakame 1*/
    for(i=2;i<x;i++)
    {    if (!(x%i))
        return 0;/*ako e deliv so nekoj broj od 2 do negovata vrednost, togas vrakame 0*/
    }
    return 1;
}
