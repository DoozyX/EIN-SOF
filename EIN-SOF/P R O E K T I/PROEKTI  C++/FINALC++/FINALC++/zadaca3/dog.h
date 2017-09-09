

 

// debagiranje1 (dog.h)

 

#ifndef DOG_H

#define DOG_H

 

#include "animal.h"
#include<string>
using std::string;
 

// definicija na klasata Dog 

class Dog : public Animal {

 

public:

   Dog( int = 0, int = 0, string = "Toto" );

       

   virtual void print() const;

   virtual int getHeight() const;

   virtual int getWeight() const;

   string getName() const;

   void setName( string );

 

private:

   bool useMetric( string ) const;

   string name;

   int metricHeight;

   int metricWeight;

 

}; // kraj na kalsata Dog

 

#endif // DOG_H

