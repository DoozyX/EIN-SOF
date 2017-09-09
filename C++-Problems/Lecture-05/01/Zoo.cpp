#include "Zoo.h"
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

typedef std::chrono::system_clock Clock;

void Zoo::addZivotno(const Zivotno &zivotno) {
    zivotni.push_back(zivotno);

}

int Zoo::getSize() {
    return static_cast<int>(zivotni.size());
}

void Zoo::prikaziGrupa(char grupa) {
    cout << "Zivotrni od grupata " << Zivotno::getTip(grupa) << "se:\n";
    int n = getSize();
    for (int i = 0; i < n; ++i) {
        if (zivotni[i].type() == grupa) {
            zivotni[i].prikazi_podatoci();
        }
    }
    cout << endl;
}

void Zoo::prikazi() {
    cout << "Zivotrni se:\n";
    int n = getSize();
    for (int i = 0; i < n; ++i) {
        zivotni[i].prikazi_podatoci();
    }
    cout << endl;
}

void Zoo::prikaziZaVakcinacija() {
    auto now = Clock::now();
    time_t now_c = Clock::to_time_t(now);
    struct tm *parts = localtime(&now_c);

    Datum dateNow(parts->tm_mday, 1 + parts->tm_mon, 1900 + parts->tm_year);
    cout << "Treba da se vakciniraat:\n";
    int n = getSize();
    for (int i = 0; i < n; ++i) {
        if (zivotni[i].vakcinacijaPredDenovi(dateNow, 7)) {
            zivotni[i].prikazi_podatoci();
        }
    }
    cout << endl;
}
