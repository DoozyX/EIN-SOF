#include <stdio.h>
#include<math.h>

/*
 * 1.	Да се најде обиколката и плоштината на правилен n-аголник.
 */

int main() {
    int n, a;
    printf("Enter number of angles:");
    scanf("%d", &n);
    printf("Enter lenght of one side:");
    scanf("%d", &a);
    printf("Perimeter is; %d \n", a * n);
    printf("Area is: %.3f", ((a / (2 * tan(180.0 / n)))*n*a)/2);
    return 0;
}