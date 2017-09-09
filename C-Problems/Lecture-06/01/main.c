#include <stdio.h>

/*
 * 1.	Напиши програм кој конвертира целобројни фарантхајтови температури од 0-212 степени во децимални цезлиусови температури со 3 цифри прецизност. Да се користи формулата:
celsius = 5.0 /9.0 * (fahrenheit - 32).
Излезот да се испечати во две десно порамнети колони од по 10 карактери, а целзиусовите вредности треба да се предводени од знак и за позитивни и за негативни вредности.
 */

int main() {
    int fahrenheit;
    printf("Enter temperature in F: ");
    scanf("%d", &fahrenheit);
    printf("Temperature in fahrenheit: %+10d\n", fahrenheit);
    printf("Temperature in celsius:    %+10.03f\n", 5.0 /9.0 * (fahrenheit - 32));
    return 0;
}