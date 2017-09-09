/* Program p05_02.c  
   Sumiranje so for */
#include <stdio.h>
 
/* pochnuva izvrshuvanjeto na programot */
int main()
{
   int sum = 0; /* inicijaliziraj sum */
   int number;  /* brojot shto kje mu bide dodaden na sum */
 
   for ( number = 2; number <= 100; sum += number,number += 2 ); 
   
           
   
 
   printf( "Sumata e %d\n", sum ); /* ispechati suma */
 
   return 0; /* programot uspeshno zavrshil */
    
} /* kraj na main */
