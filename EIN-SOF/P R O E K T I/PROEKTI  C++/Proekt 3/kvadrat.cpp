//programa kvadrat.cpp
#include <iostream>  
 
using std::cout;

#include "kvadrat.h"

Kvadrat::Kvadrat(double x):DvoDimenzionalni(x)
{}

double Kvadrat::presmetajPlostina()
{ 
	return (DvoDimenzionalni::getA()*DvoDimenzionalni::getA());
	}

double Kvadrat::presmetajPerimetar()
{ 
	return (4*DvoDimenzionalni::getA());
	}

void Kvadrat::print()
{ 
DvoDimenzionalni::print();
}
