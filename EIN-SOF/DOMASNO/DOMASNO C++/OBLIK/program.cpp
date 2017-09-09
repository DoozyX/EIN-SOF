//programa program.cpp
#include <iostream>
 
using std::cin;
using std::cout;
using std::endl;

#include "pravoagolnik.h"
#include "triagolnik.h"
#include "kvadar.h"
#include "kocka.h"

int main()
{
	Pravoagolnik A(2,3);
	cout<<"PRAVOAGOLNIK"<<endl;
	A.print();
	cout<<"Plostinata na pravoagolnikot A e: "<< A.presmetajPlostina()<<endl;
	cout<<"Perimetarot na pravoagolnikot A e:"<< A.presmetajPerimetar()<<endl;
	
	Triagolnik B(5,12);
	cout<<"TRIAGOLNIK"<<endl;
	B.print();
	cout<<"Plostinata na triagolnikot B e: "<< B.presmetajPlostina()<<endl;
	cout<<"Perimetarot na triagolnikot B e:"<< B.presmetajPerimetar()<<endl;
	
	Kvadar C(2,2,10);
	cout<<"KVADAR"<<endl;
	C.print();
	cout<<"Plostinata na kvadarot C e:"<< C.presmetajPlostina()<<endl;
	cout<<"Volumenot na kvadarot C e: "<< C.presmetajVolumen()<<endl;
	
	Kocka D(3);
	cout<<"KOCKA"<<endl;
	D.print();
	cout<<"Plostinata na kockata D e:"<< D.presmetajPlostina()<<endl;
	cout<<"Volumenot na kockata D e: "<< D.presmetajVolumen()<<endl;
	return 0;
}