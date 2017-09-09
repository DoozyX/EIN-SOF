//Primer za definicija i upotreba na function template

 

#include <iostream>

 

using std::cout;
using std::cin;

using std::endl;

 

// Definicija na function template printArray

 

template< class T >  //*

void printArray( const T *array, const int count )//**

{

   for ( int i = 0; i < count; i++ )

      cout << array[ i ] << " ";

      cout << endl;

 

} // Kraj na function template printArray

// Definicija na function template printArray, preklopena

 

template< class T >  //*

int printArray( const T *array, const int count,int lowSubscript,int highSubscript )//**

{

	if((lowSubscript>=0)&&(highSubscript<count))
	{

		for ( int i =lowSubscript ; i <=highSubscript ; i++ )

		cout << array[ i ] << " ";

		cout << endl;
		
		return (highSubscript-lowSubscript);
	}
	else 
		return 0;


 

} // Kraj na function template printArray, preklopena
 

int main()

{
   int a1,a2;	
   const int aCount = 5;

   const int bCount = 7;

   const int cCount = 6;

 

   int a[ aCount ] = { 1, 2, 3, 4, 5 };

   double b[ bCount ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };

   char c[ cCount ] = "HELLO"; 

 

 

   cout << "Poleto a sodrzi:" << endl;

 

   // povikaj int function-template specijalizacija

   printArray( a, aCount );  //***

   cout<<"Vnesi gi lowSubscript i highSubscript\n";
   
   cin>>a1;cin>>a2;
   
   printArray( a, aCount,a1,a2 );  //***

   while(!(printArray( a, aCount,a1,a2 )))
   {	
	   cout<<"Vnesi gi lowSubscript i highSubscript\n";
   
   cin>>a1;cin>>a2;
   
   }


   cout << "Poleto b sodrzi:" << endl;

 

   // povikaj double function-template specijalizacija

   printArray( b, bCount );  // ***

   cout<<"Vnesi gi lowSubscript i highSubscript\n";
   
   cin>>a1;cin>>a2;
   
   printArray( b, bCount,a1,a2 );  //*** 

   while(!(printArray( b, bCount,a1,a2 )))
   {	
	   cout<<"Vnesi gi lowSubscript i highSubscript\n";
   
   cin>>a1;cin>>a2;
   
   }
 

   cout << "Poleto c sodrzi:" << endl;

 

   // povikaj char function-template specijalizacija

   printArray( c, cCount );  //***

   cout<<"Vnesi gi lowSubscript i highSubscript\n";
   
   cin>>a1;cin>>a2;
   
   printArray( c, cCount,a1,a2 );  //***

   while(!(printArray( c, cCount,a1,a2 )))
   {	
	   cout<<"Vnesi gi lowSubscript i highSubscript\n";
   
   cin>>a1;cin>>a2;
   
   }

   return 0;

 

} // kraj na main