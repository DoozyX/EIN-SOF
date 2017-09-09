//programa piramida.h so osnova kvadrat
//class piramida
#ifndef PIRAMIDA_H
#define PIRAMIDA_H
#include "troDimenzionalni.h"

class Piramida:public TroDimenzionalni{
public:
	Piramida(double=1,double=1);
	virtual double presmetajPlostina();
    virtual double presmetajVolumen();
	virtual void print();

};
#endif