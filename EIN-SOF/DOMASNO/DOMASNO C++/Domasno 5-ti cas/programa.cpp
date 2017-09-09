// programa.cpp
// Prikazhuvanje kompozicija: objekt so chlenki objekti.
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
#include "zivotno.h"

int main()
{	
Zivotno Niza[30];
	int izbor,i=0,vlez,j;
	char ime[20];
	char tip,pol,grupa;
	int d1,m1,g1,d2,m2,g2,d3,m3,g3,d4,m4,g4;
	Date datum;
	cout<<"Vnesi denesna data: ";
	cin>>d4;cin>>m4;cin>>g4;
	Date DenesData(d4,m4,g4);
cout << '\n';
cout<<"1.Dodavanje zivotno vo zooloska gradina\n";
cout<<"2.Prikazuvanje na sostojba\n";
cout<<"3.Prikazuvanje zivotni od dadena grupa\n";
cout<<"4.Prikazuvanje na celata lista\n";
cout<<"5.Prikazuvanje na site zivotni koi treba da se vakciniraat vo rok od edna nedela";
cout<<"6.Izlez\n";
	cin>>izbor;
   while(izbor!=6)
   {
	   switch(izbor){
	   case 1:cout<<"Vnesi ime, tip(c-cicac,v-vlekac,p-ptica),pol(m/z)\n";
		   cout<<"datum na raganje, datum na donesuvanje i datum na vakciniranje\n";
					   cin>>ime;cin>>tip;cin>>pol;cin>>d1;cin>>m1;cin>>g1;cin>>d2;cin>>m2;cin>>g2;cin>>d3;cin>>m3;cin>>g3;Niza[i].setZivotno(ime,tip,pol,d1,m1,g1,d2,m2,g2,d3,m3,g3);
					   i++;break;
       case 2:cout<<"Vnesi koe zivotno sakas da go vidis(0-"<<i-1<<")\n";
				cin>>vlez;	  
				cout<<"Zivotnoto e so slednite osobini:\n";
				Niza[vlez].print();Niza[vlez].PresmetajVakcina();Niza[vlez].Printvakcina();break;	     
	   case 3:  cout<<"Vnesi od koja grupa(c-cicac,v-vlekac,p-ptica)\n";
				cin>>grupa;
				cout<<"Zivotni od ovaa grupa se:\n";
				for(j=0;j<i;j++)
				{if(Niza[j].gettip()==grupa)
				Niza[j].print();}break;
	   case 4:  cout<<"Listata se sostoi od ovie zivotni:\n";
				for(j=0;j<i;j++)
				Niza[j].print();break; 
	   
	   case 5: cout<<"Zivotni koi treba da se vakciniraat vo rok od edna nedela se:\n";  
		   for(j=0;j<i;j++){
					Niza[j].PresmetajVakcina();
				   if ((Niza[j].SlednaVakcina.getyear())==DenesData.getyear())
				   {
		        if((Niza[j].SlednaVakcina.getmonth()-1)==DenesData.getmonth())
                if(((Niza[j].SlednaVakcina.getday()+30)-DenesData.getday())<=7)
				Niza[j].print();
				if((Niza[j].SlednaVakcina.getmonth())==DenesData.getmonth())
                if((Niza[j].SlednaVakcina.getday()-DenesData.getday())<=7)
				Niza[j].print();
				   }}
				break;
	   
	   }
cout<<"1.Dodavanje zivotno vo zooloska gradina\n";
cout<<"2.Prikazuvanje na sostojba\n";
cout<<"3.Prikazuvanje zivotni od dadena grupa\n";
cout<<"4.Prikazuvanje na celata lista\n";
cout<<"5.Prikazuvanje na site zivotni koi treba da se vakciniraat vo rok od edna nedela";
cout<<"6.Izlez\n";
	   cin>>izbor;

   }
	
   return 0;
} // kraj main
