/* Program zadaca3.c
   Proveruvame dali eden string e palindrom */
#include <stdio.h>
int palin( char x[20]);/*prototip na funkcija*/
/* pochetok na izvrshushuvanjeto */
int main()
{   int i;
   char string1[ 20 ]; /* rezervira mesto za 20 karakteri */
   /* chitaj string od korisnikot vo nizata string1 */
   printf("vnesi string: \n");
   scanf( "%s", string1 ); /* vlezot se zavrshuva so prviot karakter blanko */
   if (palin(string1))/*go proveruvame vneseniot string*/
   printf(" Vneseniot string e palindrom\n");
   else
   printf("Vneseniot string ne e palindrom\n");
   /* ispechati karakteri dodeka ne go najdesh null-tiot karakter */
   for ( i = 0; string1[ i ] != '\0'; i++ ) {
      printf( "%c", string1[ i ] );
   } /* kraj for */
printf( "\n" );
return 0; /* uspeshen kraj */
}/* kraj main */
int palin (char x[20])/*definicija na funkcijata palindrom*/
{   int i,j=-1;
    for ( i = 0; x[ i ] != '\0'; i++ )/* ja doznavame dolzinata na stringot*/
    j+=1;
    for(i=0;i<j;i++)
    {if (x[i]!=x[j])
    return 0;  /*ako ne e palindrom vraka 0, ako e vraka 1*/
    j--;
    }
    return 1;
}
