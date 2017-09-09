//programa triagolnik.cpp
#include <iostream>
#include "triagolnik.h"
#include "math.h"
#include "dvoDimenzionalni.h"
using std::cout;



Triagolnik::Triagolnik(double x,double y):DvoDimenzionalni(x,y){}
	
double Triagolnik::presmetajPlostina()
{ 
	return (DvoDimenzionalni::presmetajPlostina()/2);
}
    
double Triagolnik::presmetajPerimetar()
{ 
	double c;
	c=sqrt(getA()*getA()+getB()*getB());
	return (DvoDimenzionalni::presmetajPerimetar()+c);}
	
void Triagolnik::print()          
{
	double c;
	c=sqrt(getA()*getA()+getB()*getB());
	DvoDimenzionalni::print();
    cout<<"Stranata C: "<<c<<"\n";
}

 
