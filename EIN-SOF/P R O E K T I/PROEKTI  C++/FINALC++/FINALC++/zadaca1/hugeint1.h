// hugeint1.h 

// Klasna definicija na HugeInt.

#ifndef HUGEINT1_H

#define HUGEINT1_H

 

#include <iostream>

 

using std::ostream;

 

class HugeInt {

   friend ostream &operator<<( ostream &, const HugeInt & );

 

public:

   HugeInt( long = 0 );      // konverziski/predefiniran konstruktor

   HugeInt( const char * );  // konverziski konstruktor

 

   // sobirachki operator; HugeInt + HugeInt

   HugeInt operator+( const HugeInt & );

 

   // sobirachki operator; HugeInt + int

   HugeInt operator+( int );            

 

   // sobirachki operator; 

   // HugeInt + string koj pretstavuva golema celobrojna vrednost

   HugeInt operator+( const char * );    

 

private:

   short integer[ 30 ];

 

}; // kraj na klasata HugeInt

 

#endif

