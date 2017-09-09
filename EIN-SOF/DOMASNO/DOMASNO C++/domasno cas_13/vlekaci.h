// vlekaci.h.

#ifndef VLEKACI_H
#define VLEKACI_H

#include "date1.h"
#include"zivotno.h"
class Vlekaci:public Zivotno {
public:
	Vlekaci(){};
   Vlekaci( char *, char ,int, int, int, int, int, int,int,int,int );
   virtual void Prikazi_Podatoci() const;
   virtual Date Presmetaj_Vakcina();
  
   ~Vlekaci();  // za otslikuvanje na redosledot na unishtuvanje objekti

   
}; // kraj na klasa

#endif