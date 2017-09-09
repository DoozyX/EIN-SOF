#include <iostream>

using std::cout;
using std::cin;
using std::endl;
#include "Vektor.h"
 // osnoven konstruktor na Vektor
Vektor::Vektor() {  x=y=z=1; }
Vektor::Vektor( int a, int b,int c)
{
   x=a;y=b;z=c;
} // kraj na konstruktorot na Vektor


//pocetok na  operatorskata f-jata za sobiranje na dva vektori
Vektor Vektor::operator+(Vektor prv)
{	
		Vektor pom;//pomosen Vektor
			pom.x=x+prv.x;
			pom.y=y+prv.y;
			pom.z=z+prv.z;
			return pom;//ja vrakame rezultantniot vektor
}

Vektor operator+(Vektor ob1, int i) {
        Vektor tmp;
        tmp.x=ob1.x+i;
        tmp.y=ob1.y+i;
		tmp.z=ob1.z+i;
        return tmp;
}

Vektor operator+(int i, Vektor ob1) {
        Vektor tmp;
        tmp.x=ob1.x+i;
        tmp.y=ob1.y+i;
		tmp.z=ob1.z+i;
        return tmp;
}

//pocetok na operatorskata f-jata za odzemanje na dva vektori
Vektor Vektor::operator-(Vektor vtor)
	{Vektor pom;//pomosen Vektor
			pom.x=x-vtor.x;
			pom.y=y-vtor.y;
			pom.z=z-vtor.z;
			return pom;//go vrakame rezultantniot vektor
			
}//kraj na operatorskata f-jata za odzemanje na dva vektori

Vektor operator-(Vektor ob1, int i) {
        Vektor tmp;
        tmp.x=ob1.x-i;
        tmp.y=ob1.y-i;
		tmp.z=ob1.z-i;
        return tmp;
}
Vektor operator-(int i, Vektor ob1) {
        Vektor tmp;
        tmp.x=ob1.x-i;
        tmp.y=ob1.y-i;
		tmp.z=ob1.z-i;
        return tmp;
}
//pocetok na operatorskata f-jata za mnozenje na dve dropki
int Vektor::operator%(Vektor prv)
	{	
		 int pom;//pomosna dropka
			pom=prv.x*x+prv.y*y+prv.z*z;
			

			return pom;
	}//kraj na operatorskata f-jata za mnozenje na dve dropki
//pocetok na operatorskata f-jata za delenje na dve dropki


// Pechati 
void Vektor::pecatenje()
   { cout <<"X=: "<<x<<" Y=: "<<y<<" Z=: "<<z<<endl;}
Vektor Vektor::operator*(Vektor prv)
{
	Vektor pom;
		pom.x=y*prv.z-prv.y*z;
		pom.y=z*prv.x-x*prv.z;
		pom.z=x*prv.y-prv.x*y;
		return pom;



}