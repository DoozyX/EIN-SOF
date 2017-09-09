 /* Program zadaca5.c
   iterativna funkcija za presmetuvanje na Fibonacci-eva niza */
#include <stdio.h>

long fibonacci( int n ); /* funkciski prototip */

/* funkcijata main go zapochnuva izvrshuvanjeto na programot */
int main()
{
   long result; /* fibonacci-eva vrednost */
   long number; /* broj vnesen od korisnikot */

   /* zemi cel broj od korisnikot */
   printf( "Vnesi cel broj: " );
   scanf( "%ld", &number );

   /* presmetaj fibonacci-eva niza za vneseniot broj */
   result = fibonacci( number );

   /* ispechati rezultat */
   printf( "Fibonacci( %ld ) = %ld\n", number, result );

   return 0; /* uspeshen kraj */

} /* kraj main */

/* Iterativna definicija na funkcijata fibonacci */
long fibonacci( int n )
{   long fib1,fib2;
   /* osnoven sluchaj */
   if ( n == 0 || n == 1 )
      return n;
      fib1=0;
      fib2=1;
   while (--n>0)
    { fib1=fib1+fib2;
      --n;
      fib2=fib1+fib2;
    }
   if (n%2)
   return (fib1);
   else
   return (fib2);
}

