// debagiranje1 (lion.cpp)

#include <iostream>

 

using std::cout;

using std::endl;

 

#include "lion.h"

 

// predefiniran konstruktor 

Lion::Lion( int h, int w )

: Animal( h, w ) 

{

   // prazno

} // kraj na konstruktorot na klasat Lion 

 

// definicija na funkcijata print 

void Lion::print() const

{

   cout << "Ova zhivotno e lav\n";

   Animal::print();

 

} // kraj na funkcijata print

