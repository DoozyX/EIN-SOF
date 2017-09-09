// cicaci.cpp
// Definicii na funkciite chlenki za klasata 
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include "date1.h"
#include "cicaci.h"
 
Cicaci::Cicaci( char *fname,char p,
                    int bmonth, int bday, int byear,
                    int pmonth, int pday, int pyear,
					int vmonth, int vday,int vyear):Zivotno(fname,p, bmonth, bday, byear,
                     pmonth, pday, pyear,
					 vmonth, vday, vyear)
{  

  

   
} // kraj na konstruktor 

void Cicaci::Prikazi_Podatoci() const
{
	Zivotno::Prikazi_Podatoci();
   cout<<"Sledna vakcina na: ";
   SlednaVakcina.print();
   cout<<endl;
} // kraj na funkcijata print

// Destruktor: za demonstriranje na redosledot na unishtuvanje objekti
Cicaci::~Cicaci()
{ 
  
} // kraj na destruktorot od Zivotno

Date Cicaci::Presmetaj_Vakcina()
{
	Date pom;
	SlednaVakcina.setday(Zivotno::getVakcinaData().getday());
	SlednaVakcina.setmonth(Zivotno::getVakcinaData().getmonth());
	SlednaVakcina.setyear(Zivotno::getVakcinaData().getyear()+1);
	pom.setday(Zivotno::getVakcinaData().getday());
	pom.setmonth(Zivotno::getVakcinaData().getmonth());
	pom.setyear(Zivotno::getVakcinaData().getyear()+1);
	return pom;
}