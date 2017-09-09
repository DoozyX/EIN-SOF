// Stedac.h 
// Deklaracija na klasata Stedac.
// Funkciite chlenki se definirani vo Stedac.cpp
#ifndef STEDAC_H
#define STEDAC_H
#include "Lice.h"
class stedac {
public:
   stedac();
   void putStedac(char *,char *,char *,char *,double,double);
   void printStedac() const;
   static int getBrStedac();
   static float getKamata();
   ~stedac();
private:
   static int brStedaci;
   static float kamata;
   Lice licnost;
   double bilans;
   double kredit;


}; // kraj na klasata stedac


#endif