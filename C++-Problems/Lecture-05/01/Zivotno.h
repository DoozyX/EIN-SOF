#ifndef INC_01_ZIVOTNO_H
#define INC_01_ZIVOTNO_H


#include "Datum.h"
#include <iostream>

using namespace std;

class Zivotno {
private:
    Datum datum_na_raganje;
    Datum datum_na_donesuvanje_vo_zoo;
    char tip;
    char pol;
    string ime;
    Datum datum_na_posledna_vakcinacija;
public:
    Zivotno(Datum dnr, Datum dndvz, char t, char p, string i, Datum dnpv);

    static string getTip(char tip);

    static string getPol(char pol);

    char type();

    void prikazi_podatoci();

    bool vakcinacijaPredDenovi(Datum data, int n);

    Datum presmetaj_vakcinacija();
};


#endif //INC_01_ZIVOTNO_H
