#ifndef INC_02_OBLIK_H
#define INC_02_OBLIK_H

#include <iostream>

using namespace std;

class Oblik {
private:
    static int countOblik;
public:
    Oblik();

    virtual double Area()= 0;
    virtual double Peremiter() = 0;
    virtual double Volume() = 0;

    virtual const string toString() = 0;
    static int getCountOblik();

    virtual ~Oblik();
};


#endif //INC_02_OBLIK_H
