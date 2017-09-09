//programa cetiriagolnik.h
//klasa Cetiriagolnik
#ifndef CETIRI_H
#define CETIRI_H

class Cetiriagolnik{
public:
	Cetiriagolnik(int,int,int,int,int,int,int,int);
	int presmetajPlostina(){return 1;}
	int presmetajPerimetar(){return 1;}
	void print();
	~Cetiriagolnik(){};
	int getx1(){return x1;}
	int gety1(){return y1;}
	int getx2(){return x2;}
	int gety2(){return y2;}
	int getx3(){return x3;}
	int gety3(){return y3;}
	int getx4(){return x4;}
	int gety4(){return y4;}



private:
	int x1,y1;
	int x2,y2;
	int x3,y3;
	int x4,y4;
};

#endif