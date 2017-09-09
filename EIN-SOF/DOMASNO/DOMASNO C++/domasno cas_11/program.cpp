//programa program.cpp
#include <iostream>
 
using std::cin;
using std::cout;
using std::endl;

//#include "artikl.h"
#include "date1.h"
#include "pantaloni.h"
#include "kosuli.h"
void meni();
int main()
{
	Kosuli kosuli1[50];
	Pantaloni pantaloni[50];
	int br,izbor,i=1,j=1,d1,m1,g1,k;
	char izbor2,izbor3,im[25],g[5];
    double c,cena1=0,cena2=0;
	Date denes(3,4,2007);
	meni();
	cin>>izbor;
	while (izbor!=5) 
	{
		switch (izbor){
		case 1:
			cout<<"Vnesi kakov artikl ke vneses (p/k) pantaloni ili kosula"<<endl;
			cin>>izbor2;
			if (izbor2=='p')
			{
				cout<<"Vnesi ime, Golemina, Cena, Data na donesuvanje i broj na proizvod"<<endl;
					cin>>im;
					cin>>g;
					cin>>c;cin>>d1;cin>>m1;cin>>g1;
					Date Data1(d1,m1,g1);cin>>br;
					
					pantaloni[i].postaviPantaloni(im,g,c,Data1,br);
					i++;
			}
			if (izbor2=='k')
			{
				cout<<"Vnesi ime, Golemina, Cena, Data na donesuvanje i broj na proizvod"<<endl;
					cin>>im;
					cin>>g;
					cin>>c;cin>>d1;cin>>m1;cin>>g1;
					Date Data1(d1,m1,g1);cin>>br;
					
					kosuli1[j].postaviKosuli(im,g,c,Data1,br);
					j++;
			}break;
		case 2:
			cout<<"Vnesi koi artikli sakas da gi vides p/k\n";
			cin>>izbor3;
			if(izbor3=='p')
				for(int k=1;k<i;k++)
					pantaloni[k].prikaziPodatoci();

			if(izbor3=='k')
				for(int k=1;k<j;k++)
					kosuli1[k].prikaziPodatoci();
				break;
		case 3:
			cena1=0;cena2=0;
			cout<<"Gi imame slednive pantaloni:\n";
			for(k=1;k<i;k++){
					pantaloni[k].prikaziPodatoci();
					
					cena1+=pantaloni[k].getcena()*pantaloni[k].getbroj();
				
			}
			cout<<"Vkupnata cena na site pantaloni e:"<<cena1<<endl;
			cout<<"Gi imame slednive kosuli:\n";
			for(k=1;k<j;k++){
                kosuli1[k].prikaziPodatoci();
					cena2+=kosuli1[k].getcena()*kosuli1[k].getbroj();
			}
			cout<<"Vkupnata cena na site kosuli e:"<<cena2<<endl;
			break;
		case 4:
			cout<<"Proizvodi koi treba da se nabavat vo slednata nedela se:\n";
			for(k=1;k<i;k++){
					if(pantaloni[k].presmetajNabavka(denes))
						pantaloni[k].prikaziPodatoci();
			}
			for(k=1;k<j;k++){
					if(kosuli1[k].presmetajNabavka())
						kosuli1[k].prikaziPodatoci();
			} break;
		}
		meni();
		cin>>izbor;
	}
	return 0;
}

void meni()
{	cout<<endl;
	cout<<endl;
	cout<<"Vnesi 1 za dodavanje na artikl vo lista\n";
	cout<<"Vnesi 2 za prikazuvanje na artikl od dadena grupa\n";
	cout<<"Vnesi 3 za prikazuvanje na site artikli so vkupna cena\n";
	cout<<"Vnesi 4 za potrebni nabavki vo slednata nedela\n";
	cout<<"Vnesi 5 za kraj\n";
}


