// cicaci.cpp
// Definicii na funkciite chlenki za klasata 
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
#include "date1.h"
#include "ptici.h"
 
Ptici::Ptici( char *fname,char p,
                    int bmonth, int bday, int byear,
                    int pmonth, int pday, int pyear,
					int vmonth, int vday,int vyear):Zivotno(fname,p, bmonth, bday, byear,
                     pmonth, pday, pyear,
					 vmonth, vday, vyear)
{  

  

   
} // kraj na konstruktor 

void Ptici::Prikazi_Podatoci() const
{
	Zivotno::Prikazi_Podatoci();
   cout<<"Sledna vakcina na: ";
   SlednaVakcina.print();
   cout<<endl;
} // kraj na funkcijata print

// Destruktor: za demonstriranje na redosledot na unishtuvanje objekti
Ptici::~Ptici()
{ 
  
} // kraj na destruktorot od Ptici

Date Ptici::Presmetaj_Vakcina()
{
	Date pom;		
	SlednaVakcina.setday(getVakcinaData().getday());
		if(getVakcinaData().getmonth()<6)
		{SlednaVakcina.setmonth(getVakcinaData().getmonth()+6);
		SlednaVakcina.setyear(getVakcinaData().getyear());}
		else
		if(getVakcinaData().getmonth()>6)	
		{
		SlednaVakcina.setmonth(((getVakcinaData().getmonth()+6)%12));SlednaVakcina.setyear(getVakcinaData().getyear()+1);
		}	
		else
		{	SlednaVakcina.setmonth(12);SlednaVakcina.setyear(getVakcinaData().getyear());}
		
		pom.setday(getVakcinaData().getday());
		if(getVakcinaData().getmonth()<6)
		{pom.setmonth(getVakcinaData().getmonth()+6);
		pom.setyear(getVakcinaData().getyear());}
		else
		if(getVakcinaData().getmonth()>6)	
		{
		pom.setmonth(((getVakcinaData().getmonth()+6)%12));pom.setyear(getVakcinaData().getyear()+1);
		}	
		else
		{	pom.setmonth(12);pom.setyear(getVakcinaData().getyear());}
		return pom;
}