//programa troDimenzionalni.h
//klasa TroDimenzionalni
#ifndef TROD_H
#define TROD_H
#include "dvoDimenzionalni.h"

class TroDimenzionalni :public DvoDimenzionalni{
public:
	TroDimenzionalni(double=1,double=1,double=1);
	double presmetajPlostina();
	double presmetajVolumen();
	void print();
	~TroDimenzionalni(){};
private:
	double h;
};

#endif