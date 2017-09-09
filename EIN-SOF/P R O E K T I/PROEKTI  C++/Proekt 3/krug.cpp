//programa krug.cpp
#include <iostream>  
 
using std::cout;

#include "krug.h"

Krug::Krug(double x):DvoDimenzionalni(x)
{}

double Krug::presmetajPlostina()
{ 
	return (DvoDimenzionalni::getA()*DvoDimenzionalni::getA()*3.14);
	}

double Krug::presmetajPerimetar()
{ 
	return (2*DvoDimenzionalni::getA()*3.14);
	}

void Krug::print()
{ 
DvoDimenzionalni::print();cout<<"koja e radius na krugot"<<"\n";
}
