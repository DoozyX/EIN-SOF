//
// Created by doozy on 09-Sep-17.
//

#include "Covek.h"

#include <utility>

Covek::Covek(string ime, string prezime, string adresa, int telefon) : ime(std::move(ime)), prezime(std::move(prezime)),
                                                                       adresa(std::move(adresa)),
                                                                       telefon(telefon) {}

const string &Covek::getIme() const {
    return ime;
}

void Covek::setIme(const string &ime) {
    Covek::ime = ime;
}

const string &Covek::getPrezime() const {
    return prezime;
}

void Covek::setPrezime(const string &prezime) {
    Covek::prezime = prezime;
}

const string &Covek::getAdresa() const {
    return adresa;
}

void Covek::setAdresa(const string &adresa) {
    Covek::adresa = adresa;
}

int Covek::getTelefon() const {
    return telefon;
}

void Covek::setTelefon(int telefon) {
    Covek::telefon = telefon;
}

void Covek::print() {
    cout << "Ime: " << ime << "\nPrezime: " << prezime << "\nAdresa: " << adresa << "\nTelefon: " << telefon << endl;
}
