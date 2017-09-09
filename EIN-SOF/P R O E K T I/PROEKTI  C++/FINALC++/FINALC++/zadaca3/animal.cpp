// debagiranje1 (animal.cpp)

 

#include <iostream>

using std::cout;

using std::endl;

 

#include "animal.h"

 

// predefiniran konstruktor

Animal::Animal( int h, int w )

{

   height = h;

   weight = w;

 

} // kraj na konstruktorot na klasata Animal 

 

// definicija na funkcijata print 

 void Animal::print() const

{

   cout << "Visinata i tezhinata na zhivotnoto se:\n"

        << "Visina: " << height << "\tTezhina: " << weight

        << endl << endl;

} // kraj na funkcijata print

 

// vrati visina

int Animal::getHeight() const 

{

   return height;

} // kraj na funkcijata getHeight

 

// vrati tezhina

int Animal::getWeight() const 

{

   return weight;

} // kraj na funkcijata getWeight

 

// definicija na funkcijata setHeight 

 void Animal::setHeight( int h ) 

{

   height = h;

} // kraj na funkcijata setHeight

 

// definicija na funkcijata setWeight 

 void Animal::setWeight( int w ) 

{

   weight = w;

} // kraj na funkcijata setWeight

