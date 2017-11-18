//
// Created by doozy on 16-Nov-17.
//

#include "Profesor.h"

Profesor::Profesor(const string &ime, const string &prezime, int godinaNaVrabotuvanje,
                   const string &zvanje, const string &oblast, int brPredmeti) : zvanje(
        zvanje),
                                                                                 oblast(oblast),
                                                                                 brPredmeti(
                                                                                         brPredmeti),
                                                                                 Vraboten(
                                                                                         ime,
                                                                                         prezime,
                                                                                         godinaNaVrabotuvanje) {}

const string &Profesor::getZvanje() const {
    return zvanje;
}

void Profesor::setZvanje(const string &zvanje) {
    Profesor::zvanje = zvanje;
}

const string &Profesor::getOblast() const {
    return oblast;
}

void Profesor::setOblast(const string &oblast) {
    Profesor::oblast = oblast;
}

int Profesor::getBrPredmeti() const {
    return brPredmeti;
}

void Profesor::setBrPredmeti(int brPredmeti) {
    Profesor::brPredmeti = brPredmeti;
}

const string Profesor::toString() {
    return Vraboten::toString() + " " + zvanje + " " + oblast + " " + to_string(brPredmeti);
}

void Profesor::setVraboten() {
    Vraboten::setVraboten();
    string job;
    string area;
    int num;
    cout << "Vnesi Zvanje: ";
    cin >> job;
    setZvanje(job);
    cout << "Vnesi Oblast: ";
    cin >> area;
    setOblast(area);
    cout << "Vnesi Broj na Predmeti: ";
    cin >> num;
    setBrPredmeti(num);
}
