#include <iostream>

using std::cout;
using std::cin;
using std::endl;
#include "Dropka.h"
 // osnoven konstruktor na Dropka
Dropka::Dropka() {  broitel= imenitel =1; }
Dropka::Dropka( int br, int im)
{
   setDropka(br,im);
} // kraj na konstruktorot na Dropka
//pocetok na f-jata za setiranje
void Dropka::setDropka(int bro,int ime)
{	int br1,im1;
	br1=bro;im1=ime;
	while(br1==0)//ako broitelot e 0 vnesi ispraven
	{	cout<<"Vnesovte pogresen broitel\n";
		cout<<"Vnesi povtorno broitel";
		cin>>br1;
	}
	while(im1==0) //ako imenitelot e 0

	{	cout<<"Vnesovte pogresen imenitel\n";
		cout<<"Vnesi povtorno imenitel";
		cin>>im1;
	}
	broitel=br1;
	imenitel=im1;
} //kraj na f-jata za setiranje
//pocetok na  operatorskata f-jata za sobiranje na dve dropki
Dropka Dropka::operator+(Dropka prva)
	{	int nzs;
		Dropka pom;//pomosna dropka
			nzs=prva.imenitel*imenitel;
			pom.broitel=(nzs/prva.imenitel)*prva.broitel+(nzs/imenitel)*broitel;
			pom.imenitel=nzs;
			return pom;//ja vrakame rezultantnata dropka
	}  //kraj na operatorksta f-jata za sobiranje na dve dropki
//pocetok na operatorskata f-jata za odzemanje na dve dropki
Dropka Dropka::operator-(Dropka vtora)
	{	int nzs;
		Dropka pom; //pomosna dropka
			nzs=imenitel*vtora.imenitel;
			pom.broitel=(nzs/imenitel)*broitel-(nzs/vtora.imenitel)*vtora.broitel;
			pom.imenitel=nzs;
			if(pom.broitel==0)//ako se dobie nula za broitelot
			pom.imenitel=0;//go stavame i imenitelot da e 0
            return pom;
			
	}//kraj na operatorskata f-jata za odzemanje na dve dropki
//pocetok na operatorskata f-jata za mnozenje na dve dropki
Dropka Dropka::operator*(Dropka prva)
	{	
		Dropka pom;//pomosna dropka
			pom.broitel=prva.broitel*broitel;
			pom.imenitel=prva.imenitel*imenitel;
			return pom;
	}//kraj na operatorskata f-jata za mnozenje na dve dropki
//pocetok na operatorskata f-jata za delenje na dve dropki
Dropka Dropka::operator/(Dropka vtora)
	{	
		Dropka pom;//pomosna dropka
			pom.broitel=broitel*vtora.imenitel;
			pom.imenitel=imenitel*vtora.broitel;
			return pom;
	} //kraj na operatorskata f-jata delenje na dve dropki

// Pechati vo format broitel/imenitel
void Dropka::pecatenje()
   { cout << broitel << "/" << imenitel;}
//pecatenje vo realen broj
void Dropka::pecatenjeReal()
   {    if(broitel!=0)
        cout <<" ili vo realen broj e: "<<(double)broitel/imenitel;
        else
        cout<<" ili vo realen broj e: "<<0.00;
   }
//pocetok za skratuvanje na dropkata
void Dropka::skrati(Dropka &dro)
{	int i,pom;
	if(dro.imenitel<=dro.broitel)//naogame koj e pomal broitelot ili imenitelot
	pom=dro.imenitel;
	else
	pom=dro.broitel;
	for(i=2;i<=pom;i++)//se dvizime od 2 do pomalata vrednost zacuvana vo pom
	{
		while(!(dro.broitel%i)&&!(dro.imenitel%i))//se dodeka se delivi i imenitelot i broitelot
		{
		dro.broitel/=i; dro.imenitel/=i;}//celobrojno gi delime broitelot i imenitelot so toj broj
	}
}//kraj na f-jata za skratuvanje na dropka
//pocetok na operatorskata f-ja za sobiranje na dropka so cel broj
Dropka Dropka::operator+(int broj)
{

		Dropka pom;//pomosna dropka
			pom.imenitel=imenitel;
			pom.broitel=broitel+pom.imenitel*broj;
		
			return pom;//ja vrakame rezultantnata dropka
	}  //kraj na operatorskata f-jata za sobiranje na dropka so cel broj
//pocetok na operatorskata f-ja za odzemanje na dropka so cel broj
Dropka Dropka::operator-(int broj)
{

		Dropka pom;//pomosna dropka
				pom.imenitel=imenitel;
			    pom.broitel=broitel-pom.imenitel*broj;
		
			return pom;//ja vrakame rezultantnata dropka
	}  //kraj na operatorskata f-jata za odzemanje na dropka so cel broj
//pocetok na operatorskata f-ja za mnozenje na dropka so cel broj
Dropka Dropka::operator*(int broj)
{

		Dropka pom;//pomosna dropka
			pom.imenitel=imenitel;
			pom.broitel=broitel*broj;
		
			return pom;//ja vrakame rezultantnata dropka
	}   //kraj na operatorskata f-jata za mnozenje na dropka so cel broj
//pocetok na operatorskata f-ja za delenje na dropka so cel broj
Dropka Dropka::operator/(int broj)
{

		Dropka pom;//pomosna dropka
			pom.imenitel=broj*imenitel;
			pom.broitel=broitel;
		
			return pom;//ja vrakame rezultantnata dropka
	}  //kraj na operatorskata f-jata za delenje na dropka so cel broj