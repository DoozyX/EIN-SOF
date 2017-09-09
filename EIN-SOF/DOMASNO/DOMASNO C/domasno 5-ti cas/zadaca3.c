#include <stdio.h>
 #include <math.h>
/* funkcijata main go zapochnuva izvrshuvanjeto na programot */
int main()
{
   int a,b,c; /* brojach */
  
   /* povtori 100 pati */
   for ( a = 1; a <= 100; a++ )
        for (b=1; b <=100; b++)
		    for (c=1; c<=100; c++) {
			if (c*c==a*a+b*b) 
			printf("pitagorini broevi se %d  %d  %d\n",a,b,c);
             } /* kraj for */
return(0);
}