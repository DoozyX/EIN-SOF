/* Zadaca 4i5 koja ja presmetuva sumata i proizvodot na n vneseni broevi od tastatura*/
#include<stdio.h>
int main()
{
int broj,n,suma,proizvod;/* deklariranje na promenlivi */
printf("Vnesi kolku broja: ");/* Vnesuvame proizvolen broj na broevi */
scanf("%d",&n);
suma=0;/*Inicijalizacija na sumata*/
proizvod=1;/*Inicijalizacija na proizvodot*/
while(n>0)/* Povtoruvaj dodeka ne gi vneseme site broevi */
{
    printf("Vnesi broj: ");/* Go vnesuvame brojot */
    scanf("%d",&broj);
    suma+=broj;/* Ja zgolemuvame sumata */
    proizvod*=broj; /* Mnozeme so vneseniot broj */
    n-=1; /* Go namaluvame n za eden */
}
printf("Sumata e: %d, a proizvodot e: %d\n",suma,proizvod);/*pecatenje na sumata i proizvodot */
return(0);
}
