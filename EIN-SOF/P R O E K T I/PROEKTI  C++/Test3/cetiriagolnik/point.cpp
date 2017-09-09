// point.cpp
// Definicii na chlenkite na klasata Point.
#include <iostream>  
 
using std::cout;
 
#include "point.h"   // definicija na klasata Point 
 
// predefiniran konstruktor
Point::Point( int xValue, int yValue )
{
   x = xValue;
   y = yValue;
 
} // kraj na konstruktorot na klasata Point
 
// postavi x vo koordinatniot par
void Point::setX( int xValue )
{
   x = xValue; // nema potreba od validacija
 
} // kraj na funkcijata setX
 
// vrati x od koordinatniot par
int Point::getX() const
{
   return x;
 
} // kraj na funkcijata getX
 
// postavi y vo koordinatniot par
void Point::setY( int yValue )
{
   y = yValue; // nema potreba od validacija
 
} // kraj na funkcijata setY
 
// vrati y od koordinatniot par
int Point::getY() const
{
   return y;
 
} // kraj na funkcijata getY
   
// ispechati objekt od klasata Point
void Point::print() const
{
   cout << '[' << x << ", " << y << ']';
 
} // kraj na funkcijata print
