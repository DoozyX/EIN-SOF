//programa troDimenzionalni.h
//klasa TroDimenzionalni
#ifndef TROD_H
#define TROD_H
#include "oblik.h"
using std::cout;
class TroDimenzionalni :public Oblik{
public:
	TroDimenzionalni(double=1,double=1);
	virtual double presmetajPlostina();
	virtual double presmetajVolumen();
	double getA(){return a;}
	double getH(){return h;}
	virtual void print(){cout<<"Strana a: "<<a<<"\n"<<"Visina h: "<<h<<"\n";}
    ~TroDimenzionalni(){};
private:
	
	double a;
	double h;
};
#endif