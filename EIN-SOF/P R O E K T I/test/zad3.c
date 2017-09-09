/*Programa zad3.c*/
#include<stdio.h>

int main()
{
	int m,n,k; /*gi vnesuvame dimenziite na matricata*/
	int vleznaMatrica[100][100]; /*ovde ja vnesuvame matricata*/
    int i,j; /*brojaci*/
	int x=0,y=0; /*isto gi koristime za brojaci no niz blokovite*/
	int brEdinici; /*broime edinici*/
	int brNuli;   /*broime nuli*/
	printf("Vnesi dimenzii na matricata\n");
    printf("Vnesi kolku redovi ima matricata\n");
	scanf("%d",&m);
	printf("Vnesi kolku koloni ima matricata\n");
	scanf("%d",&n);
    printf("Vnesi go faktorot na namaluvanje\n");
	scanf("%d",&k);
    printf("Sega popolnuvaj  ja matricata so 0 i 1 \n");
	for (i=0;i<k*m;i++)
	{
		for (j=0;j<k*n;j++)
        scanf("%d",&vleznaMatrica[i][j]);
	}
    for (i=0;i<k*m;i++)
	{
		for (j=0;j<k*n;j++)
        printf("%d",vleznaMatrica[i][j]);
	    printf("\n");
	}
	printf("Izlez\n");
	while (x<k*m) /*so ovoj ciklus se dvizime niz blokovite po redovi*/
	{    
        y=0;
		while (y<k*n) /*so ovoj ciklus se dvizime niz blokovite po koloni*/
		{   
			brEdinici=0;
		    brNuli=0;
			for (i=x;i<x+k;i++) /*ovde gi citame blokovite*/
			{
				for (j=y;j<y+k;j++)
				{   
					if (vleznaMatrica[i][j])
					brEdinici+=1;
					else
					brNuli+=1;
				}
			}
			if (brEdinici>=brNuli) /*proveruvame sto ima poveke vo blokot 1 ili 0*/
			
			printf("1 ");
			else
			printf("0 ");
                
			y+=k; 
			
		}
		printf("\n");
		x+=k;
		
	}
    
return 0;
}