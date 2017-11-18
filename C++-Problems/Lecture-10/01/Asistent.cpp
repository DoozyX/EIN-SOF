//
// Created by doozy on 16-Nov-17.
//

#include "Asistent.h"

typedef const string &basicString;

Asistent::Asistent(const string &ime, const string &prezime, int godinaNaVrabotuvanje,
                   const string &zvanje, basicString mentor, int brPredmeti) : zvanje(
        zvanje),
                                                                               mentor(mentor),
                                                                               brPredmeti(
                                                                                       brPredmeti),
                                                                               Vraboten(
                                                                                       ime,
                                                                                       prezime,
                                                                                       godinaNaVrabotuvanje) {}

const string &Asistent::getZvanje() const {
    return zvanje;
}

void Asistent::setZvanje(const string &zvanje) {
    Asistent::zvanje = zvanje;
}

const string &Asistent::getMentor() const {
    return mentor;
}

void Asistent::setMentor(const string &mentor) {
    Asistent::mentor = mentor;
}

int Asistent::getBrPredmeti() const {
    return brPredmeti;
}

void Asistent::setBrPredmeti(int brPredmeti) {
    Asistent::brPredmeti = brPredmeti;
}

const string Asistent::toString() {
    return Vraboten::toString() + " " + zvanje + " " + mentor + " " + to_string(brPredmeti);
}

void Asistent::setVraboten() {
    Vraboten::setVraboten();
    string job;
    string mentor1;
    int num;
    cout << "Vnesi Zvanje: ";
    cin >> job;
    setZvanje(job);
    cout << "Vnesi Mentor: ";
    cin >> mentor1;
    setMentor(mentor1);
    cout << "Vnesi Broj na Predmeti: ";
    cin >> num;
    setBrPredmeti(num);
}
