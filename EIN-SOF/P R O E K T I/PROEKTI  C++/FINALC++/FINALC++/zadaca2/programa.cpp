 

// testiranje za  trkachka kola i kola

#include <iostream>

 

using std::cout;

using std::endl;

 

#include "car.h"

#include "racecar.h"

 

int main()

{

   Car chevy( "Chevrolette", "crn" );

 

   cout << "chevy: \n";
   
   chevy.print();
   /* Napishi kod za pechatenje na objekt od klasata Car */

 

   Racecar f1( "Ferrari", "crven", "Bug2Bug" );

 

   f1.setEngineValves( 40 );

   f1.setMaxSpeed( 220 );

   f1.setGearbox( 7 );

   f1.useParachute();

 

   cout << "\n\nf1: \n";

   f1.print();

 

   return 0;

} // kraj main

