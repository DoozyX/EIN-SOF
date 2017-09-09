//Primer za definicija i upotreba na function template

 

#include <iostream>

 

using std::cout;
using std::cin;

using std::endl;

// Definicija na function template vnesiArray

template< class T >  //*

void vnesiArray(T *array, const int count )//**

{
	
   for ( int i = 0; i < count; i++ )
	
      cin >> array[ i ];

      cout << endl;

 

} // Kraj na function template vnesiArray
 

// Definicija na function template sortArray

template< class T >  //*

void sortArray(T *array, const int count )
{
	T pom;
	for ( int i = 0; i < count; i++ )
		for ( int j = i; j < count; j++ )
		{	
			if(array[i]>array[j])
			{
				pom=array[i];
				array[i]=array[j];
				array[j]=pom;
			}
		}
}//kraj na funkcijata sortArray


// Definicija na function template printArray

template< class T >  //*

void printArray( const T * array, const int count )//**

{

   for ( int i = 0; i < count; i++ )

      cout << array[ i ] << " ";

      cout << endl;

 

} // Kraj na function template printArray

 

int main()

{

   const int aCount = 5;

   const int bCount = 7;

  
   int a[ aCount ];

   double b[ bCount ];
	
   cout<<"Vnesi gi elementite na nizata a, koja ima integer elementi:\n";
   vnesiArray(a,aCount);
   cout<<"Vnesi gi elementite na nizata b, koja ima double elementi:\n";
   vnesiArray(b,bCount);

   sortArray(a,aCount);
   sortArray(b,bCount);
 

 

   cout << "Sortiranoto pole a sodrzi:" << endl;

 

   // povikaj int function-template specijalizacija

   printArray( a, aCount );  //***

 

 

   cout << "Sortiranoto pole b sodrzi:" << endl;

 

   // povikaj double function-template specijalizacija

   printArray( b, bCount );  // ***

 
 

   return 0;

 

} // kraj na main