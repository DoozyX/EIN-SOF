//programa paralelogram.h
//class paralelogram
#ifndef PARA_H
#define PARA_H
#include "cetiriagolnik.h"

class Paralelogram:public Cetiriagolnik{
public:
	Paralelogram(int a,int b,int c,int d,int e,int f,int g,int h):Cetiriagolnik(a,b,c,d,e,f,g,h){}
	int presmetajPlostina();
	double presmetajPerimetar();
	void print();
	~Paralelogram(){}
};
#endif