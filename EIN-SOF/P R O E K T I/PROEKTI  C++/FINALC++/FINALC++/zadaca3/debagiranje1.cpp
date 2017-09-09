// debagiranje1 (debagiranje1.cpp)

#include <iostream>

 

using std::cout;

using std::endl;

using std::cin;

 

#include "animal.h"

#include "lion.h"

#include "dog.h"

 

void setHeightWeight( Animal * );

 

int main()

{

   Dog dog1( 60, 120, "Ben" );

   Lion lion1( 45, 300 );
   Animal *lion;
   Animal *dog;
   lion=&lion1;
   dog=&dog1;  

   setHeightWeight( lion );

   setHeightWeight( dog );

 

   return 0;

 

} // kraj main

 

// definicija na funkcijata setHeightWeight 

void setHeightWeight( Animal *a )

{

   int height;

   int weight;

 

   a->print();

   cout << "Vnesi nova visina (koristejki standardni edinici): ";

   cin >> height;

   a->setHeight( height );

 

   cout << "Vnesi nova tezhina (koristejki standardni edinici): ";

   cin >> weight;

   a->setWeight( weight );

 

   height = a->getHeight();

   weight = a->getWeight();

 

   cout << "Ova se novite vrednosti za visina i tezhina:\n"

        << height << endl

        << weight << endl << endl;

 

} // kraj na funkcijata setHeightWeight

