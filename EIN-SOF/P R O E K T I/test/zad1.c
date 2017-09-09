/*Programa zad1.c*/
#include<stdio.h>
/*prototim na funkcijata sreken broj*/
void srekenBroj(int broj);
/*pocetok na main*/
int main()
{
	int i; /*brojac*/
	for (i=1;i<=10000;i++)
	{
	
	srekenBroj(i);
	
	}
return 0;
} /*kraj na mein*/
/*pocetok na funkcijata sreken broj*/
void srekenBroj(int broj)
{
	int i=1,j; /*brojaci*/
	int cifra; /*za smestuvanje na cifrite*/
	int novBroj; /*ovde go generirame noviot broj*/
	int memo[100]; /*ovde gi smestuvame prthodnite broevi za da znaeme koga zavrsuvame*/
	int flag=1;  /*za zavrsuvanje na while ama so return izleguvame vednas stom naideme na ist broj vo memo*/
	memo[0]=broj;
	while (flag)
	{
		novBroj=0;
		while (broj>0)
		{
			cifra=broj%10;
			novBroj+=cifra*cifra;
            broj/=10;
		}
		memo[i]=novBroj;
		i++;
		
		broj=novBroj;
		if (broj==1)
		{
			printf("Brojot %d e sreken broj\n",memo[0]); 
            return;
		}
        for (j=0;j<i-1;j++)
		{
			if (broj==memo[j])
			{	
				flag=0;
		        //printf("Brojot %d e tazen broj",memo[0]);
			}
		}
	}
	
} /*kraj na srekenBroj*/