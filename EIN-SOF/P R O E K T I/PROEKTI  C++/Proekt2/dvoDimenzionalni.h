//programa dvoDimenzionalni.h
//klasa DvoDimenzionalni
#ifndef DVOD_H
#define DVOD_H
#include "oblik.h"
using std::cout;
class DvoDimenzionalni :public Oblik{
public:
	DvoDimenzionalni(double=1,double=1);
	double presmetajPlostina();
	double presmetajPerimetar();
	double getA(){return a;}
	double getB(){return b;}
	
	void print(){cout<<"Strana a: "<<a<<"\n"<<"Strana b: "<<b<<"\n";}
    ~DvoDimenzionalni(){};
private:
	
	double a;
	double b;
};
#endif