//programa programa.cpp
#include <iostream>
 
using std::cin;
using std::cout;
using std::endl;
#include "oblik.h"
#include "dvoDimenzionalni.h"
#include "troDimenzionalni.h"
#include "pravoagolnik.h"
#include "kvadrat.h"
#include "krug.h"
#include "kvadar.h"
#include "kocka.h"
#include "piramida.h"

int main()
{
	Oblik *Ptr;
	Pravoagolnik A(2,3);
	Ptr=&A;
	cout<<"PRAVOAGOLNIK"<<endl;
	Ptr->print();
	cout<<"Plostinata na pravoagolnikot A e: "<< Ptr->presmetajPlostina()<<endl;
	cout<<"Perimetarot na pravoagolnikot A e:"<< Ptr->presmetajPerimetar()<<endl;
	
	Kvadrat B(5);
    Ptr=&B;
	cout<<"KVADRAT"<<endl;
	Ptr->print();
	cout<<"Plostinata na kvadratot B e: "<< Ptr->presmetajPlostina()<<endl;
	cout<<"Perimetarot na kvadratot B e:"<< Ptr->presmetajPerimetar()<<endl;
	
	Krug E(2);
    Ptr=&E;
	cout<<"KRUG"<<endl;
	Ptr->print();
	cout<<"Plostinata na krugot E e: "<< Ptr->presmetajPlostina()<<endl;
	cout<<"Perimetarot na krugot E e:"<< Ptr->presmetajPerimetar()<<endl;
	
	Kvadar C(2,2,10);
    Ptr=&C;
	cout<<"KVADAR"<<endl;
	Ptr->print();
	cout<<"Plostinata na kvadarot C e:"<< Ptr->presmetajPlostina()<<endl;
	cout<<"Volumenot na kvadarot C e: "<< Ptr->presmetajVolumen()<<endl;
	
	Kocka D(3);
	Ptr=&D;
	cout<<"KOCKA"<<endl;
	Ptr->print();
	cout<<"Plostinata na kockata D e:"<< Ptr->presmetajPlostina()<<endl;
	cout<<"Volumenot na kockata D e: "<< Ptr->presmetajVolumen()<<endl;

	Piramida F(3,3);
	Ptr=&F;
	cout<<"PIRAMIDA"<<endl;
	Ptr->print();
	cout<<"Plostinata na piramidata F e:"<< Ptr->presmetajPlostina()<<endl;
	cout<<"Volumenot na piramidata F e: "<< Ptr->presmetajVolumen()<<endl;

	return 0;
}