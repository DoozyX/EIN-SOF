//programa kvadrat.h
//class kvadrat
#ifndef KVAD_H
#define KVAD_H
#include "cetiriagolnik.h"

class Kvadrat:public Cetiriagolnik{
public:
	Kvadrat(int a,int b,int c,int d,int e,int f,int g,int h):Cetiriagolnik(a,b,c,d,e,f,g,h){}
	int presmetajPlostina();
	int presmetajPerimetar();
	void print();
	~Kvadrat(){}
};
#endif