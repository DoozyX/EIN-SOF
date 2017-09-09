/*program zadaca6.c*/
/*proveruva dali zbirot na kubovite na cifrite e ednakov na samiot broj*/
#include <stdio.h>
#include <math.h>
int main()  /*pocetok na programata*/
{
	int n;  /*vo n se smestuva granicata do kade  ke se proveruva*/
    int kub;   /*se presmetuva zvirot na cifrite na kub*/
     int a,cifra; /*a i cifra ni se pomosni koi gi koristime za presmetkite*/
     int i; /*so i gi proveruvame broevite po red od 0 do n*/
	printf("vnesi do koj brojot\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++) /*gi proveruvame site broevi od 0 do n*/
	{
	a=i;kub=0;  /*inicijalizacija na kub na 0 za sekoj nov broj*/
	
    while (a>0)
	{
	cifra=a%10;   /*gi naogame cifrite na brojot*/
	a/=10;
    kub+=pow(cifra,3);
	}
	if(kub==i)   /*go proveruvame uslovot na programot*/
printf("\nbrojot %d, odgovara",i);
	}
return 0;
}	 
