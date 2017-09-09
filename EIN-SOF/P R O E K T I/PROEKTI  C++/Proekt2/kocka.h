//programa kocka.h
//klasa Kocka
#ifndef KOCKA_H
#define KOCKA_H
#include "troDimenzionalni.h"

class Kocka:public TroDimenzionalni{
public:
    Kocka(double x):TroDimenzionalni(x,x,x){};
	double presmetajPlostina(){return TroDimenzionalni::presmetajPlostina();}
	double presmetajVolumen(){return TroDimenzionalni::presmetajVolumen();}
	void print(){TroDimenzionalni::print();}
	~Kocka(){};
};
#endif