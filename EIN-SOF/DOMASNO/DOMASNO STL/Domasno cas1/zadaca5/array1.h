// array1.h
// EDnostavna klasa Array (za celi broevi)
#ifndef ARRAY1_H
#define ARRAY1_H
 
#include <iostream>
 
#include <cstdlib>
#include <cassert>

template<class T> 
class Array {
public:
   Array( int = 10 );                   // default konstruktor
   
   ~Array()
   {
   delete [] ptr;            // vrati ja memorijata na nizata
	} // kraj na destruktorot na Array ;
   
   T &operator[]( int );              // indeksen operator
   const T &operator[]( int ) const;  // indeksen operator
  
private:
   int size; // golemina na niza
   T *ptr; // pokazhuvach do prviot elemen na nizata
   
}; // kraj na klasata Array
 

template<class T>
Array<T>::Array( int arraySize )
{
   size = ( arraySize > 0 ? arraySize : 10 ); 
   ptr = new T[ size ]; // sozdadi mesto za niza
   assert( ptr != 0 );    // zavrshi ako ne sme dobile dovolno memorija
   
 
   for ( int i = 0; i < size; i++ )
      ptr[ i ] = 0;          // inicijaliziraj niza
} // kraj na konstruktorot na Array 
 

 

 

// Preklopen indeksen operator za ne-const nizi
// vrakjanjeto na referenca sozdava lvalue

template<class T>
T &Array<T>::operator[]( int subscript )
{
   // proveri dali indeksite se vo potrebniot opseg
   assert( 0 <= subscript && subscript < size );
   return ptr[ subscript ]; // vrati referenca
} // kraj na funkcijata operator[] 
 

// Preklopi indeksen operator za const nizi
// vrakjanje na const referenca return sozdava rvalue

template<class T>
const T &Array<T>::operator[]( int subscript ) const
{
   // proveri dali indeksite se vo potrebniot opseg
   assert( 0 <= subscript && subscript < size );
   return ptr[ subscript ]; // vrakjanje na const referenca
} // kraj na funkcijata operator[] 
#endif 

