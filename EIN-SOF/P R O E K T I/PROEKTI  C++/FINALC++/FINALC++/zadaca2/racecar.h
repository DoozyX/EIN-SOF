// racecar.h

#ifndef RACECAR_H

#define RACECAR_H

 

#include "car.h"

 

// definicija na klasta Racecar 

/* Napishi zaglavie za klasata Racecar, koja nasleduva   

   public od Car */ 

 
class Racecar :public Car{
public:

   Racecar( string, string, string );

 

   void setGearbox( int );

   void useParachute();

   void print() const;

 

private:

   int gearbox; // broj na brzini (pr. 5-brzini)

   string sponsor;  

   bool parachuteDeployed; 

}; // kraj na klasata Racecar

 

#endif // RACECAR_H

