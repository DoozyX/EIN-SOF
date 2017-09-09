#include <iostream>
#include "Datum.h"

using std::cout;
using std::endl;


Datum::Datum(int dy, int mn, int yr) {
    if (mn > 0 && mn <= 12) {
        mesec = mn;
    } else {
        cout << "Wrong month - " << mn << endl;
        mesec = -1;
    }

    if (checkDay(dy)) {
        den = dy;
    } else {
        cout << "Wrong Day - " << dy << endl;
        den = -1;
    }

    godina = yr;
}

bool Datum::checkDay(int testDay) {
    static const int daysPerMonth[13] =
            {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (testDay > 0 && testDay <= daysPerMonth[mesec]) {
        return true;
    }

    return mesec == 2 &&
           testDay == 29 &&
           (godina % 400 == 0 ||
            (godina % 4 == 0 && godina % 100 != 0));
}

int Datum::getDen() const {
    return den;
}

int Datum::getMesec() const {
    return mesec;
}

int Datum::getGodina() const {
    return godina;
}

Datum::Datum() {
    den = -1;
    mesec = -1;
    godina = -1;
}

void Datum::print() {
    cout << "Den: " << den << "\tMesec: " << mesec << "\tGodina: " << godina << endl;

}

int Datum::daysDifference(Datum data) {
    return data.toNumber() - toNumber();
}

int Datum::toNumber() {
    if (mesec < 3)
        godina--, mesec += 12;
    return 365 * godina + godina / 4 - godina / 100 + godina / 400 + (153 * mesec - 457) / 5 + den - 306;
}
