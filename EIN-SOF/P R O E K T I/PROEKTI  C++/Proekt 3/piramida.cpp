//programa piramida.cpp
#include <iostream>  
 
using std::cout;
#include "math.h"
#include "piramida.h"

Piramida::Piramida(double x,double y):TroDimenzionalni(x,y)
{
}

double Piramida::presmetajPlostina()
{ 
	double plostina;
	plostina=TroDimenzionalni::getA()*sqrt(4*pow(TroDimenzionalni::getH(),2)+pow(TroDimenzionalni::getA(),2));
	return plostina;
	}

double Piramida::presmetajVolumen()
{ 
	
	return (pow(TroDimenzionalni::getA(),2)*TroDimenzionalni::getH())/3;
	}

void Piramida::print()
{ 
TroDimenzionalni::print();
}
