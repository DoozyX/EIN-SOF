//definiranje na klasata artikl.h


#ifndef ARTIKL_H
#define ARTIKL_H

#include "date1.h" 

class Artikl {
 public:
     Artikl(); //prazen konstruktor
	 void postaviArtikl( char *,char *, double,Date,unsigned );//za vnesuvanje na nov artikl
	void presmetajNabavka(); //za presmetuvanje na nabavka na proizvodi
    void prikaziPodatoci();//za pecatenje na podatocite
    ~Artikl();
	double getcena(){return cena;}
	int getbroj(){return brojArtikli;}
 private:
    char *ime;
	char *golemina;
    double cena;
	Date data;
 protected:
	unsigned brojArtikli;
};
#endif