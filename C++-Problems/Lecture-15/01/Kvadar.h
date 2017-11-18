#ifndef INC_02_KVADAR_H
#define INC_02_KVADAR_H


#include "TroDimenzionalni.h"

class Kvadar : public TroDimenzionalni {
private:
    static int kvadarCount;
public:
    Kvadar(int x = -1, int y = -1, int z = -1);

    double Area() override;

    double Peremiter() override;

    double Volume() override;

    ~Kvadar() override;

};


#endif //INC_02_KVADAR_H
