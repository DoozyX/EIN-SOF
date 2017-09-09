//programa kocka.cpp
#include <iostream>  
#include "math.h" 
using std::cout;

#include "kocka.h"

Kocka::Kocka(double x):TroDimenzionalni(x,x){}

double Kocka::presmetajPlostina()
{ 
	
	
	return 6*pow(TroDimenzionalni::getA(),2);
	}

double Kocka::presmetajVolumen()
{ 
	
	return pow(TroDimenzionalni::getA(),3);
	}

void Kocka::print()
{ 
	TroDimenzionalni::print();
	cout<<"kade visinata h e ednakva so stranata a"<<"\n";
	}
