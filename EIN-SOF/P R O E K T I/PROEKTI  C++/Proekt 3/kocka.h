//programa kocka.h
//class kocka
#ifndef KOCKA_H
#define KOCKA_H
#include "troDimenzionalni.h"

class Kocka:public TroDimenzionalni{
public:
	Kocka(double=1);
	virtual double presmetajPlostina();
    virtual double presmetajVolumen();
	virtual void print();
};
#endif