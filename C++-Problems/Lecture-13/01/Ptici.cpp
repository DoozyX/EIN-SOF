#include "Ptici.h"

Ptici::Ptici(const tm &datumNaRaganje, const tm &datumNaDonesuvanjeVoZoo, char pol, const string &imel,
                 const tm &datumNaPoslednaVakcinacija, char letac) : Zivotno(datumNaRaganje, datumNaDonesuvanjeVoZoo, pol, imel,
                                                                 datumNaPoslednaVakcinacija), letac(letac) {
    tm temp = datumNaDonesuvanjeVoZoo;
    mktime(&temp);
    datumNaSlednaVakcinacija.tm_year = temp.tm_year;
    datumNaSlednaVakcinacija.tm_mon = temp.tm_mon + 6;
    datumNaSlednaVakcinacija.tm_mday = temp.tm_mday;
    mktime(&datumNaSlednaVakcinacija);

}

const tm &Ptici::getDatumNaSlednaVakcinacija() const {
    return datumNaSlednaVakcinacija;
}

void Ptici::setDatumNaSlednaVakcinacija(const tm &datumNaSlednaVakcinacija) {
    Ptici::datumNaSlednaVakcinacija = datumNaSlednaVakcinacija;
}

bool Ptici::presmetajVakcinacija() {
    time_t now = time(nullptr);
    tm *ltm = localtime(&now);

    tm temp = *ltm;

    temp.tm_mday = datumNaSlednaVakcinacija.tm_mday;
    temp.tm_mon = datumNaSlednaVakcinacija.tm_mon - 1;
    temp.tm_year = datumNaSlednaVakcinacija.tm_year - 1900;

    time_t x = mktime(ltm);
    time_t y = mktime(&temp);
    if (x != (time_t) (-1) && y != (time_t) (-1)) {
        double difference = difftime(y, x) / (60 * 60 * 24);
        return difference < 8;
    }
    return false;
}

const string Ptici::toString() {
    return Zivotno::toString() + "\tDatum na slenda vakcinacija: " + getDateString(datumNaSlednaVakcinacija) + "\tLetac: " + getDaNeString(letac);
}

void Ptici::setZivotno() {
    Zivotno::setZivotno();
    cout << "Dali e e letac: (d/n)";
    cin >> letac;
    tm temp = datumNaPoslednaVakcinacija;
    mktime(&temp);
    datumNaSlednaVakcinacija.tm_year = temp.tm_year;
    datumNaSlednaVakcinacija.tm_mon = temp.tm_mon + 6;
    datumNaSlednaVakcinacija.tm_mday = temp.tm_mday;
    mktime(&datumNaSlednaVakcinacija);
}

char Ptici::getLetac() const {
    return letac;
}

void Ptici::setLetac(char letac) {
    Ptici::letac = letac;
}
