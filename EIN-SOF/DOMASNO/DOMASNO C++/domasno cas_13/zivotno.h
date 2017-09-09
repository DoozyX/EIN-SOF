// zivotno.h.
// Funkciite chlenki se definirani vo zivotni.cpp
#ifndef ZIVOTNO_H
#define ZIVOTNO_H
#include <string>
using std::string;
#include "date1.h"

class Zivotno {
public:
	Zivotno(){};
   Zivotno( char *, char ,int, int, int, int, int, int,int,int,int );
   void setZivotno( char *, char ,int, int, int, int, int, int,int,int,int );
   virtual void Prikazi_Podatoci() const;
   virtual Date Presmetaj_Vakcina()=0;
   Date getVakcinaData(){return VakcinaData;}
   ~Zivotno();  // za otslikuvanje na redosledot na unishtuvanje objekti
private:
   string Ime;
   char pol;
   Date RaganjeData;
   Date DonesuvanjeData;
   Date VakcinaData;
   
}; // kraj na klasa

#endif