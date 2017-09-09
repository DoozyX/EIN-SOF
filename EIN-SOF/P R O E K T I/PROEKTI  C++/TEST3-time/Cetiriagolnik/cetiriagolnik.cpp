#include <iostream>  
 
using std::cout;

#include "cetiriagolnik.h"

Cetiriagolnik::Cetiriagolnik(int a,int b,int c, int d, int e, int f, int g, int h)
{
x1=a;y1=b;
x2=c;y2=d;
x3=e;y3=f;
x4=g;y4=h;
}
void Cetiriagolnik::print()
{
	cout<<"Prvata tocka e so kordinati:    "<<x1<<","<<y1<<"\n";
	cout<<"Vtorata tocka e so kordinati:   "<<x2<<","<<y2<<"\n";
	cout<<"Tretata tocka e so kordinati:   "<<x3<<","<<y3<<"\n";
	cout<<"Cetvrtata tocka e so kordinati: "<<x4<<","<<y4<<"\n";
}