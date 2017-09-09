#include <iostream>

 

using std::cout;

using std::cin;

using std::endl;

using std::ostream;

using std::istream;

#include <numeric>    // definicija na accumulate 

#include <algorithm>  

#include <vector>

using std::vector; 

#include <stdio.h>

#include <stdlib.h>

#include <string>

using std::string;


//definirame klasa Vraboten

class Vraboten{

private:

	string ime;

	string prezime;

	float bodovi;

	static int vr_bod;

public:

	Vraboten(){}
	
	static int getStatic(){return vr_bod;}

    friend ostream &operator<<( ostream &, const Vraboten & );                       //friend f-ja za pecatenje na Vraboten
     
	friend istream &operator>>( istream &, Vraboten & );                             //friend f-ja za vnesuvanje na Vraboten

    friend bool operator==(Vraboten a1,Vraboten a2){return a1.bodovi==a2.bodovi;}//preklopuvanje na operatorot ==

	friend bool operator>(Vraboten a1,Vraboten a2){return a1.bodovi>a2.bodovi;}  //preklopuvanje na operatorot >

	friend bool operator<(Vraboten a1,Vraboten a2){return a1.bodovi<a2.bodovi;}  //preklopuvanje na operatorot<
	
	friend bool operator!=(Vraboten a1,Vraboten a2){return a1.bodovi!=a2.bodovi;}

	friend float operator+(float a1,Vraboten a2){return a1+a2.bodovi; }

	Vraboten operator=(Vraboten a);                                                    //preklopuvanje an operatorot za dodeluvanje =
};//kraj na klasata Vraboten

int Vraboten::vr_bod=300;

//f-ja za pecatenje na Vraboten
ostream &operator<<( ostream &output, const Vraboten &a )
{
	output<<"Vraboten: "<<a.ime<<" "<<a.prezime<<"\nBodovi: "<<a.bodovi<<endl;

	return output;

}//kraj an f-jata

//f-ja za vnesuvanje na Vraboten
istream &operator>>( istream &input, Vraboten &a )
{
	input>>a.ime;

	input>>a.prezime;

	input>>a.bodovi;

	return input;

}//kraj na f-jata

//preklopuvanje an operatorot za dodeluvanje

Vraboten Vraboten::operator=(Vraboten a)
{
	ime=a.ime;

	prezime=a.prezime;

	bodovi=a.bodovi;

	return *this;
}//kraj na f-jata

//prototip na funkcijata meni
void meni();

//pocetok na programata

int main()
{
	vector<Vraboten> Vraboteni;
	
	Vraboten temp;

	std::ostream_iterator< Vraboten > output( cout );

	int izbor;

	meni();

	cin>>izbor;

	while (izbor!=4)
	{
		switch (izbor)
		{
		case 1:
			
			cout<<"Vnesi ime prezime i bodovi"<<endl;
			
			cin>>temp;

			Vraboteni.push_back(temp);

			break;

		case 2:

			cout<<"Mesecna plata koja treba da se isplati e"<<endl;
			
			cout<<std::accumulate( Vraboteni.begin(), Vraboteni.end(), 0 )*temp.getStatic()<<endl;

			break;

		case 3:

			cout<<"Eve ja listata na vraboteni sortirani spored bodovi"<<endl;

			std::sort(Vraboteni.begin(), Vraboteni.end());

			std::copy( Vraboteni.begin(), Vraboteni.end(), output );

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

//definiranje na funkcijata meni

void meni()
{
	cout<<"1.Za vnesuvanje na rabotnik"<<endl;
	cout<<"2.Za presmetuvanje na vkupnata suma koja treba da se isplati mesecov"<<endl;
	cout<<"3.Za prikazuvanje na listata na vraboteni sortirani spored bodovite"<<endl;
	cout<<"4.Za kraj"<<endl;
}//kraj na funkcijata
