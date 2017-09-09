//programa oblik.h
//klasa Oblik
#ifndef OBLIK_H
#define OBLIK_H
using std::cout;
class Oblik {
public:
	Oblik();
	double presmetajPlostina(){cout<<"Sega sme vo presmetaj plostina na oblik\n"; return 0;}
    static int getBroj(){return broj;}
	
	~Oblik(){}

private:
	static int broj;
};
#endif

