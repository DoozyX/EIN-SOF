 /* Program zadaca5a_8.c
   selekcisko sorturanje na niza*/
#include <stdio.h>
void selekcija(int n[], int a);
int brelementi;
/* pochetok na izvrshuvanjeto */
int main()
{
   int  i;
   int niza[100];
   printf( "Vnesi go brojot na elementi vo nizata:\n" );
   scanf("%d",&brelementi);
   printf("vnesuvaj gi elementite na nizata koja sakas da ja sortiram\n");
   for ( i = 0; i < brelementi; i++ ) {
      scanf("%d", &niza[ i ] );
   } /* kraj for */
   selekcija(niza,brelementi);
  /* ispechati ja sodrzhinata na nizata n vo tabularen format */
   for ( i = 0; i < brelementi; i++ ) {
      printf( "%7d%13d\n", i, niza[ i ] );
   } /* kraj for */
   return 0;
} /*kraj na main*/
/*ova e selection sort za sortiranje na nizi*/
void selekcija(int numbers[], int array_size)
{
  int i, j;
  int min, temp;

  for (i = 0; i < array_size-1; i++)
  {
    min = i;
    for (j = i+1; j < array_size; j++)
    {
      if (numbers[j] < numbers[min])
        min = j;
    }
    temp = numbers[i];
    numbers[i] = numbers[min];
    numbers[min] = temp;
  }
}





