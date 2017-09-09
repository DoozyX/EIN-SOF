//programa cetiriagolnik.cpp
#include <iostream>
 
#include "math.h"
 
using std::cout;
using std::cin;
using std::endl;
 
#include "point.h"


//definirame klasa Cetiriagolnik
class Cetiriagolnik {
public:
	Cetiriagolnik(int x1=0, int y1=0, int x2=0,int y2=0,int x3=0,int y3=0,int x4=0,int y4=0);
	void print_c();
	double presmetajPlostina();
	double presmetajPerimetar();
	~Cetiriagolnik(){}

protected:
	Point a;
	Point b;
	Point c;
	Point d;
};

//definiranje na funkciite vo klasata Cetiriagolnik

Cetiriagolnik::Cetiriagolnik(int x1, int y1, int x2,int y2,int x3,int y3,int x4,int y4)
{
	a.setX(x1);
    a.setY(y1);
	b.setX(x2);
	b.setY(y2);
	c.setX(x3);
	c.setY(y3);
	d.setX(x4);
	d.setY(y4);
	
}

void Cetiriagolnik::print_c()
{
	cout<<endl;
	cout<<"Koordinati na A";
	a.print();
	cout<<endl;
	cout<<"Koordinati na B";
	b.print();
    cout<<endl;
	cout<<"Koordinati na C";
	c.print();
    cout<<endl;
	cout<<"Koordinati na D";
	d.print();
	cout<<endl;
}

double Cetiriagolnik::presmetajPlostina()
{
	cout<<"Se naogame vo presmetajPlostina na cetiriagolnik"<<endl;
	return 0;
}

double Cetiriagolnik::presmetajPerimetar()
{
	cout<<"Se naogame vo presmetajPerimetar na cetiriagolnik"<<endl;
	return 0;
}



//definiranje na klasa Pravoagolnik
class Pravoagolnik:public Cetiriagolnik{
public:
	Pravoagolnik(int x1=0, int y1=0, int x3=0,int y3=0);
	double presmetajPlostina();
	double presmetajPerimetar();
    void print(){Cetiriagolnik::print_c();}
	~Pravoagolnik(){}
};

Pravoagolnik::Pravoagolnik(int x1, int y1,int x3,int y3)
:Cetiriagolnik(x1,y1,x3,y1,x3,y3,x1,y3)
{}

double Pravoagolnik::presmetajPlostina()
{
	int k,l;
	k=b.getX()-a.getX();
	l=c.getY()-b.getY();
	return k*l;
}

double Pravoagolnik::presmetajPerimetar()
{
    int k=b.getX()-a.getX();
	int l=c.getY()-b.getY();
	return 2*l+2*k;
}



//definiranje na klasa Kvadrat
class Kvadrat:public Pravoagolnik{
public:
    Kvadrat(int x1=0, int y1=0, int x3=0,int y3=0):Pravoagolnik(x1,y1,x3,y3){}	
	double presmetajPlostina(){return Pravoagolnik::presmetajPlostina();}
	double presmetajPerimetar(){return Pravoagolnik::presmetajPerimetar();}
    void print(){Cetiriagolnik::print_c();}
	~Kvadrat(){}
};

//definiranje na klasata Paralelogram

class Paralelogram:public Cetiriagolnik{
public:
	Paralelogram(int x1=0,int y1=0,int x2=0,int x3=0,int y3=0,int x4=0):Cetiriagolnik(x1,y1,x2,y1,x3,y3,x4,y3){}
    double presmetajPlostina();
    double presmetajPerimetar();
    void print(){Cetiriagolnik::print_c();}
    ~Paralelogram();
};

double Paralelogram::presmetajPlostina()
{
  int h=a.getY()-c.getY();
  int strana=a.getX()-b.getX();
  return h*strana;
}
 
double Paralelogram::presmetajPerimetar()
{
	int stranaA=a.getX()-b.getX();
    int h=a.getY()-c.getY();
	int del=c.getX()-b.getX();
	double stranaB=sqrt(del*del+h*h);
	return stranaB*2+stranaA*2;
}

int main()
{
	Pravoagolnik A(-1,-1,3,3);	
	cout<<"PRAVOAGOLNIK"<<endl;
	A.print();
	cout<<"Plostinata na pravoagolnikot A e: "<< A.presmetajPlostina()<<endl;
	cout<<"Perimetarot na pravoagolnikot A e:"<< A.presmetajPerimetar()<<endl;

	Kvadrat B(-1,-1,2,2);	
	cout<<"kvadrat"<<endl;
	B.print();
	cout<<"Plostinata na kvadratot B e: "<< B.presmetajPlostina()<<endl;
	cout<<"Perimetarot na kvadratot B e:"<< B.presmetajPerimetar()<<endl;

	

	return 0;
}