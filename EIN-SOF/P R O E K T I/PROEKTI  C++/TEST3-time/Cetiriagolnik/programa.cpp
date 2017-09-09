//programa program.cpp
#include <iostream>
 
using std::cin;
using std::cout;
using std::endl;

#include "pravoagolnik.h"
#include "kvadrat.h"
#include "paralelogram.h"
#include "trapez.h"
int main()
{
	Pravoagolnik A(1,1,3,3,3,4,1,2);
	cout<<"PRAVOAGOLNIK"<<endl;
	A.print();
	cout<<"Plostinata na pravoagolnikot A e: "<< A.presmetajPlostina()<<endl;
	cout<<"Perimetarot na pravoagolnikot A e:"<< A.presmetajPerimetar()<<endl;
	
	Kvadrat B(1,1,3,1,3,3,1,3);
	cout<<"KVADRAT"<<endl;
	B.print();
	cout<<"Plostinata na kvadratot B e: "<< B.presmetajPlostina()<<endl;
	cout<<"Perimetarot na kvadratot B e:"<< B.presmetajPerimetar()<<endl;
	
	Paralelogram C(1,1,3,1,6,5,4,5);
	cout<<"PARALELOGRAM"<<endl;
	C.print();
	cout<<"Plostinata na paralelogramot C e:"<< C.presmetajPlostina()<<endl;
	cout<<"Perimetarot na paralelogramot C e: "<< C.presmetajPerimetar()<<endl;
	
	Trapez D(1,1,9,1,6,5,4,5);
	cout<<"TRAPEZ"<<endl;
	D.print();
	cout<<"Plostinata na trapezot D e:"<< D.presmetajPlostina()<<endl;
	cout<<"Perimetarot na trapezot D e: "<< D.presmetajPerimetar()<<endl;
	return 0;
}