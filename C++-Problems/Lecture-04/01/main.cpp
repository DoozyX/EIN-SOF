/*
 * 1. Создади класа Dropki која извршува операции со дропки. Напиши „драјвер“ за твојот програм да манипулира со оваа класа.

Користи целоборјни променливи за броител и именител кои мора да се приватни.
 Обезбеди потребен број на контруктори кои нема да дозволат дефинирање на грешни вредности (со 0 не се дели!).
 По секоја од наредните операции, дропката треба да се зачува во редуцирана форма,
 т.е дропката 2/4 треба да се зачува како 1/2. Обезбеди ги следните јавни функции членки:
	а) Собирање на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма.
	б) Одземање на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма
	в) Множење на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма
	г) Делење на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма
	д) Печатење на објектот во форма a/b.
	ѓ) Печатење на објектот во форма на реален број.
 */
#include <iostream>

using namespace std;

class Dropki {
private:
    int broitel;
    int imenitel;
public:
    Dropki(int br = -1, int im = -1) {
        setDropka(br, im);
    }

    void setDropka(int br, int im) {
        broitel = br;
        imenitel = im;
        reduceDropka();
    }

    unsigned int gcd() {
        unsigned int u = (unsigned int) imenitel;
        unsigned int v = (unsigned int) broitel;
        int shift;

        if (u == 0) return v;
        if (v == 0) return u;

        for (shift = 0; ((u | v) & 1) == 0; ++shift) {
            u >>= 1;
            v >>= 1;
        }

        while ((u & 1) == 0)
            u >>= 1;

        do {
            while ((v & 1) == 0)
                v >>= 1;

            if (u > v) {
                unsigned int t = v;
                v = u;
                u = t;
            }
            v = v - u;
        } while (v != 0);

        return u << shift;
    }

    void reduceDropka() {
        if (broitel == 0) {
            throw -1;
        }
        int n = gcd();
        broitel /= n;
        imenitel /= n;
    }

    Dropki soberi(Dropki dropka) {
        broitel  *= dropka.imenitel;
        dropka.broitel *= imenitel;
        imenitel *= dropka.imenitel;
        broitel += dropka.broitel;
        reduceDropka();
        return *this;
    }

    Dropki odzemi(Dropki dropka) {
        broitel  *= dropka.imenitel;
        dropka.broitel *= imenitel;
        imenitel *= dropka.imenitel;
        broitel -= dropka.broitel;
        reduceDropka();
        return *this;
    }

    Dropki mnozi(Dropki dropka) {
        broitel *= dropka.broitel;
        imenitel *= dropka.imenitel;
        reduceDropka();
        return *this;
    }

    Dropki deli(Dropki dropka) {
        broitel *= dropka.imenitel;
        imenitel *= dropka.broitel;
        reduceDropka();
        return *this;
    }

    void pecati() {
        cout << broitel << " / " << imenitel << endl;
    }

    void pecatiBroj() {
        cout << (double) broitel /  imenitel << endl;
    }

};

int main() {
    try {
        Dropki dropka(2, 4);
        dropka.pecati();

        dropka.soberi(Dropki(1, 5));
        dropka.pecati();

        dropka.odzemi(Dropki(1, 5));
        dropka.pecati();

        dropka.mnozi(Dropki(1, 5));
        dropka.pecati();

        dropka.deli(Dropki(1, 5));
        dropka.pecati();

        dropka.pecatiBroj();
    }catch (int e) {
        cout << "So nula ne se deli" << endl;
    }
    return 0;
}