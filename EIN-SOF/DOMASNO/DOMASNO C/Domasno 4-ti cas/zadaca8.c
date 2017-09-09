/* Zadaca 8 vo koja e ilustrirana rabotata so 5 proizvodi vo stokovna kuka*/
#include<stdio.h>
int main()
{
int brojpr,pr1,pr2,pr3,pr4,pr5,parcinja;/* deklariranje na promenlivi*/
float suma;
char znak;/* se vnesuva n za kraj na programata*/
suma=0;/*Inicijalizacija na sumata*/
printf("Dali sakas da vneses proizvod (d/n): ");
    scanf("%c",&znak);
pr1=0;pr2=0;pr3=0;pr4=0;pr5=0;/* Inicijalizacija na promenlivite koi gi oznacuvaat kolicinata na proizvodite*/
while(znak != 'n')/*povtoruva se dodeka ne vneseme n kako znak za terminiranje na programata*/
{ 
printf("Vnesi broj na proizvod: ");
scanf("%d",&brojpr); /* Go vnesuvame brojot na proizvodot */
switch(brojpr)       /* Vo zavisnost od brojot na proizvodot soodvetnata promenliva ja inkrementirame*/
{
case 1: printf("Kolku parcinja: ");
        scanf("%d",&parcinja);
	    pr1+=parcinja;
	    break;

case 2: printf("Kolku parcinja: ");
        scanf("%d",&parcinja);
	    pr2+=parcinja;
	    break;

case 3: printf("Kolku parcinja: ");
        scanf("%d",&parcinja);
	    pr3+=parcinja;
	    break;

case 4: printf("Kolku parcinja: ");
        scanf("%d",&parcinja);
	    pr4+=parcinja;
	    break; 

case 5: printf("Kolku parcinja: ");
        scanf("%d",&parcinja);
	    pr5+=parcinja;
	    break;   
default: printf("Gresen proizvod\n");	/* Ako ne vneseme soodveten broj na proizvod*/
}    
printf("Dali sakas da vneses proizvod (d/n): ");
scanf(" %c",&znak);
}
printf("Od proizvodot 1 se prodadeni %d parcinja so vkupna cena od: %.2f\n",pr1,pr1*50.5);
printf("Od proizvodot 2 se prodadeni %d parcinja so vkupna cena od: %.2f\n",pr2,pr2*45.6);
printf("Od proizvodot 3 se prodadeni %d parcinja so vkupna cena od: %.2f\n",pr3,pr3*32.8);
printf("Od proizvodot 4 se prodadeni %d parcinja so vkupna cena od: %.2f\n",pr4,pr4*65.3);
printf("Od proizvodot 5 se prodadeni %d parcinja so vkupna cena od: %.2f\n",pr5,pr5*20.0);
suma=pr1*50.5+pr2*45.6+pr3*32.8+pr4*65.3+pr5*20.0;

printf("Vkupnata suma e: %.3f\n",suma);/*pecatenje na sumata*/
return(0);
}
