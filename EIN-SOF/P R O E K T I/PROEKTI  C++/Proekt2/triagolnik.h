//programa triagolnik.h
//class Triagolnik
#ifndef TRI_H
#define TRI_H
#include "dvoDimenzionalni.h"

class Triagolnik:public DvoDimenzionalni{
public:
	Triagolnik(double,double);
	double presmetajPlostina();
    double presmetajPerimetar();
	void print();

};
#endif


