#include <iostream>
#include <stdio.h>
using std::cout;
using std::cin;
using std::endl;
#include "Stedac.h"
#include <cstring>
void meni();
int main()
{
	
    stedac stedaci[10];
	char ime[25];
	char prezime[25];
	char broj[15];
	char adresa[50];
	char enter;
	double bilans, kredit;
	int i=1,redenBroj,izbor;
	meni();
	cin>>izbor;
	while (izbor!=4)
	{
	switch (izbor){
	case 1:
		cout<<"Vnesi ime na stedac"<<endl;
		cin>>ime;
		cout<<"Vnesi prezime na stedac"<<endl;
		cin>>prezime;
		getchar(enter);
		cout<<"Vnesi adresa na sedac"<<endl;
        gets(adresa);
		cout<<"Vnesi telefonski broj na stedac"<<endl;
		gets(broj);
		cout<<"Vnesi bilans na stedac"<<endl;
		cin>>bilans;
        cout<<"Vnesi kredit na stedac"<<endl;
		cin>>kredit;
	    stedaci[i].putStedac(ime,prezime,adresa,broj,bilans,kredit);
	    i++;
	    break;
	case 2:
		cout<<"Vnesi reden broj na smetka na stedacot 1 ..."<<i-1<<endl;
		cin>>redenBroj;
		stedaci[redenBroj].printStedac();
		break;
	case 3:
		cout<<" Vkupniot broj na stedaci e:  "<<stedaci[0].getBrStedac()<<endl;
		break;
	default: 
		cout<<"Vnesovte pogresen broj obidete se povtorno"<<endl;
		break;
	}
	meni();
	cin>>izbor;
	}

return 0;
}

void meni()
{
	cout<<"Vnesi 1 za vnesuvnje na nov stedac"<<endl;
	cout<<"Vnesi 2 za pecatenje na stedac"<<endl;
	cout<<"Vnesi 3 za da vidis kolku stedaci ima momentalno"<<endl;
	cout<<"Vnesi 4 za kraj"<<endl;
}