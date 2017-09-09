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
//pocetok na f-jata za sobiranje
Dropka Dropka::sobiranje(Dropka prva,Dropka vtora)
	{	int nzs;
		Dropka pom;//pomosna dropka
			nzs=prva.imenitel*vtora.imenitel;
			pom.broitel=(nzs/prva.imenitel)*prva.broitel+(nzs/vtora.imenitel)*vtora.broitel;
			pom.imenitel=nzs;
			return pom;//ja vrakame rezultantnata dropka
	}  //kraj na f-jata za sobiranje
//pocetok na f-jata za odzemanje
Dropka Dropka::odzemanje(Dropka prva,Dropka vtora)
	{	int nzs;
		Dropka pom; //pomosna dropka
			nzs=prva.imenitel*vtora.imenitel;
			pom.broitel=(nzs/prva.imenitel)*prva.broitel-(nzs/vtora.imenitel)*vtora.broitel;
			pom.imenitel=nzs;
			if(pom.broitel==0)//ako se dobie nula za broitelot
			pom.imenitel=0;//go stavame i imenitelot da e 0
            return pom;
			
	}//kraj na f-jata za odzemanje
//pocetok na f-jata za nozenje
Dropka Dropka::mnozenje(Dropka prva,Dropka vtora)
	{	
		Dropka pom;//pomosna dropka
			pom.broitel=prva.broitel*vtora.broitel;
			pom.imenitel=prva.imenitel*vtora.imenitel;
			return pom;
	}//kraj na f-jata za mnozenje
//pocetok na f-jata za delenje
Dropka Dropka::delenje(Dropka prva,Dropka vtora)
	{	
		Dropka pom;//pomosna dropka
			pom.broitel=prva.broitel*vtora.imenitel;
			pom.imenitel=prva.imenitel*vtora.broitel;
			return pom;
	} //kraj na f-jata delenje

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
}
