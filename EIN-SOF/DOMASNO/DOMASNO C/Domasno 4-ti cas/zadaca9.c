/* Zadaca 9 vo koja ja presmetuvame platata na rabotnik od procent 9 od vkupniot promet za toj mesec*/
#include<stdio.h>
int main()
{
    float promet;/* Deklaracija na promenliva promet koja ja prima vrednosta na prometot*/
    float plata; /* Vkupnata plata*/
    printf("Vnesi promet vo evra (-1 za kraj): ");
    scanf("%f",&promet);
    while(promet != -1)
    {
        plata=200+0.09*promet;/* Osnovnata plata od 200 evra plus procentot od 9% */
        printf("Platata e: %.2f evra\n",plata);/* Pecatenje na platata */
        printf("Vnesi promet vo evra (-1 za kraj): ");
        scanf("%f",&promet);
    }
}
