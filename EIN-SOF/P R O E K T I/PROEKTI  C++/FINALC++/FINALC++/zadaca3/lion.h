// debagiranje1 (lion.h)

 

#ifndef LION_H

#define LION_H

 

#include "animal.h"

 

// definicija na klasata Lion 

class Lion : public Animal {

 

public:

   Lion( int = 0, int = 0 );

 

   virtual void print() const;

 

}; // kraj na klasata Lion

 

#endif // LION_H

