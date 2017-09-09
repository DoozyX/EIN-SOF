//programa kvadar.cpp
#include <iostream>  
 
using std::cout;

#include "kvadar.h"

Kvadar::Kvadar(double x,double y, double z):TroDimenzionalni(x,z)
{
	b=y;
}

double Kvadar::presmetajPlostina()
{ 
	double plostina;
	plostina=2*(TroDimenzionalni::getA()*TroDimenzionalni::getH()+TroDimenzionalni::getA()*b+b*TroDimenzionalni::getH());
	return plostina;
	}

double Kvadar::presmetajVolumen()
{ 
	
	return (TroDimenzionalni::getA()*TroDimenzionalni::getH()*b);
	}

void Kvadar::print()
{ 
TroDimenzionalni::print();cout<<"Strana b: "<<b<<"\n";
}
