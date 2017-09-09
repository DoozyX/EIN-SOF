/*program zadaca1.c*/
/*program za presmetuvanje na plostina i perimetar na pravilen mnoguagolnik*/
#include <stdio.h>
#include <math.h>
#define PI 3.1415 /*go definirame PI*/
int main()
{
	int n; /*broj na strani*/
		
	float a,r,h,perimetar,plostina;/* a i h ni se stranata i visinata na mnoguagolnikot*/
	printf("vnesi go radiusot\n");
	scanf("%f",&r); /*go vnesuvame radiusot na krugot kade treba da se vpise mnoguagolnikot*/
	printf("vnesi broj na strani\n");
	scanf("%d",&n);   /*vnesuvame broj na strani*/

	a=2*r*sin(PI/n);  /*ja presmetuvame stranata na mnoguagolnikot*/
	perimetar=n*a;    /*go presmetuvame perimetarot na mnoguagolnikot*/
    
	h=a/2*tan(PI/n);  /*ja presmetuvame visinata na mnoguagolnikot*/
	plostina=n*a*h/2;  /*ja presmetuvame plostinata*/
	printf("perimetarot e %.3f\n",perimetar);
	printf("plostinata e %.3f\n",plostina);

	return 0;
}    /*kraj na programata*/

