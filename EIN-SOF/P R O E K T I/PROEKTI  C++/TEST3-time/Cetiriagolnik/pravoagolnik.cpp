//programa pravoagolnik.cpp
#include <iostream>
#include "pravoagolnik.h"
#include "math.h"
#include "cetiriagolnik.h"
using std::cout;

int Pravoagolnik::presmetajPlostina()
{ 
	int a,b;
	a=Cetiriagolnik::getx2()-Cetiriagolnik::getx1();
	b=Cetiriagolnik::gety3()-Cetiriagolnik::gety2();
	return a*b;
}
int Pravoagolnik::presmetajPerimetar()	
{
	int a,b;
	a=Cetiriagolnik::getx2()-Cetiriagolnik::getx1();
	b=Cetiriagolnik::gety3()-Cetiriagolnik::gety2();
	return 2*(a+b);
}
void Pravoagolnik::print()
{
	Cetiriagolnik::print();
}