//programa paralelogram.cpp
#include <iostream>
#include "paralelogram.h"
#include "math.h"
#include "cetiriagolnik.h"
using std::cout;

int Paralelogram::presmetajPlostina()
{ 
	int a,h;
	a=Cetiriagolnik::getx2()-Cetiriagolnik::getx1();
	h=Cetiriagolnik::gety3()-Cetiriagolnik::gety2();
	return a*h;
}
double Paralelogram::presmetajPerimetar()	
{
	int a,l,h;
	double b;
	a=Cetiriagolnik::getx2()-Cetiriagolnik::getx1();
	h=Cetiriagolnik::gety3()-Cetiriagolnik::gety2();
	l=Cetiriagolnik::getx3()-Cetiriagolnik::getx2();
	b=sqrt(h*h+l*l);
	return 2*(a+b);
}
void Paralelogram::print()
{
	Cetiriagolnik::print();
}