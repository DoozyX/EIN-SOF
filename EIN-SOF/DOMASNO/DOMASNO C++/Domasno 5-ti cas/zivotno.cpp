// zivotno.cpp
// Definicii na funkciite chlenki za klasata 
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
#include <cstring>
#include "zivotno.h"
#include "date1.h"
Zivotno::Zivotno(){} 
void Zivotno::setZivotno( char *fname, char t,char p,
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
   // kopiraj fname vo Name i obezbedi mesto
   int length = strlen( fname );
   length = ( length < 25 ? length : 24 );
   strncpy(Name, fname, length );
   Name[ length ] = '\0';
	tip=t;pol=p;
   

   
} // kraj na konstruktor 

void Zivotno::print() const
{
   cout<<"Ime:              "<< Name <<endl;
  
   cout<<"Tip:              "<<tip<<endl;
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
  
} // kraj na destruktorot od Employee
void Zivotno::PresmetajVakcina()
{	
	if(tip=='c')
	{
	SlednaVakcina.setday(VakcinaData.getday());SlednaVakcina.setmonth(VakcinaData.getmonth());SlednaVakcina.setyear(VakcinaData.getyear()+1);
	}
	if(tip=='v')
	{	
		SlednaVakcina.setday(VakcinaData.getday());
		if((VakcinaData.getmonth()+8)%12)
		SlednaVakcina.setmonth((VakcinaData.getmonth()+8)%12);
		else
			SlednaVakcina.setmonth(12);
		if((VakcinaData.getmonth()+7)/12>0)
		SlednaVakcina.setyear(VakcinaData.getyear()+1);
		else
			SlednaVakcina.setyear(VakcinaData.getyear());

	}
	if(tip=='p')
	{
		SlednaVakcina.setday(VakcinaData.getday());
		if(VakcinaData.getmonth()<6)
		{SlednaVakcina.setmonth(VakcinaData.getmonth()+6);
		SlednaVakcina.setyear(VakcinaData.getyear());}
		else
		if(VakcinaData.getmonth()>6)	
		{
		SlednaVakcina.setmonth(((VakcinaData.getmonth()+6)%12));SlednaVakcina.setyear(VakcinaData.getyear()+1);
		}	
		else
		{	SlednaVakcina.setmonth(12);SlednaVakcina.setyear(VakcinaData.getyear());}
	}
		
}
char Zivotno::gettip(){return tip;}
Date Zivotno::getVakcina()
{ return SlednaVakcina;}
void Zivotno::Printvakcina()
{
	cout<<"Sledna vakcina e na data: ";
	SlednaVakcina.print();
    cout<<endl;
}