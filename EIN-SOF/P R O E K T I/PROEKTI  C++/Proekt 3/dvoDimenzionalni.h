//programa dvoDimenzionalni.h
//klasa DvoDimenzionalni
#ifndef DVOD_H
#define DVOD_H
#include "oblik.h"
using std::cout;
class DvoDimenzionalni :public Oblik{
public:
	DvoDimenzionalni(double=1);
	virtual double presmetajPlostina();
	virtual double presmetajPerimetar();
	double getA(){return a;}
	virtual void print(){cout<<"Strana a: "<<a<<"\n";}
    ~DvoDimenzionalni(){};
private:
	
	double a;
	
};
#endif