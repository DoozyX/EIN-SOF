//programa kvadar.h
//klasa Kvadar
#ifndef KVADAR_H
#define KVADAR_H
#include "troDimenzionalni.h"

class Kvadar:public TroDimenzionalni{
public:
    Kvadar(double x,double y,double z):TroDimenzionalni(x,y,z){};
	double presmetajPlostina(){return TroDimenzionalni::presmetajPlostina();}
	double presmetajVolumen(){return TroDimenzionalni::presmetajVolumen();}
	void print(){TroDimenzionalni::print();}
	~Kvadar(){};
};
#endif
