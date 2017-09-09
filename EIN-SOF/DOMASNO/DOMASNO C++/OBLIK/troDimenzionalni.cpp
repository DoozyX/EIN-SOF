//programa troDimenzionalni.cpp
//deviniranje na metodi

#include <iostream>  
 
using std::cout;

#include "troDimenzionalni.h"


TroDimenzionalni::TroDimenzionalni(double x,double y,double z):DvoDimenzionalni(x,y)
{
	h=z;
}

double TroDimenzionalni::presmetajPlostina()
{
	double pom,pom1;
	pom=DvoDimenzionalni::presmetajPlostina();
	pom1=2*pom+getA()*2*h+getB()*2*h;
	return pom1;
}

double TroDimenzionalni::presmetajVolumen()
{
	double pom;
	pom=DvoDimenzionalni::presmetajPlostina()*h;
	return pom;
}

void  TroDimenzionalni::print()
{
	DvoDimenzionalni::print();
	cout<<"Visinata e: "<<h<<"\n";
}


	
