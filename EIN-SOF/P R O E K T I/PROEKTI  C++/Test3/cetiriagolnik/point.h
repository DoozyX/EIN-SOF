// point.h
// Definicija na klasa Point koja pretstavuva
// x-y koordinaten par.
#ifndef POINT_H
#define POINT_H
 
class Point {
 
public:
   Point( int = 0, int = 0 ); // predefiniran konstruktor
 
   void setX( int );          // postavi x vo koordinatniot par
   int getX() const;          // vrati x od koordinatniot par
   
   void setY( int );          // postavi y vo koordinatniot par
   int getY() const;          // vrati y od koordinatniot par
   
   void print() const;        // ispechati objekt od klasa Point 
 
private: 
   int x;  // x delot od koordinatniot par
   int y;  // y delot od koordinatniot par
}; // kraj na klasata Point
#endif
