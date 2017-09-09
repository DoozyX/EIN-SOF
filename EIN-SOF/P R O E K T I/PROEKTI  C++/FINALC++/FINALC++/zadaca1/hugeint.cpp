// hugeint1.cpp 

// Definicii na funkciite chlenki na HugeInt

// i definiciii na prijatelskite funkcii.

 
#include <stdlib.h>
#include <cctype>      // funkciski prototip na isdigit 

#include <cstring>     // funkciski prototip na strlen 

 

#include "hugeint1.h"  

using std::cout;
 

// predefiniran konstruktor; konverziski konstruktor koj pretvara

// long integer vo HugeInt objekt

HugeInt::HugeInt( long value )

{

   // inicijaliziraj ja nizata na 0

   for ( int i = 0; i <= 29; i++ )

      integer[ i ] = 0;   

 

   // postavi gi cifrite na argumentot vo nizata 

   for ( int j = 29; value != 0 && j >= 0; j-- ) {

      integer[ j ] = value % 10;

      value /= 10;

   } // kraj for

 

} // kraj na predefiniraniot/konvertirachkiot konstruktor na HugeInt 

 

// konverziski konstruktor koj pretvara string koj pretstavuva 

// golem cel broj vo HugeInt objekt

HugeInt::HugeInt( const char *string )

{   char d;
	int i=0;
     for ( int j = 0; j <= 29; j++ )

      integer[ j ] = 0;  
	
	int length = strlen(string);
	cout <<length<<"\n";
	while (i<=length)
	{    
		d=string[i];
		//atoi(&d)
		integer[30-length+i]=atoi(&d);
		i++;
	}

   

 

} // kraj na konverziskiot konstruktor na HugeInt conversion 

 

// sobirachki operator; HugeInt + HugeInt

HugeInt HugeInt::operator+( const HugeInt &op2 )

{
   HugeInt pom;
   int a=0;
   for (int i=29;i>=0;i--)
   {
	   pom.integer[i]=integer[i]+op2.integer[i]+a;
	   if (pom.integer[i]>9){
		   pom.integer[i]-=10;
		   a=1;
	   }
	   else
		 a=0;
	   
   }
   return pom;


 

   

 

} // kraj na funkcijata operator+

 

// addition operator; HugeInt + int

HugeInt HugeInt::operator+( int op2 )

{ 
	HugeInt pom,pom1;
	int a=0;
	for ( int j = 29; op2 != 0 && j >= 0; j-- ) {

      pom1.integer[j]=op2 % 10;
          
	   op2 /= 10;


   } // kraj for
  for ( int i=29;i>=0;i--)
   {
	   pom.integer[i]=pom1.integer[i]+integer[i]+a;
	   if (pom.integer[i]>9){
		   pom.integer[i]-=10;
		   a=1;
	   }
	   else
		 a=0;
	   
   }
   return pom;

} // kraj na funkcijata operator+

 

// sobirachki operator; 

// HugeInt + string koj pretstavuva golema celobrojna vrednost

HugeInt HugeInt::operator+( const char *op2 )

{   char d;
	HugeInt pom1,pom;
	int i=0,a=0;
    int length = strlen(op2);
	while (i<=length)
	{   d=op2[i];
		pom1.integer[30-length+i]=atoi(&d);
		i++;
	}
    
	for ( i=29;i>=0;i--)
   {
	   pom.integer[i]=pom1.integer[i]+integer[i]+a;
	   if (pom.integer[i]>9){
		   pom.integer[i]-=10;
		   a=1;
	   }
	   else
		 a=0;
	   
   }
   return pom;

} // kraj operator+

 

// preklopi izlezen operator

ostream& operator<<( ostream &output, const HugeInt &num )

{

   int i;

 

   for ( i = 0; ( num.integer[ i ] == 0 ) && ( i <= 29 ); i++ )

      ; // preskokni gi vodechkite nuli

 

   if ( i == 30 )

      output << 0;

   else

 

      for ( ; i <= 29; i++ )

         output << num.integer[ i ];

 

   return output;

 

} // kraj na funkcijata operator<<

