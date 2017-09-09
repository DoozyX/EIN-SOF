
#ifndef KVADRAT_H
#define KVADRAT_H

#include <iostream>

using std::cout;

using std::endl;

using std::ostream;

using std::istream;


//definirame klasa Kvadrat

class Kvadrat{

private:

	double strana;

public:

	Kvadrat(){}

    friend ostream &operator<<( ostream &, const Kvadrat & );                       //friend f-ja za pecatenje na Kvadrat
     
	friend istream &operator>>( istream &, Kvadrat & );                             //friend f-ja za vnesuvanje na Kvadrat

    double plostina(){return strana*strana;}
	
	friend bool operator==(Kvadrat a1,Kvadrat a2){return a1.plostina()==a2.plostina();}//preklopuvanje na operatorot ==

	friend bool operator>(Kvadrat a1,Kvadrat a2){return a1.plostina()>a2.plostina();}  //preklopuvanje na operatorot >

	friend bool operator<(Kvadrat a1,Kvadrat a2){return a1.plostina()<a2.plostina();}  //preklopuvanje na operatorot<
	
	Kvadrat operator=(Kvadrat a);                                                    //preklopuvanje an operatorot za dodeluvanje =
};//kraj na klasata Kvadrat

//f-ja za pecatenje na Kvadrat
ostream &operator<<( ostream &output, const Kvadrat &a )
{
	output<<"Kvadrat:\n"<<"strana: "<<a.strana<<endl;

	return output;

}//kraj an f-jata

//f-ja za vnesuvanje na Kvadrat
istream &operator>>( istream &input, Kvadrat &a )
{

	cout<<"Vnesi strana: ";
	input>>a.strana;

	return input;

}//kraj na f-jata

//preklopuvanje an operatorot za dodeluvanje

Kvadrat Kvadrat::operator=(Kvadrat a)
{
	strana=a.strana;

	return *this;
}//kraj na f-jata

#endif
