#include "Cicaci.h"


Cicaci::Cicaci(const tm &datumNaRaganje, const tm &datumNaDonesuvanjeVoZoo, char pol, const string &imel,
               const tm &datumNaPoslednaVakcinacija, char prezivar) : Zivotno(datumNaRaganje, datumNaDonesuvanjeVoZoo, pol,
                                                                           imel,
                                                                           datumNaPoslednaVakcinacija), prezivar(prezivar) {
    tm temp = datumNaDonesuvanjeVoZoo;
    mktime(&temp);
    datumNaSlednaVakcinacija.tm_year = temp.tm_year + 1;
    datumNaSlednaVakcinacija.tm_mon = temp.tm_mon;
    datumNaSlednaVakcinacija.tm_mday = temp.tm_mday;

}

const tm &Cicaci::getDatumNaSlednaVakcinacija() const {
    return datumNaSlednaVakcinacija;
}

void Cicaci::setDatumNaSlednaVakcinacija(const tm &datumNaSlednaVakcinacija) {
    Cicaci::datumNaSlednaVakcinacija = datumNaSlednaVakcinacija;
}

bool Cicaci::presmetajVakcinacija() {
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

const string Cicaci::toString() {
    return Zivotno::toString() + "\tDatum na slenda vakcinacija: " + getDateString(datumNaSlednaVakcinacija) +
           "\tPrezivar: " + getDaNeString(prezivar);
}

void Cicaci::setZivotno() {
    Zivotno::setZivotno();
    cout << "Dali e e prezivar: (d/n)";
    cin >> prezivar;
    tm temp = datumNaPoslednaVakcinacija;
    mktime(&temp);
    datumNaSlednaVakcinacija.tm_year = temp.tm_year + 1;
    datumNaSlednaVakcinacija.tm_mon = temp.tm_mon;
    datumNaSlednaVakcinacija.tm_mday = temp.tm_mday;
}

char Cicaci::getPrezivar() const {
    return prezivar;
}

void Cicaci::setPrezivar(char prezivar) {
    Cicaci::prezivar = prezivar;
}