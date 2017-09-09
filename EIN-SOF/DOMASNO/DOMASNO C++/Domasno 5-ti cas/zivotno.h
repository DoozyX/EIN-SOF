// zivotno.h.
// Funkciite chlenki se definirani vo zivotni.cpp
#ifndef ZIVOTNO_H
#define ZIVOTNO_H

#include "date1.h"

class Zivotno {
public:
	Zivotno();
void setZivotno( char *, char , char ,int, int, int, int, int, int,int,int,int );
   void print() const;
   void PresmetajVakcina();
   void Printvakcina();
   char gettip();
   Date getVakcina();
   ~Zivotno();  // za otslikuvanje na redosledot na unishtuvanje objekti
   Date SlednaVakcina;
private:
   char Name[ 25 ];
   char tip;
   char pol;
   Date RaganjeData;
   Date DonesuvanjeData;
   Date VakcinaData;
   
}; // kraj na klasa

#endif
