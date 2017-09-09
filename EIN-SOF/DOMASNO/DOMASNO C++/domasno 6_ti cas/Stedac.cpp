// Stedac.cpp
// Definicii za funkcii chlenki na klasata Stedac.
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
#include"Lice.h"
#include "Stedac.h"
int stedac::getBrStedac(){return brStedaci;}
 float stedac::getKamata(){return kamata;}
int stedac::brStedaci = 0;
float stedac::kamata = 3.00;
stedac::stedac(){}
stedac::~stedac(){brStedaci--;}

void stedac::putStedac(char *i,char *p,char *a,char *tel,double b,double k)
{
    Lice l(i,p,a,tel);
    //l.printLice();
    licnost=l;
    bilans=b;
    kredit=k;
    brStedaci++;
}

void stedac::printStedac() const
{
   licnost.printLice();
   cout<<" Bilans:   "<<bilans<<endl;
   cout<<" Kredit:   "<<kredit<<endl;
} // kraj na funkcijata print

