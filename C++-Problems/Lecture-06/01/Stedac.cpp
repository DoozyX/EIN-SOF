//
// Created by doozy on 09-Sep-17.
//

#include "Stedac.h"

Stedac::Stedac(const Covek &lice, double balance, double kredit) : lice(lice), balance(balance), kredit(kredit) {
    ++brojStedaci;
}

int Stedac::brojStedaci = 0;
double Stedac::kamata = 0;

double Stedac::getKamata() {
    return kamata;
}

void Stedac::setKamata(double kamata) {
    Stedac::kamata = kamata;
}

int Stedac::getBrojStedaci() {
    return brojStedaci;
}

const Covek &Stedac::getLice() const {
    return lice;
}

void Stedac::setLice(const Covek &lice) {
    Stedac::lice = lice;
}

double Stedac::getBalance() const {
    return balance;
}

void Stedac::setBalance(double balance) {
    Stedac::balance = balance;
}

double Stedac::getKredit() const {
    return kredit;
}

void Stedac::setKredit(double kredit) {
    Stedac::kredit = kredit;
}

Stedac::~Stedac() {
    --brojStedaci;

}

void Stedac::print() {
    lice.print();
    cout << "Balance: " << balance << "\nKredit: " << kredit << endl;

}
