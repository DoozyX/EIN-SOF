// oblik.h
// DEfinicija na apstraktnata osnovna klasa oblik.
#ifndef OBLIK_H
#define OBLIK_H
 
 
class Oblik {
 
public:
   
   // virtuelna funkcija koja vrakja ploshtina na oblikot
   virtual double presmetajPlostina();
 
   // virtuelna funkcija koja vrakja volumen na oblikot
   virtual double presmetajVolumen();

   virtual double presmetajPerimetar();
 
   // chisti virtuelni funkcii, predefinirani vo izvedenite klasi
   virtual void print()=0;     // vrakja oblik
}; // kraj na klasata oblik
#endif