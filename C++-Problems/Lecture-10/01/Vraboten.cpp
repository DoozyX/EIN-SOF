//
// Created by doozy on 16-Nov-17.
//

#include "Vraboten.h"

Vraboten::Vraboten(const string &ime, const string &prezime, int godinaNaVrabotuvanje) : ime(ime), prezime(prezime),
                                                                                         godinaNaVrabotuvanje(
                                                                                                 godinaNaVrabotuvanje) {}

const string &Vraboten::getIme() const {
    return ime;
}

void Vraboten::setIme(const string &ime) {
    Vraboten::ime = ime;
}

const string &Vraboten::getPrezime() const {
    return prezime;
}

void Vraboten::setPrezime(const string &prezime) {
    Vraboten::prezime = prezime;
}

int Vraboten::getGodinaNaVrabotuvanje() const {
    return godinaNaVrabotuvanje;
}

void Vraboten::setGodinaNaVrabotuvanje(int godinaNaVrabotuvanje) {
    Vraboten::godinaNaVrabotuvanje = godinaNaVrabotuvanje;
}

const string Vraboten::toString() {
    return ime + " " + prezime + " "  + to_string(godinaNaVrabotuvanje);
}

void Vraboten::setVraboten() {
    string name;
    string surname;
    int year;
    cout << "Vnesi Ime: ";
    cin >> name;
    setIme(name);
    cout << "Vnesi Prezime: ";
    cin >> surname;
    setPrezime(surname);
    cout << "Vnesi Godina na Vrabotuvanje: ";
    cin >> year;
    setGodinaNaVrabotuvanje(year);

}
