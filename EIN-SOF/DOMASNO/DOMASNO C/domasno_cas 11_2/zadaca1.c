/* Program za zadaca 1 pri vnesuvanjeto na broj od formatot (389) 234-457
   se pecati posebno pozivniot broj posebno ostatokot */
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
   /* inicijaliziraj niza string */
   char *string;
   char *tokenPtr; /* krairaj char pokazhuvach */
   char *poziven; /* char pokazuvac za pozivniot broj*/
   char *prv,*vtor; /* char pokazuvaci za prviot i vtoriot del od ostatokot od brojot*/
     puts("Vnesi broj od tipot na format (333) 333-2374");  /*vnesuvanje na brojot*/
     gets(string);
     printf( "%s\n%s\n",
      "Brojot koj treba da se podeli e:", string);
   tokenPtr = strtok( string, "()" ); /* pochni so delenje na vneseniot string(broj) */
   poziven=tokenPtr;/*go izdvojuvame pozivniot broj koj go zapisuvame vo poziven*/
   tokenPtr = strtok( NULL, " " );/* zemi go sledniot del*/
   tokenPtr = strtok( tokenPtr, "-" ); /*naredno delenje za da go dobieme naredniot del od brojot*/
   prv=tokenPtr;/*go zemame prviot del od ostatokot od brojot*/
   tokenPtr = strtok( NULL, " " ); /* zemi go sledniot del */
   vtor=tokenPtr; /*vtoriot del od ostatokot od btojot*/
   strcat(prv,vtor);/*ostatokot od broj go zalepuvame vo eden string t.e. vo prv*/
   /*prikazuvanje na pozivniot kako int od pozivniot pokazuvac, i ostatokot od brojot
   kako long od prv pokazuvacot na char*/
   printf("Pozivniot broj e: %d, a ostanatiot broj e: %ld\n",atoi(poziven),atol(prv));
   return 0; /* uspeshen kraj */
} /* kraj na main */

