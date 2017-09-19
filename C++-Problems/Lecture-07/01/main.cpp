/*
 * 1. Создади класа Dropki која извршува операции со дропки.
 * Напиши „драјвер“ за твојот програм да манипулира со оваа класа.

Користи целоборјни променливи за броител и именител кои мора да се приватни.
 Обезбеди потребен број на контруктори кои нема да дозволат дефинирање на грешни вредности (со 0 не се дели).
 По секоја од наредните операции, дропката треба да се зачува во редуцирана форма,
 т.е дропката 2/4 треба да се зачува како 1/2. Обезбеди ги следните операторски функции членки:
	а) Собирање на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма.
	б) Одземање на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма
	в) Множење на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма
	г) Делење на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма
	д) Собирање на објект од  класа Dropki со цел број. Резултатот да се даде во редуцирана форма.
	ѓ) Одземање на објект од  класа Dropki со цел број. Резултатот да се даде во редуцирана форма.
	е) Множење на објект од  класа Dropki со цел број. Резултатот да се даде во редуцирана форма.
	ж) Делење на објект од  класа Dropki со цел број. Резултатот да се даде во редуцирана форма.

Да се обезбедат и следните функции членки на класата:
	з) Печатење на објектот во форма a/b.
	ѕ) Печатење на објектот во форма на реален број.
 */

#include <iostream>
#include "Dropki.h"


using namespace std;

int main() {
    Dropki dropka(2, 4);
    dropka.pecati();


    Dropki dropka1(5, 6);
    dropka1.pecati();

    dropka = dropka + dropka1;
    dropka.pecati();

    dropka = dropka - dropka1;
    dropka.pecati();

    dropka = dropka * dropka1;
    dropka.pecati();

    dropka = dropka / dropka1;
    dropka.pecati();


    dropka = dropka + 3;
    dropka.pecati();

    dropka = dropka - 3;
    dropka.pecati();

    dropka = dropka * 3;
    dropka.pecati();

    dropka = dropka / 3;
    dropka.pecati();

    dropka.pecatiBroj();
    return 0;
}