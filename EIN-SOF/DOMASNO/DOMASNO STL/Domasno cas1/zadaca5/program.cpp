// Manipulacija so ednostavna klasa Array
#include <iostream>
 
using std::cout;
using std::cin;
using std::endl;
 
#include "array1.h"
 
int main()
{

   Array< double > doubleArray( 5 );

   double doubleValue = 2.1;

 

   cout << "Polnenje na elementi na double array \n";

   for(int i=0;i<5;i++)
   {
	   doubleArray[i]=doubleValue;
		doubleValue+=1;
   }
 
	cout<<"Nizata so double elementi e slednava:\n";

 
	for( i=0;i<5;i++)
   
	  cout<< doubleArray[i]<<"  ";
	
  cout<<endl;
 

   

 

  Array< int > intArray( 7 );

   int intValue = 2;

 

   cout << "Polnenje na elementi na int array \n";

   for( i=0;i<7;i++)
   {
	   intArray[i]=intValue;
		intValue+=1;
   }
 
	cout<<"Nizata so int elementi e slednava:\n";

 
	for(i=0;i<7;i++)
   
	  cout<< intArray[i]<<"  ";
	
  cout<<endl;
 

   return 0;

 

} // end main

 