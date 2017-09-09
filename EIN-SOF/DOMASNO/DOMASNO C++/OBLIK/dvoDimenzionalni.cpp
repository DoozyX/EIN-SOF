//programa dvoDimenzionalni.cpp
#include <iostream>  
 
using std::cout;

#include "dvoDimenzionalni.h"
#include "oblik.h"


DvoDimenzionalni::DvoDimenzionalni(double x,double y)
{
	a=x;
	b=y;
	
}

double DvoDimenzionalni::presmetajPlostina()
{
	return a*b;
}

double DvoDimenzionalni::presmetajPerimetar()
{
	return a+b;
}

