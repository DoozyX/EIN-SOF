// Da se osposobat klasite i definiciite na 

// metodite za da mozhe da se izvrshi glavnata programa

// car.h

#ifndef CAR_H

#define CAR_H

 

#include <iostream>

#include <string>

using std::string;

 

// definicija na klasata car 

class Car {

public:

   Car( string name, string color );

 

   void setMaxSpeed( int );

   int getMaxSpeed() const;

 

   void setEngineValves( int );

   int getEngineValves() const;

 

   string getColor() const;

   string getName() const;

 

   void print() const;

 

private:

   int maxSpeed;

   int engineValves;

   string color;

   string name;

}; // kraj na klasata Car

 

#endif // CAR_H

