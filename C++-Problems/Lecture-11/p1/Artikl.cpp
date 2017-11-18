#include "Artikl.h"

const string &Artikl::getImeNaArtikl() const {
    return imeNaArtikl;
}

Artikl::Artikl(string imeNaArtikl, int golemina, int cena, const tm &donesenVoProdavnica, int kolicestvo) : imeNaArtikl(
        std::move(imeNaArtikl)),
                                                                                                            golemina(
                                                                                                                    golemina),
                                                                                                            cena(cena),
                                                                                                            donesenVoProdavnica(
                                                                                                                    donesenVoProdavnica),
                                                                                                            kolicestvo(
                                                                                                                    kolicestvo) {}

void Artikl::setImeNaArtikl(const string &imeNaArtikl) {
    Artikl::imeNaArtikl = imeNaArtikl;
}

int Artikl::getGolemina() const {
    return golemina;
}

void Artikl::setGolemina(int golemina) {
    Artikl::golemina = golemina;
}

int Artikl::getCena() const {
    return cena;
}

void Artikl::setCena(int cena) {
    Artikl::cena = cena;
}

const tm &Artikl::getDonesenVoProdavnica() const {
    return donesenVoProdavnica;
}

void Artikl::setDonesenVoProdavnica(const tm &donesenVoProdavnica) {
    Artikl::donesenVoProdavnica = donesenVoProdavnica;
}


string Artikl::toString() {
    return imeNaArtikl + " " + to_string(golemina) + " " + to_string(cena) + " " +
           to_string(donesenVoProdavnica.tm_mday) + "." + to_string(donesenVoProdavnica.tm_mon) + "." +
           to_string(donesenVoProdavnica.tm_year);
}

void Artikl::setArtikl() {
    int day;
    int month;
    int year;
    cout << "Enter ime: ";
    cin >> imeNaArtikl;
    cout << "Enter golemina: ";
    cin >> golemina;
    cout << "Enter cena: ";
    cin >> cena;
    cout << "Enter donesen vo prodavnica:\n"
         << "Day: " ;
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;

    donesenVoProdavnica = {0,0,0,day,month,year};

    cout << "Enter kolicina; ";
    cin >> kolicestvo;

}
