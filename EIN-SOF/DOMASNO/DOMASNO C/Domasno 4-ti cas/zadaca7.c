/* Zadaca 7: se presmetuva sumata na vneseni broevi od tastatura i terminirame so izbor na da ili ne (d/n) za nov broj*/
#include<stdio.h>
int main()
{
int broj,suma;/* deklariranje na promenlivi*/
char znak;/* promenliva od tip char so cija pomosh ja zavrsuvame programata */
suma=0;/* Inicijalizacija na sumata */
printf("Dali sakas da vneses broj (d/n): ");
    scanf("%c",&znak);

while(znak != 'n')/* Povtoruvaj se dodeka ne vneseme n koj e znak za terminiranje na programata*/
{
    printf("Vnesi broj: ");
    scanf("%d",&broj);
    suma+=broj;
	printf("Dali sakas da vneses broj (d/n): ");
	scanf(" %c",&znak);
}
printf("Sumata e: %d\n",suma);/*pecatenje na sumata*/
return(0);
}
