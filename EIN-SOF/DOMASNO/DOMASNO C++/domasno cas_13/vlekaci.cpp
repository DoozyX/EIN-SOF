// vlekaci.cpp
// Definicii na funkciite chlenki za klasata 
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
#include "date1.h"
#include "vlekaci.h"
 
Vlekaci::Vlekaci( char *fname,char p,
                    int bmonth, int bday, int byear,
                    int pmonth, int pday, int pyear,
					int vmonth, int vday,int vyear):Zivotno(fname,p, bmonth, bday, byear,
                     pmonth, pday, pyear,
					 vmonth, vday, vyear)
{  

  

   
} // kraj na konstruktor 

void Vlekaci::Prikazi_Podatoci() const
{
   Zivotno::Prikazi_Podatoci();
   cout<<endl;
} // kraj na funkcijata print

// Destruktor: za demonstriranje na redosledot na unishtuvanje objekti
Vlekaci::~Vlekaci()
{ 
  
} // kraj na destruktorot od Ptici

Date Vlekaci::Presmetaj_Vakcina()
{ Date pom;

cout<<"Se naogame vo presmetaj vakcina na Vlekaci";
return pom;	
}