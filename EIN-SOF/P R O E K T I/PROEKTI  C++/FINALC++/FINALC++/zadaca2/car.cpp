// car.cpp

#include <iostream>

 

using std::cout;

using std::endl;

 

#include "car.h"

 

/* Napishi konstruktor za Car, koj dobiva ime na i boja na kola 

   i gi dodeluva na privatnite podatochni chlenki name i 

   color; inicijaliziraj maxSpeed na 95 i engineValves na 4 */

Car::Car( string name1, string color1 )
{
   name=name1;
   color=color1;
   maxSpeed=95;
   engineValves=4;
}
  

// definicija na funkcijata setMaxSpeed 

void Car::setMaxSpeed( int s ) 

{ 

   maxSpeed = ( ( s >= 0 && s < 250 ) ? s : 40 ); 

} // kraj na funkcijata setMaxSpeed

 

// definicija na funkcijata setEngineValves 

void Car::setEngineValves( int v )

{

   engineValves = ( ( v >= 0 && v < 50 ) ? v : 4 );

} // kraj na funkcijata setEngineValves

 

// vrati maxSpeed

int Car::getMaxSpeed() const

{

   return maxSpeed;

} // kraj na funkcijata getMaxSpeed

 

// vrati engineValves

int Car::getEngineValves() const

{

   return engineValves;

} // kraj na funkcijata getEngineValves

 

// vrati name

string Car::getName() const

{

   return name;

} // kraj na funkcijata getName

 

// vrati color

string Car::getColor() const

{

   return color;

} // kraj na funkcijata getColor

 

// function print definition

void Car::print() const

{

   cout << "Kolata: " << name << " e " << color << " i ima " 

        << engineValves << "-cilindrichen motor. Maksimalna brzina = " 

        << maxSpeed << " km/h. " << endl;

} // kraj na funkcijata print

