#ifndef KRUG_H
#define KRUG_H

#include <iostream>

using std::cout;

using std::endl;

using std::ostream;

using std::istream;


//definirame klasa Krug

class Krug{

private:

	double radius;

public:

	Krug(){}

    friend ostream &operator<<( ostream &, const Krug & );                       //friend f-ja za pecatenje na Krug
     
	friend istream &operator>>( istream &, Krug & );                             //friend f-ja za vnesuvanje na Krug

    double plostina(){return radius*radius*3.14;}
	
	friend bool operator==(Krug a1,Krug a2){return a1.plostina()==a2.plostina();}//preklopuvanje na operatorot ==

	friend bool operator>(Krug a1,Krug a2){return a1.plostina()>a2.plostina();}  //preklopuvanje na operatorot >

	friend bool operator<(Krug a1,Krug a2){return a1.plostina()<a2.plostina();}  //preklopuvanje na operatorot<
	
	Krug operator=(Krug a);                                                    //preklopuvanje an operatorot za dodeluvanje =
};//kraj na klasata Krug

//f-ja za pecatenje na Krug
ostream &operator<<( ostream &output, const Krug &a )
{
	output<<"Krug:\n"<<"radius: "<<a.radius<<endl;

	return output;

}//kraj an f-jata

//f-ja za vnesuvanje na Krug
istream &operator>>( istream &input, Krug &a )
{	
	cout<<"Vnesi radius: ";
	input>>a.radius;

	return input;

}//kraj na f-jata

//preklopuvanje an operatorot za dodeluvanje

Krug Krug::operator=(Krug a)
{
	radius=a.radius;

	return *this;
}//kraj na f-jata

#endif
