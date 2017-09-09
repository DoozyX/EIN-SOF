//programa pravoagolnik.h
//class pravoagolnik
#ifndef PRAV_H
#define PRAV_H
#include "cetiriagolnik.h"

class Pravoagolnik:public Cetiriagolnik{
public:
	Pravoagolnik(int a,int b,int c,int d,int e,int f,int g,int h):Cetiriagolnik(a,b,c,d,e,f,g,h){}
	int presmetajPlostina();
	int presmetajPerimetar();
	void print();
	~Pravoagolnik(){}
};
#endif