// racecar.cpp

#include <iostream>

 

using std::cout;

using std::endl;

 

#include "racecar.h"

 

// konstruktor

Racecar::Racecar( string n, string c, string s ):Car(n,c)
	
	

   /* Napishi kod za povikuvanje na konstruktorot na osnovnata klasa */

{

   /* Napishi kod za kopiranje na s vo privatna podatochna chlenka sponsor */
   
   sponsor=s;

   gearbox = 6;

   parachuteDeployed = false;

 

} // kraj na konstruktorot na klasata Racecar 

 

// definicija na funkcijata setGearbox 

void Racecar::setGearbox( int gears )

{

   gearbox = ( ( gears <= 10 && gears >= 0 ) ? gears : 6 );

} // kraj na funkcijata setGearbox

 

// definicija na funkcijat useParachute 

void Racecar::useParachute() 

{

   parachuteDeployed = true;

} // kraj na funkcijata useParachute

 

// definicija na funkcijata print 

void Racecar::print() const

{
	Car::print();
   /* Napishi naredba koja ja povikuva funkcijata print od osnovnata klasa */

   cout << getName() << " ima " << gearbox 

        << " brzini i e sponzoriran od " << sponsor << ". ";

 

   if ( parachuteDeployed )

	   cout  <<Car::getName()/* Napishi naredba koja dostapuva do verzijata na name od osnovnata klasa */ 

           << " ja iskoristi svojata zamena." << endl;

   else

	   cout  <<Car::getName()/* Napishi naredba koja dostapuva do verzijata na name od osnovnata klasa */ 

           << " ne ja iskoristi svojata zamena." << endl;

 

} // kraj na funkcijata print

