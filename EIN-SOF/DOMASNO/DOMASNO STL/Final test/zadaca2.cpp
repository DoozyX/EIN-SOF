#include <iostream>

 

using std::cout;

using std::cin;

using std::ios;

using std::cerr;

using std::endl;

 

using std::left;

using std::right;

using std::fixed;

using std::showpoint;

 

#include <fstream>

 

using std::ifstream;

using std::ofstream;

 

#include <iomanip>

 

using std::setw;

using std::setprecision;

 

#include <cstdlib> 

using std::ostream;

using std::istream;

#include <numeric>   

#include <algorithm>  

#include <vector>

using std::vector; 


#include <exception>

 

using std::exception;


// objekt DatotekaExc

class DatotekaExc : public exception {

 

public:

 

   // konstructorot ja opredeluva default error message

   DatotekaExc::DatotekaExc()

      : exception( "datotekata ne postoi" ) {}

 

};  // end class DatotekaExc


class Inventar{

private:

	int id;

	int kolicina;

	double cena;

	public:

	
		int getKolicina(){return kolicina;}

		double getCena(){return cena;}
		
		Inventar(){}
	
	void setInventar(int x, int y, double z){id=x; kolicina=y; cena=z;}

    friend ostream &operator<<( ostream &, const Inventar & );                       //friend f-ja za pecatenje na Inventar
     
	friend istream &operator>>( istream &, Inventar & );                             //friend f-ja za vnesuvanje na Inventar

    friend bool operator==(Inventar a1,Inventar a2){return a1.kolicina==a2.kolicina;}//preklopuvanje na operatorot ==

	friend bool operator>(Inventar a1,Inventar a2){return a1.kolicina>a2.kolicina;}  //preklopuvanje na operatorot >

	friend bool operator<(Inventar a1,Inventar a2){return a1.kolicina<a2.kolicina;}  //preklopuvanje na operatorot<
	
	friend bool operator!=(Inventar a1,Inventar a2){return a1.kolicina!=a2.kolicina;}


	Inventar operator=(Inventar a);                                                    //preklopuvanje an operatorot za dodeluvanje =
};//kraj na klasata Inventar

//f-ja za pecatenje na Inventar
ostream &operator<<( ostream &output, const Inventar &a )
{
	output<<"Inventar so id "<<a.id<<", kolicina "<<a.kolicina<<" i cena "<<a.cena<<" denari."<<endl;

	return output;

}//kraj an f-jata

//f-ja za vnesuvanje na Inventar
istream &operator>>( istream &input, Inventar &a )
{
	input>>a.id;

	input>>a.kolicina;

	input>>a.cena;

	return input;

}//kraj na f-jata

//preklopuvanje na operatorot za dodeluvanje

Inventar Inventar::operator=(Inventar a)
{
	id=a.id;

	kolicina=a.kolicina;

	cena=a.cena;

	return *this;
}//kraj na f-jata

//prototip na funkcijata meni
void meni();

//pocetok na programata

bool pomal( Inventar ); 

int main()
{
	vector<Inventar> Inventari;

	


int id;

int kolicina;

double cena;

double suma=0; 

 Inventar temp;

 std::ostream_iterator< Inventar > output( cout );


	// konstruktorot na ifstream ja otvora istata datoteka za citanje

   ifstream inClientFile( "inventar.txt", ios::in );

  try {

   if ( !inClientFile ) 

      throw DatotekaExc(); // prekin na funkcijata

   
      } // kraj na try
   
   // exception handler za isklucok

      catch ( DatotekaExc &DatotekaException ) {

         cout << "Nastanal isklucok: " <<

            DatotekaException.what() << endl;
 

      } // kraj na catch

	  while ( inClientFile >> id >> kolicina >> cena ){


		  	temp.setInventar(id,kolicina,cena);

			Inventari.push_back(temp);
	  }

	  std::copy( Inventari.begin(), Inventari.end(), output );

	  

	  std::vector< Inventar >::iterator constIterator;

 

   for ( constIterator = Inventari.begin();

         constIterator != Inventari.end();

         constIterator++ )
		 {
			 suma+=(*constIterator).getKolicina()*(*constIterator).getCena();}

      cout <<"Vkupnata sumata e: "<< suma<<" denari."<<endl;

	  cout<<endl;

	  cout<<"Artikli koi imaat kolicina pomala od 10 se:"<<endl;

	  cout<<endl;


	  std::remove_copy_if(Inventari.begin(), Inventari.end(),output, pomal );

	 
	  return 0;
}


bool pomal( Inventar x )

{

   return x.getKolicina() > 10;

 

} // kraj na pomal
		 
