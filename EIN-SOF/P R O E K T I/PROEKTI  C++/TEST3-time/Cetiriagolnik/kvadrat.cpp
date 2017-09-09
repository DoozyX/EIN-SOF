//programa kvadrat.cpp
#include <iostream>
#include "kvadrat.h"
#include "math.h"
#include "cetiriagolnik.h"
using std::cout;

int Kvadrat::presmetajPlostina()
{ 
	int a;
	a=Cetiriagolnik::getx2()-Cetiriagolnik::getx1();
	
	return a*a;
}
int Kvadrat::presmetajPerimetar()	
{
	int a;
	a=Cetiriagolnik::getx2()-Cetiriagolnik::getx1();
	
	return 4*a;
}
void Kvadrat::print()
{
	Cetiriagolnik::print();
}