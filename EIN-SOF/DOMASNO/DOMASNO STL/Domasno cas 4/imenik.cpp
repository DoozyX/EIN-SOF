#include <vector>
#include <cstring>
#include <string>

#include <iostream>

#include <algorithm>
using std::string;
using std::cout;
using std::cin;
using std::endl;

//definiranje na klasata Imenik 
class Imenik{

private:

	string Ime;
	
	string Prezime;
	
	string TelBroj;

public:
	
	Imenik(string ime="",string telbr="");                             //konstruktor na Imenik
	
	friend ostream &operator<<( ostream &, const Imenik & );           //friend f-ja za pecatenje na Imenik
     
	friend istream &operator>>( istream &, Imenik & );                 //friend f-ja za vnesuvanje na Imenik

    friend bool operator==(Imenik a1,Imenik a2){return a1.Ime==a2.Ime;}//preklopuvanje na operatorot ==

	friend bool operator>(Imenik a1,Imenik a2){return a1.Ime>a2.Ime;}  //preklopuvanje na operatorot >

	friend bool operator<(Imenik a1,Imenik a2){return a1.Ime<a2.Ime;}  //preklopuvanje na operatorot<
	
	Imenik operator=(Imenik a);                                        //preklopuvanje an operatorot za dodeluvanje =


	~Imenik();                                                         //denstruktor
};//kraj na klasata Imenik

//definiranje na konstruktorot
Imenik::Imenik(string ime,string telbr)
{
  Ime=ime;
  TelBroj=telbr;
}//kraj na konstruktorot

//friend f-ja za pecatenje na Imenik
ostream &operator<<( ostream &output, const Imenik &a )
{
	output<<"Ime: "<<a.Ime<<" "<<a.Prezime<<" Tel broj: "<<a.TelBroj<<endl;
}//kraj na funkcijta

 //friend f-ja za vnesuvanje na Imenik
istream &operator>>( istream &input, Imenik &a )
{

    input>>a.Ime;	
	input>>a.Prezime;
	input>>a.TelBroj;
}//kraj na funkcijata

Imenik Imenik::operator=(Imenik a)
{
    Ime=a.Ime;

    TelBroj=a.TelBroj;

    return *this;
}

//definiranje na destruktorot
Imenik:: ~Imenik(){}







int main( )

{

    // Kreira prazen vektor TelImenik

    vector <Imenik> TelImenik;

      int i;
      Imenik pom;
	  char izbor;


	cout<<"Vnesi dali sakas da vnesuvas broevi vo imenikot (Y/N) \n";
	
	cin>>izbor;
    //vnesi go Vektorot
	while (izbor=='Y')
	{
		cout<<"Vnesi Ime, Prezime i telefonski broj\n";
		
		cin>>pom;
        TelImenik.push_back(pom);
		

		cout<<"Vnesi dali sakas da vnesuvas broevi vo imenikot (Y/N) \n";
	
	    cin>>izbor;
	}
    //pecatenje na vektorot pred sortiranje
	for (i = 0; i < TelImenik.size(); i++) {

        cout << TelImenik[i];

    }

    cout << endl;
     //sortiranje an vektorot
	sort(TelImenik.begin(),TelImenik.end());

    // Otpecati go vektorot sortiran

    for (i = 0; i < TelImenik.size(); i++) {

        cout << TelImenik[i];

    }

    cout << endl;

 

   
    return 0;

}
