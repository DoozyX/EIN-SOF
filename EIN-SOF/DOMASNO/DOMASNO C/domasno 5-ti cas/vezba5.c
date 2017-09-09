#include <stdio.h>
float plostina,perimetar; /* Rezultat */
int radius;
 
int main()
{ 
printf("vnesi go radiusot");
scanf("%d",&radius);
plostina=radius*radius*3.14;
perimetar=2*3.14*radius;
printf("plostinata e %.2f perimetarot e %.2f\n",plostina,perimetar);

return (0);
}
