#include <stdio.h>

/*
 * 4. Во примерот p03_01.c, во наредбата printf наместо спецификаторот за конверзија  %f, поставете го спецификаторот %d. Што се случува и зошто?
 */

/* Program 3.1: p03_01.c
 * Manipulacija so decimalni broevi */

float result; /* Rezultat od delenje */
int main()
{
    result = 7.0 / 22.0;
    printf("Rezultatot e %d\n", result);
    return (0);
}

//se pecati pogresen rezulat poradi nesoodvetna konverzija na tipovi