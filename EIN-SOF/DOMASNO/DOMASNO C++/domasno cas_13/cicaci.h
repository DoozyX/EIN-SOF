// cicaci.h.

#ifndef CICACI_H
#define CICACI_H

#include "date1.h"
#include"zivotno.h"
class Cicaci:public Zivotno {
public:
	Cicaci(){};
    Cicaci( char *, char ,int, int, int, int, int, int,int,int,int ); 
   virtual void Prikazi_Podatoci() const;
   virtual Date Presmetaj_Vakcina();
   ~Cicaci();  // za otslikuvanje na redosledot na unishtuvanje objekti
private:
   
   Date SlednaVakcina;
   
}; // kraj na klasa

#endif