
#include "Zivotno.h"
#include <utility>

Zivotno::Zivotno(Datum dnr, Datum dndvz, char t, char p, string i, Datum dnpv) {
    datum_na_raganje = dnr;
    datum_na_donesuvanje_vo_zoo = dndvz;
    tip = t;
    pol = p;
    ime = std::move(i);
    datum_na_posledna_vakcinacija = dnpv;
}

void Zivotno::prikazi_podatoci() {
    cout << "Ime: " << ime << endl;
    cout << "Dataum na raganje:\n";
    datum_na_raganje.print();
    cout << "Datum na donesuvanje vo zoo:\n";
    datum_na_donesuvanje_vo_zoo.print();
    cout << "Tip: " << getTip(tip) << endl;
    cout << "Pol: " << getPol(pol) << endl;
    cout << "Datum na posledna vakcinacija:\n";
    datum_na_posledna_vakcinacija.print();
    cout << endl;
}

string Zivotno::getTip(char tip) {
    switch (tip) {
        case 'c':
            return "Cicac";
        case 'v':
            return "Vlekac";
        case 'p':
            return "Ptica";
        default:
            return "Unknown";
    }
}

string Zivotno::getPol(char pol) {
    switch (pol) {
        case 'm':
            return "Maski";
        case 'z':
            return "Zenski";
        default:
            return "Unknown";
    }
}

Datum Zivotno::presmetaj_vakcinacija() {
    switch (tip) {
        case 'c':
            return {datum_na_posledna_vakcinacija.getDen(), datum_na_posledna_vakcinacija.getMesec(),
                    datum_na_posledna_vakcinacija.getGodina() + 1};
        case 'v':
            return {datum_na_posledna_vakcinacija.getDen(), datum_na_posledna_vakcinacija.getMesec() + 8,
                    datum_na_posledna_vakcinacija.getGodina()};;
        case 'p':
            return {datum_na_posledna_vakcinacija.getDen(), datum_na_posledna_vakcinacija.getMesec() + 6,
                    datum_na_posledna_vakcinacija.getGodina()};;
        default:
            return {};
    }
}

char Zivotno::type() {
    return tip;
}

bool Zivotno::vakcinacijaPredDenovi(Datum data, int n) {
    return presmetaj_vakcinacija().daysDifference(data) <= n;

}
