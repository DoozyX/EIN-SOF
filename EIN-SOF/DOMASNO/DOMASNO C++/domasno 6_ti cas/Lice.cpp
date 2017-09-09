// Lice.cpp
// Definicii za funkcii chlenki na klasata Lice.
#include <iostream>

using std::cout;
using std::endl;

#include "Lice.h"
Lice::Lice(char *i,char *p,char *a,char *tel)
{
   int length = strlen( i );
   length = ( length < 25 ? length : 24 );
   strncpy( ime, i, length );
   ime[ length ] = '\0';

   int length1 = strlen( p );
   length1 = ( length1 < 25 ? length1 : 24 );
   strncpy( prezime, p, length1 );
   prezime[ length1 ] = '\0';

   int length2 = strlen( a );
   length2 = ( length2 < 50 ? length2 : 49 );
   strncpy( adresa, a, length2 );
   adresa[ length2 ] = '\0';

   int length3 = strlen( tel );
   length3 = ( length3 < 15 ? length3 : 14 );
   strncpy( telefon, tel, length3 );
   telefon[ length3 ] = '\0';
}
void Lice::printLice() const
{
     cout <<" Ime:      "<< ime <<endl;
     cout <<" Prezime:  "<< prezime <<endl;
     cout <<" Adresa:   "<< adresa <<endl;
     cout <<" Telefon:  "<< telefon <<endl;
}