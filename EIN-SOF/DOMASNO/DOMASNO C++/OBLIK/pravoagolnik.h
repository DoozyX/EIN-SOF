//programa pravoagolnik.h
//class pravoagolnik
#ifndef PRAV_H
#define PRAV_H
#include "dvoDimenzionalni.h"

class Pravoagolnik:public DvoDimenzionalni{
public:
	Pravoagolnik(double x,double y):DvoDimenzionalni(x,y){}
	double presmetajPlostina(){ return DvoDimenzionalni::presmetajPlostina();}
    double presmetajPerimetar(){ return (2*DvoDimenzionalni::presmetajPerimetar());}
	void print(){ DvoDimenzionalni::print();}
};
#endif

