//programa kosuli.cpp
//definiranje na metodite
#include <iostream>
 
using std::cin;
using std::cout;
using std::endl;
#include "date1.h"
#include "artikl.h"
#include "kosuli.h"

Kosuli::Kosuli():Artikl(){}//konstruktor

void Kosuli::postaviKosuli(char *i, char *g, double c,Date d,unsigned br) //vnesi nova kosula
{
	Artikl::postaviArtikl(i,g,c,d,br);
}

void Kosuli::prikaziPodatoci() //za pecatenje na kosula
{
	Artikl::prikaziPodatoci();
}

bool Kosuli::presmetajNabavka() //za presmetuvanje na nabavka na kosuli
{
	if (brojArtikli==0)
	return true;
	else
		return false;
}

Kosuli::~Kosuli(){}//destruktor




