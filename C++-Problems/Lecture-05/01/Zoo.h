
#ifndef INC_01_ZOO_H
#define INC_01_ZOO_H

#include <iostream>
#include <vector>
#include "Zivotno.h"


using namespace std;

class Zoo {
private:
    vector <Zivotno> zivotni;
public:
    void addZivotno(const Zivotno &zivotno);
    int getSize();
    void prikaziGrupa(char grupa);
    void prikazi();
    void prikaziZaVakcinacija();
};


#endif //INC_01_ZOO_H
