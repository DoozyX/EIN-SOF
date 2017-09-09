  /* Program zadaca7.c
   ispisuva zvezdi na ekran */
#include <stdio.h>

int zvezdi( int n ); /* funkciski prototip */
int redovi;
/* funkcijata main go zapochnuva izvrshuvanjeto na programot */
int main()
{
    int n; /*broj na zvezdi*/
    printf("vnesi go brojot na zvezdi\n");
    scanf("%d",&n);
    redovi=n; /*promenliva za vnesuvanje na redovite*/
    printf("\n");
    zvezdi(n);
    return 0; /* uspeshen kraj */

} /* kraj main */

/* definicija na funkcijata zvezdi za crtanje na zvezdi na ekran  */
int zvezdi( int n )
{    int pom=n;
    if (n==0)
    if (redovi!=0)
    {
    printf("\n");
    zvezdi(--redovi);
    }
    else
    return 0;
    else
    {
     printf(" *");
     zvezdi(n-1);

    }
} /* kraj na funkcijata zvezdi */

