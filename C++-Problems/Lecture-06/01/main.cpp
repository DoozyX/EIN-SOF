/*
1. Создади класа Stedac во која ќе користиш статичка податочна членка kamata
 која ќе ја чува вредноста на годишната камата за сите штедачи
 и статична податочна членка brojStedaci кој во секој момент кажува колку штедачи има во банката.
 Останатите податочни членки се lice, bilans и kredit.
 Името, презимето, адресата и телефонот на секој објeкт од класата Stedac
 се сместени во приватна податочна членка lice која е од класaта Covek.
 */
#include <iostream>
#include "Stedac.h"

using namespace std;

int main() {
    cout << "Broj na stedaci pred instanciranje e "
         << Stedac::getBrojStedaci() << endl;

    Stedac *stedac1Ptr = new Stedac(Covek("doozy", "dzx", "skopje", 71287398), 0, 0);
    Stedac *stedac2Ptr = new Stedac(Covek("test", "test1", "skopjetest", 7545498), 5, 50);

    cout << "Broj na stedaci po instanciranje e "
         << Stedac::getBrojStedaci();

    cout << "\n\nStedac 1:\n";
    stedac1Ptr->print();

    cout << "\nEmployee 2:\n";
    stedac2Ptr->print();

    delete stedac1Ptr;   // vrati memorija
    stedac1Ptr = nullptr;
    delete stedac2Ptr;   // vrati memorija
    stedac2Ptr = nullptr;

    cout << "Broj na stedaci po brishenje e "
         << Stedac::getBrojStedaci() << endl;

    return 0;
}