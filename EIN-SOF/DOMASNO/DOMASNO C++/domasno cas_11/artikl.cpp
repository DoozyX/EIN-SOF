//program artikl.cpp
//funkcii na klasata artikl.h
#include <iostream>
 
using std::cin;
using std::cout;
using std::endl;
#include "artikl.h"
#include "date1.h"
Artikl::Artikl(){
ime=new char[2];
golemina=new char[2];
cena=0;
}// konstruktor 
void Artikl::postaviArtikl(char *i,char *g, double c,Date d,unsigned br ) //konstruktor
{
   ime = new char[strlen(i)+1 ];
   strcpy( ime, i);
   
   golemina = new char[strlen(g)+1 ];
   strcpy( golemina, g);
   cena=c;
   data=d;
   brojArtikli=br;
}
void Artikl::prikaziPodatoci()
{
   cout << "Ime " << ime << endl;
   cout << "Golemina " << golemina << endl;
   cout << "Cena " << cena << endl;
   cout << "Data "; data.print();cout<<endl;
   cout << "Broj Na Artikli "<<brojArtikli<<endl;
}
void Artikl::presmetajNabavka(){}

Artikl::~Artikl(){
	delete [] ime;
    delete [] golemina;
}



