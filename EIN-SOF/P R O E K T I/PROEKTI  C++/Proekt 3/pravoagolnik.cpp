//programa pravoagolnik.cpp
#include <iostream>  
 
using std::cout;

#include "pravoagolnik.h"

Pravoagolnik::Pravoagolnik(double x,double y):DvoDimenzionalni(x)
{	b=y;
}

double Pravoagolnik::presmetajPlostina()
{ 
	return DvoDimenzionalni::getA()*b;
	}

double Pravoagolnik::presmetajPerimetar()
{ 
	return (2*(DvoDimenzionalni::getA()+b));
	}

void Pravoagolnik::print()
{ 
DvoDimenzionalni::print();cout<<"Strana b: "<<b<<"\n";
}
