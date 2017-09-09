
#ifndef PRAV_H
#define PRAV_H

#include <iostream>

using std::cout;

using std::endl;

using std::ostream;

using std::istream;


//definirame klasa Pravoagolnik

class Pravoagolnik{

private:

	double sirina;

	double dolzina;
public:

	Pravoagolnik(){}

    friend ostream &operator<<( ostream &, const Pravoagolnik & );                       //friend f-ja za pecatenje na Pravoagolnik
     
	friend istream &operator>>( istream &, Pravoagolnik & );                             //friend f-ja za vnesuvanje na Pravoagolnik

    double plostina(){return sirina*dolzina;}
	
	friend bool operator==(Pravoagolnik a1,Pravoagolnik a2){return a1.plostina()==a2.plostina();}//preklopuvanje na operatorot ==

	friend bool operator>(Pravoagolnik a1,Pravoagolnik a2){return a1.plostina()>a2.plostina();}  //preklopuvanje na operatorot >

	friend bool operator<(Pravoagolnik a1,Pravoagolnik a2){return a1.plostina()<a2.plostina();}  //preklopuvanje na operatorot<
	
	Pravoagolnik operator=(Pravoagolnik a);                                                    //preklopuvanje an operatorot za dodeluvanje =
};//kraj na klasata Pravoagolnik

//f-ja za pecatenje na Pravoagolnik
ostream &operator<<( ostream &output, const Pravoagolnik &a )
{
	output<<"Pravoagolnik:\n"<<"Sirina: "<<a.sirina<<", Dolzina: "<<a.dolzina<<endl;

	return output;

}//kraj an f-jata

//f-ja za vnesuvanje na Pravoagolnik
istream &operator>>( istream &input, Pravoagolnik &a )
{	

	cout<<"Vnesi sirina: ";
	input>>a.sirina;
	cout<<"Vnesi dolzina: ";
	input>>a.dolzina;

	return input;

}//kraj na f-jata

//preklopuvanje an operatorot za dodeluvanje

Pravoagolnik Pravoagolnik::operator=(Pravoagolnik a)
{
	sirina=a.sirina;

	dolzina=a.dolzina;

	return *this;
}//kraj na f-jata

#endif
