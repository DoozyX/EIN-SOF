/* Zadaca 6 vo koja ja presmetuvame sumata na vneseni broevi se dodeka ne vneseme -1 za kraj */
#include<stdio.h>
int main()
{
int broj,suma;/* Deklariranje na promenlivi */
suma=0;/* Inicijalizacija na sumata */
printf("Vnesi broj, za kraj vnesi -1: ");
scanf("%d",&broj);
while(broj != -1)/* Povtoruvaj dodeka korisnikot ne vnese terminirachka vrednost -1 */
{
    suma+=broj;
	printf("Vnesi broj, za kraj vnesi -1: ");
    scanf("%d",&broj);
    
}
printf("Sumata e %d\n",suma);/* Pecatenje na sumata */
return(0);
}
