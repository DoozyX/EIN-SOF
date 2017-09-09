//programa krug.h
//class krug
#ifndef KRUG_H
#define KRUG_H
#include "dvoDimenzionalni.h"

class Krug:public DvoDimenzionalni{
public:
	Krug(double x=1);
	virtual double presmetajPlostina();
    virtual double presmetajPerimetar();
	virtual void print();
};
#endif