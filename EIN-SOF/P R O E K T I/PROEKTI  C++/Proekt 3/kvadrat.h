//programa kvadrat.h
//class kvadrat
#ifndef KVA_H
#define KVA_H
#include "dvoDimenzionalni.h"

class Kvadrat:public DvoDimenzionalni{
public:
	Kvadrat(double x=1);
	virtual double presmetajPlostina();
    virtual double presmetajPerimetar();
	virtual void print();
};
#endif