//programa kvadar.h
//class kvadar
#ifndef KVAD_H
#define KVAD_H
#include "troDimenzionalni.h"

class Kvadar:public TroDimenzionalni{
public:
	Kvadar(double=1,double=1,double=1);
	virtual double presmetajPlostina();
    virtual double presmetajVolumen();
	virtual void print();
private:
	double b;
};
#endif