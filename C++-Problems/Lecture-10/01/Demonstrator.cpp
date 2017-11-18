//
// Created by doozy on 16-Nov-17.
//

#include "Demonstrator.h"

Demonstrator::Demonstrator(const string &ime, const string &prezime, int godinaNaVrabotuvanje, int rabotnoVremeOd,
                           int rabotnoVremeDo) : rabotnoVremeOd(rabotnoVremeOd),
                                                 rabotnoVremeDo(rabotnoVremeDo), Vraboten(
                ime,
                prezime,
                godinaNaVrabotuvanje) {}

int Demonstrator::getRabotnoVremeOd() const {
    return rabotnoVremeOd;
}

void Demonstrator::setRabotnoVremeOd(int rabotnoVremeOd) {
    Demonstrator::rabotnoVremeOd = rabotnoVremeOd;
}

int Demonstrator::getRabotnoVremeDo() const {
    return rabotnoVremeDo;
}

void Demonstrator::setRabotnoVremeDo(int rabotnoVremeDo) {
    Demonstrator::rabotnoVremeDo = rabotnoVremeDo;
}

const string Demonstrator::toString() {
    return Vraboten::toString() + " " + to_string(rabotnoVremeOd) + " " + to_string(rabotnoVremeDo);
}

void Demonstrator::setVraboten() {
    Vraboten::setVraboten();
    int from;
    int to;
    cout << "Vnesi rabotno vreme od: ";
    cin >> from;
    setRabotnoVremeOd(from);
    cout << "Vnesi rabotno vreme do: ";
    cin >> to;
    setRabotnoVremeDo(to);
}
