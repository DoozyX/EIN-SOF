#include "Zivotno.h"

Zivotno::Zivotno(const tm &datumNaRaganje, const tm &datumNaDonesuvanjeVoZoo, char pol, const string &imel,
                 const tm &datumNaPoslednaVakcinacija) : datumNaRaganje(datumNaRaganje),
                                                         datumNaDonesuvanjeVoZoo(datumNaDonesuvanjeVoZoo), pol(pol),
                                                         ime(imel),
                                                         datumNaPoslednaVakcinacija(datumNaPoslednaVakcinacija) {}

const tm &Zivotno::getDatumNaRaganje() const {
    return datumNaRaganje;
}

void Zivotno::setDatumNaRaganje(const tm &datumNaRaganje) {
    Zivotno::datumNaRaganje = datumNaRaganje;
}

const tm &Zivotno::getDatumNaDonesuvanjeVoZoo() const {
    return datumNaDonesuvanjeVoZoo;
}

void Zivotno::setDatumNaDonesuvanjeVoZoo(const tm &datumNaDonesuvanjeVoZoo) {
    Zivotno::datumNaDonesuvanjeVoZoo = datumNaDonesuvanjeVoZoo;
}

char Zivotno::getPol() const {
    return pol;
}

void Zivotno::setPol(char pol) {
    Zivotno::pol = pol;
}

const string &Zivotno::getImel() const {
    return ime;
}

void Zivotno::setImel(const string &imel) {
    Zivotno::ime = imel;
}

const tm &Zivotno::getDatumNaPoslednaVakcinacija() const {
    return datumNaPoslednaVakcinacija;
}

void Zivotno::setDatumNaPoslednaVakcinacija(const tm &datumNaPoslednaVakcinacija) {
    Zivotno::datumNaPoslednaVakcinacija = datumNaPoslednaVakcinacija;
}

void Zivotno::setZivotno() {
    int day;
    int month;
    int year;
    cout << "Enter ime: ";
    cin >> ime;
    cout << "Enter pol (m/z): ";
    cin >> pol;
    cout << "Enter datum na raganje:\n"
         << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;

    datumNaRaganje = {0, 0, 0, day, month, year};

    cout << "Enter koga e donesen vo zoo:\n"
         << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;

    datumNaDonesuvanjeVoZoo = {0, 0, 0, day, month, year};

    cout << "Enter datum na posledna vakcinacija:\n"
         << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;
    datumNaPoslednaVakcinacija = {0, 0, 0, day, month, year};

}

const string Zivotno::toString() {
    return "Ime: " + ime + "\tPol: " + getPolName(pol) + "\tDatum na raganje: " + getDateString(datumNaRaganje) +
           "\tDatum koga e dones vo zoo: " + getDateString(datumNaDonesuvanjeVoZoo) +
           "\tDatum na posledna vakcinjacija: " + getDateString(datumNaPoslednaVakcinacija);
}

const string Zivotno::getPolName(char c) {
    if (c == 'm') {
        return "Masko";
    }

    return "Zensko";
}

const string Zivotno::getDaNeString(const char c) {
    if ( c == 'd') {
        return "Da";
    }
    return "Ne";
}

const string Zivotno::getDateString(tm date) {
    return to_string(date.tm_mday) + "." + to_string(date.tm_mon) + "." + to_string(date.tm_year);
}
