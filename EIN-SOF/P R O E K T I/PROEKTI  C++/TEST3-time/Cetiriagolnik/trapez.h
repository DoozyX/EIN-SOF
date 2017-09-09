//programa trapez.h
//class trapez
#ifndef TRAP_H
#define TRAP_H
#include "cetiriagolnik.h"

class Trapez:public Cetiriagolnik{
public:
	Trapez(int a,int b,int c,int d,int e,int f,int g,int h):Cetiriagolnik(a,b,c,d,e,f,g,h){}
	int presmetajPlostina();
	double presmetajPerimetar();
	void print();
	~Trapez(){}
};
#endif