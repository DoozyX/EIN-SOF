/// debagiranje1 (dog.cpp)

#include <iostream>

 

using std::cout;

using std::endl;

using std::cin;

#include<string>
using std::string; 

#include "dog.h"

 

// predefiniran konstruktor

Dog::Dog( int h, int w, string n )

   : Animal( h, w )

{

   setName( n );

   metricHeight = h * 2.5;

   metricWeight = w / 2.2;

 

} // kraj na konstruktorot na klasata Dog 

 

// vrati ime

string Dog::getName() const 

{

   return name;

} // kraj na funkcijata getName

 

// definicija na funkcijata setName 

void Dog::setName( string n ) 

{

   name = n;

} // kraj na funkcijata setName

 

// definicija na funkcijata print 

void Dog::print() const

{

   cout << "Ova zhivotno e kuce, a negovoto ime e: "

        << name << endl;

   Animal::print();

} // kraj na funkcijata print

 

// vrati visina

int Dog::getHeight() const

{

   if ( useMetric( "height" ) )

      return metricHeight;

 

   else

      return Animal::getHeight();

} // kraj na funkcijata print

 

// vrati tezhina

int Dog::getWeight() const

{

   if ( useMetric( "weight" ) )

      return metricWeight;

 

   else

      return Animal::getWeight();

} // kraj na funkcijata getWeight

 

// definicija na funkcijata useMetric 

bool Dog::useMetric( string type ) const

{

   int choice = 0;

 

   cout << "Vo koi merni edinici sakash da go vidish "

        << type << "  (Vnesi 1 ili 2)\n"

        << "\t1. metrichki\n"

        << "\t2. standarden\n";

 

   cin >> choice;

 

   if ( choice == 1 )

      return true;

 

   else

      return false;

 

} // kraj na funkcijata useMetric

