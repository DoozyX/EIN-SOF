/* Program za zadaca 2 pri vnesuvanjeto na data od formatot 12/01/2006
   se pecati 12 januar 2006 */
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
   /* inicijaliziraj niza string */
   char *string;
   char *tokenPtr; /* krairaj char pokazhuvach */
   char *den; /* char pokazuvac za pozivniot broj*/
   char *mesec,*godina; /* char pokazuvaci za prviot i vtoriot del od ostatokot od brojot*/
   char f;
   char c[1];/*pomosna niza zaradi enter, sto ni pravi problemi*/
     printf("Dali sakas da vneses data(d/n)\n");
     scanf("%c",&f);
     gets(c);/*go prima enter za da nemame problemi nadolu vo zadacata*/
    while(f=='d')
    {
    printf("Vnesi data vo format 12/01/2006, koja sakas da se obraboti\n");  /*vnesuvanje na brojot*/
    gets(string);

   tokenPtr = strtok( string, "/" ); /* pochni so delenje na vnesenata data */
   den=tokenPtr;/*go izdvojuvame denot od datata*/
   tokenPtr = strtok( NULL, " " );/* zemi go sledniot del*/
   tokenPtr = strtok( tokenPtr, "/" ); /*naredno delenje za da go dobieme mesecot od datata*/
   mesec=tokenPtr;/*go zemame prviot del od ostatokot od brojot*/
   tokenPtr = strtok( NULL, " " ); /* zemi go sledniot del */
   godina=tokenPtr; /*godinata od datata*/
   printf("%d ",atoi(den));/*go pecatime denot*/
    /*vo zavisnost koj mesec sme go izbrale*/
    switch(atoi(mesec)){
   case 1: printf("Januar");break;
   case 2: printf("Fevruari");break;
   case 3: printf("Mart");break;
   case 4: printf("April");break;
   case 5: printf("Maj");break;
   case 6: printf("Juni");break;
   case 7: printf("Juli");break;
   case 8: printf("Avgust");break;
   case 9: printf("Septemvri");break;
   case 10: printf("Oktomvri");break;
   case 11: printf("Noemvri");break;
   case 12: printf("Dekemvri");break;
   }
    printf(" %d\n",atoi(godina));  /*ja pecatime godinata*/
    printf("Dali sakas da vneses naredna data(d/n)\n");
    scanf("%c",&f);
    gets(c);/*go prima enter za da nemame problemi nadolu vo zadacata*/
    }
   return 0; /* uspeshen kraj */
} /* kraj na main */

