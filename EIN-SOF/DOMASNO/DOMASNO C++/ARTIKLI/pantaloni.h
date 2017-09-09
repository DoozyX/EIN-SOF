//definiranje na klasata pantaloni.h
#ifndef PANTALONI_H
#define PANTALONI_H
#include "date1.h"
#include "artikl.h"
class Pantaloni:public Artikl{ 


public:
	Pantaloni();
	void postaviPantaloni(char *i, char *g, double c,Date d,unsigned br);
    bool presmetajNabavka(Date denes);
    void prikaziPodatoci();     
    ~Pantaloni();
private:
	Date DatumNaSlednaNabavka;
};
#endif