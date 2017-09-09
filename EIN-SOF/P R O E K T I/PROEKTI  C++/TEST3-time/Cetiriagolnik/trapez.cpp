//programa trapez.cpp
#include <iostream>
#include "trapez.h"
#include "math.h"
#include "cetiriagolnik.h"
using std::cout;

int Trapez::presmetajPlostina()
{ 
	int l,h,b;
	l=Cetiriagolnik::getx2()-Cetiriagolnik::getx3();
	b=Cetiriagolnik::getx3()-Cetiriagolnik::getx4();
	h=Cetiriagolnik::gety3()-Cetiriagolnik::gety2();
	return (b*b+h*l);
}
double Trapez::presmetajPerimetar()	
{
	int l,b,h,a;
	double c;
	a=Cetiriagolnik::getx2()-Cetiriagolnik::getx1();
	l=Cetiriagolnik::getx2()-Cetiriagolnik::getx3();
	b=Cetiriagolnik::getx3()-Cetiriagolnik::getx4();
	h=Cetiriagolnik::gety3()-Cetiriagolnik::gety2();
	c=sqrt(h*h+l*l);

	return (2*c+b+a);
}
void Trapez::print()
{
	Cetiriagolnik::print();
}