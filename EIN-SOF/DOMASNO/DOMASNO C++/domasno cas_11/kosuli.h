//definiranje na klasata kosuli.h
#ifndef KOSULI_H
#define KOSULI_H
#include "date1.h"
#include "artikl.h"
class Kosuli:public Artikl{ 


public:
	Kosuli();
	void postaviKosuli(char *,char *, double,Date,unsigned);
    bool presmetajNabavka();
    void prikaziPodatoci();     
    ~Kosuli();

};
#endif