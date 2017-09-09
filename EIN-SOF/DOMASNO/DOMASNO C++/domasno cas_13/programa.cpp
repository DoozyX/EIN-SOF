// programa.cpp
// Prikazhuvanje kompozicija: objekt so chlenki objekti.
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
#include "zivotno.h"
#include "cicaci.h"
#include "ptici.h"
#include "vlekaci.h"
#include <vector>
 
using std::vector;
void meni();

int main()
{	
    vector< Zivotno * > ptici( 3 );  
	vector< Zivotno * > cicaci( 3 );  
	vector< Zivotno * > vlekaci( 3 ); 
	Cicaci c;
	Ptici p;
	Vlekaci v;
	
 
	int izbor,i=0,k=0,l=0,j;
	char ime[25],izbor1;
	char pol,grupa;
	int d1,m1,g1,d2,m2,g2,d3,m3,g3,d4,m4,g4;
	Date datum;
	cout<<"Vnesi denesna data: ";
	cin>>d4;cin>>m4;cin>>g4;	
	Date DenesData(3,7,2007);
	meni();
	cin>>izbor;
   while(izbor!=6)
   {
	   switch(izbor){
	   case 1:cout<<"Vnesi c za cicac,p za ptica, v za vlekac:\n";
		   cin>>izbor1;
		   if(izbor1=='c')
		   {
		   cout<<"Vnesi ime,pol(m/z)\n";
		   cout<<"datum na raganje, datum na donesuvanje i datum na vakciniranje\n";
					   cin>>ime;cin>>pol;cin>>d1;cin>>m1;cin>>g1;cin>>d2;cin>>m2;cin>>g2;cin>>d3;cin>>m3;cin>>g3;
					   c.setZivotno(ime,pol,d1,m1,g1,d2,m2,g2,d3,m3,g3);
					   cicaci[i]=&c;
					   i++;
		   }
		   if(izbor1=='p')
		   {
		   cout<<"Vnesi ime,pol(m/z)\n";
		   cout<<"datum na raganje, datum na donesuvanje i datum na vakciniranje\n";
					   cin>>ime;cin>>pol;cin>>d1;cin>>m1;cin>>g1;cin>>d2;cin>>m2;cin>>g2;cin>>d3;cin>>m3;cin>>g3;
					    p.setZivotno(ime,pol,d1,m1,g1,d2,m2,g2,d3,m3,g3);
					   ptici[k]=&p;
					   k++;
		   }
		   if(izbor1=='v')
		   {
		   cout<<"Vnesi ime,pol(m/z)\n";
		   cout<<"datum na raganje, datum na donesuvanje i datum na vakciniranje\n";
					   cin>>ime;cin>>pol;cin>>d1;cin>>m1;cin>>g1;cin>>d2;cin>>m2;cin>>g2;cin>>d3;cin>>m3;cin>>g3;
					   v.setZivotno(ime,pol,d1,m1,g1,d2,m2,g2,d3,m3,g3);
					   vlekaci[l]=&v;
					   l++;
		   }break;
       case 2:
		        
			    cout<<"Ima vkupno vneseno "<<i<<" cicaci\n";
				cout<<"Ima vkupno vneseno "<<k<<" ptici\n";
				cout<<"Ima vkupno vneseno "<<l<<" vlekaci\n";break;
	   case 3:  cout<<"Vnesi od koja grupa(c-cicac,v-vlekac,p-ptica)\n";
				cin>>grupa;
				cout<<"Zivotni od ovaa grupa se:\n";
				if(grupa=='c')
				{	
				for(j=0;j<i;j++)
				cicaci[j]->Prikazi_Podatoci();
				}
				if(grupa=='p')
				{	
				for(j=0;j<k;j++)
				ptici[j]->Prikazi_Podatoci();
				}
				if(grupa=='v')
				{	
				for(j=0;j<l;j++)
				vlekaci[j]->Prikazi_Podatoci();
				}break;
	   case 4:  cout<<"Listata se sostoi od ovie zivotni:\n";
				for(j=0;j<i;j++)
				cicaci[j]->Prikazi_Podatoci();
				for(j=0;j<k;j++)
				ptici[j]->Prikazi_Podatoci();
				for(j=0;j<l;j++)
				vlekaci[j]->Prikazi_Podatoci();
				break;

	   case 5: cout<<"Zivotni koi treba da se vakciniraat vo rok od edna nedela od cicacite se:\n";  
		   for(j=0;j<i;j++){
				
				   if ((cicaci[j]->Presmetaj_Vakcina().getyear())==DenesData.getyear())
				   {
		        if((cicaci[j]->Presmetaj_Vakcina().getmonth()-1)==DenesData.getmonth())
                if(((cicaci[j]->Presmetaj_Vakcina().getday()+30)-DenesData.getday())<=7)
				cicaci[j]->Prikazi_Podatoci();
				if((cicaci[j]->Presmetaj_Vakcina().getmonth())==DenesData.getmonth())
                if((cicaci[j]->Presmetaj_Vakcina().getday()-DenesData.getday())<=7)
				cicaci[j]->Prikazi_Podatoci();
				   }
					}
		   cout<<"Zivotni koi treba da se vakciniraat vo rok od edna nedela od pticite se:\n";
		   for(j=0;j<k;j++){
				
				   if ((ptici[j]->Presmetaj_Vakcina().getyear())==DenesData.getyear())
				   {
		        if((ptici[j]->Presmetaj_Vakcina().getmonth()-1)==DenesData.getmonth())
                if(((ptici[j]->Presmetaj_Vakcina().getday()+30)-DenesData.getday())<=7)
				ptici[j]->Prikazi_Podatoci();
				if((ptici[j]->Presmetaj_Vakcina().getmonth())==DenesData.getmonth())
                if((ptici[j]->Presmetaj_Vakcina().getday()-DenesData.getday())<=7)
				ptici[j]->Prikazi_Podatoci();
				   }}break;
				
	   
	   }
       meni();
	   cin>>izbor;

   } 
	
   return 0;
} // kraj main

void meni()
{
	cout << '\n';
cout<<"1.Dodavanje zivotno vo zooloska gradina\n";
cout<<"2.Prikazuvanje na brojna sostojba\n";
cout<<"3.Prikazuvanje zivotni od dadena grupa\n";
cout<<"4.Prikazuvanje na celata lista\n";
cout<<"5.Prikazuvanje na site zivotni koi treba da se vakciniraat vo rok od edna nedela";
cout<<"6.Izlez\n";
}