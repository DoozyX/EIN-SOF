// zivotno.cpp
// Definicii na funkciite chlenki za klasata 
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include "zivotno.h"
#include "date1.h"
 #include <string>
using std::string;
Zivotno::Zivotno( char *fname,char p,
                    int bmonth, int bday, int byear,
                    int pmonth, int pday, int pyear,
					int vmonth, int vday,int vyear )
{  
Date RaganjeD( bmonth, bday, byear ); 
Date DonesuvanjeD( pmonth, pday, pyear );
Date VakcinaD(vmonth,vday,vyear);
RaganjeData=RaganjeD;
DonesuvanjeData=DonesuvanjeD;
VakcinaData=VakcinaD;	
	Ime=fname;
	pol=p;
   

   
} // kraj na konstruktor 

void Zivotno::setZivotno( char *fname,char p,
                    int bmonth, int bday, int byear,
                    int pmonth, int pday, int pyear,
					int vmonth, int vday,int vyear )
{  
Date RaganjeD( bmonth, bday, byear ); 
Date DonesuvanjeD( pmonth, pday, pyear );
Date VakcinaD(vmonth,vday,vyear);
RaganjeData=RaganjeD;
DonesuvanjeData=DonesuvanjeD;
VakcinaData=VakcinaD;	

Ime=fname;
	pol=p;
   

   
}  

 void Zivotno::Prikazi_Podatoci() const
{
   cout<<"Ime:              "<< Ime <<endl;
  
   
   cout<<"Pol:              "<<pol<<endl;
   cout<<"Rodeno na:        ";
   RaganjeData.print();
   cout<<endl;
   cout <<"Doneseno na:      ";
   DonesuvanjeData.print();
   cout<<endl;
   cout <<"Vakcinirano na:   ";
   VakcinaData.print();
   cout<<endl;
} // kraj na funkcijata print

// Destruktor: za demonstriranje na redosledot na unishtuvanje objekti
Zivotno::~Zivotno()
{ 
  
} // kraj na destruktorot od Zivotno


