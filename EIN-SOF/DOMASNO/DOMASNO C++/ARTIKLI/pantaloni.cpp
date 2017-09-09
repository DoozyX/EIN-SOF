//programa pantaloni.cpp
//definiranje na metodite
#include <iostream>
 
using std::cin;
using std::cout;
using std::endl;
#include "date1.h"
#include "artikl.h"
#include "pantaloni.h"

Pantaloni::Pantaloni():Artikl(){}//konstruktor

void Pantaloni::postaviPantaloni(char *i, char *g, double c,Date d,unsigned br) //vnesi nova kosula
{
	Artikl::postaviArtikl(i,g,c,d,br);
	if (d.getmonth()<12){
	DatumNaSlednaNabavka.setyear(d.getyear());
    DatumNaSlednaNabavka.setmonth(d.getmonth()+1);
	DatumNaSlednaNabavka.setday(d.getday());
	}
	else
	{
       DatumNaSlednaNabavka.setyear(d.getyear()+1);
       DatumNaSlednaNabavka.setmonth(1);
	   DatumNaSlednaNabavka.setday(d.getday());
	   }
}

void Pantaloni::prikaziPodatoci() //za pecatenje na kosula
{
	Artikl::prikaziPodatoci();
	cout<<"Datata na slednata nabavka e: ";DatumNaSlednaNabavka.print();cout<<endl;
}

bool Pantaloni::presmetajNabavka(Date DenesData) //za presmetuvanje na nabavka na kosuli
{
	if ((DatumNaSlednaNabavka.getyear())==DenesData.getyear())
				   {
		        if((DatumNaSlednaNabavka.getmonth()-1)==DenesData.getmonth())
                if(((DatumNaSlednaNabavka.getday()+30)-DenesData.getday())<=7)
				return true;
				if((DatumNaSlednaNabavka.getmonth())==DenesData.getmonth())
                if((DatumNaSlednaNabavka.getday()-DenesData.getday())<=7)
				return true;
				   }
	return false;
}

Pantaloni::~Pantaloni(){}//destruktor
