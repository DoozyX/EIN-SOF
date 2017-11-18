
#include "Vlekaci.h"

Vlekaci::Vlekaci(const tm &datumNaRaganje, const tm &datumNaDonesuvanjeVoZoo, char pol, const string &imel,
                 const tm &datumNaPoslednaVakcinacija) : Zivotno(datumNaRaganje, datumNaDonesuvanjeVoZoo, pol, imel,
                                                                 datumNaPoslednaVakcinacija) {
    tm temp = datumNaDonesuvanjeVoZoo;
    mktime(&temp);
    datumNaSlednaVakcinacija.tm_year = temp.tm_year;
    datumNaSlednaVakcinacija.tm_mon = temp.tm_mon + 1;
    datumNaSlednaVakcinacija.tm_mday = temp.tm_mday;

}

const tm &Vlekaci::getDatumNaSlednaVakcinacija() const {
    return datumNaSlednaVakcinacija;
}

void Vlekaci::setDatumNaSlednaVakcinacija(const tm &datumNaSlednaVakcinacija) {
    Vlekaci::datumNaSlednaVakcinacija = datumNaSlednaVakcinacija;
}

bool Vlekaci::presmetajVakcinacija() {
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

const string Vlekaci::toString() {
    return Zivotno::toString() + "\tDatum na slenda vakcinacija: " + getDateString(datumNaSlednaVakcinacija);
}

void Vlekaci::setZivotno() {
    Zivotno::setZivotno();
    tm temp = datumNaPoslednaVakcinacija;
    mktime(&temp);
    datumNaSlednaVakcinacija.tm_year = temp.tm_year;
    datumNaSlednaVakcinacija.tm_mon = temp.tm_mon + 1;
    datumNaSlednaVakcinacija.tm_mday = temp.tm_mday;
    mktime(&temp);
}
