#ifndef INC_02_PRAVOAGOLNIK_H
#define INC_02_PRAVOAGOLNIK_H


#include "DvoDomenzionalni.h"

class Pravoagolnik : public DvoDomenzionalni{
private:
    static int pravoagolnikCount;
public:
    explicit Pravoagolnik(int x = -1, int y = -1);

    double Area() override;

    double Peremiter() override;

    ~Pravoagolnik() override;
};


#endif //INC_02_PRAVOAGOLNIK_H
