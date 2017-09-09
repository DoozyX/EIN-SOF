//programa pravoagolnik.h
//class pravoagolnik
#ifndef PRAV_H
#define PRAV_H
#include "dvoDimenzionalni.h"

class Pravoagolnik:public DvoDimenzionalni{
public:
	Pravoagolnik(double x=1,double y=1);
	virtual double presmetajPlostina();
    virtual double presmetajPerimetar();
	virtual void print();
private:
	double b;
};
#endif