// Urand.h

// Generator na slucajni broevi

 

#include <bitset>

#include <cstddef>

#include <cstdlib>

#include <ctime>

 

//using namespace std;

 

template<size_t UpperBound> class Urand {

	std::bitset<UpperBound> used;

public:

  Urand() { srand(time(0)); } // Randomize

  size_t operator()(); // Generatorska funkcija

};

 

template<size_t UpperBound>

inline size_t Urand<UpperBound>::operator()() {

  if(used.count() == UpperBound)

    used.reset();  // resetiranje na bitovite

  size_t newval;

  while(used[newval = rand() % UpperBound])

    ; // povtoruvaj dodeka ne se pronajde nova slucajna vrednost

  used[newval] = true;

  return newval;

}