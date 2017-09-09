// ptici.h.

#ifndef PTICI_H
#define PTICI_H

#include "date1.h"
#include"zivotno.h"
class Ptici:public Zivotno {
public:
	Ptici(){}
   Ptici( char *, char ,int, int, int, int, int, int,int,int,int );
   virtual void Prikazi_Podatoci() const;
   virtual Date Presmetaj_Vakcina();
  
   ~Ptici();  // za otslikuvanje na redosledot na unishtuvanje objekti
private:
   
   Date SlednaVakcina;
   
}; // kraj na klasa

#endif