#include <stdio.h>

/*
 * Напиши програма која внесува радиус на круг и испечатува негова плоштина и периметар. За вредност на пи да се земе 3.14.
 */
int main() {
    int radius;

    scanf("%d", &radius);

    printf("Area: %.02f\nCircumference: %.02f \n", 3.14 * radius *radius, radius*2*3.14);
    return 0;
}