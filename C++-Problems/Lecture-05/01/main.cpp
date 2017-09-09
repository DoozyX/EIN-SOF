/*
 * Вежба:
1. Во една зоолошка градина се води евиденција за различни типови животни кои се чуваат во неа: птици, влекачи, цицачи.... Користејќи ги концептите на ООП да се моделира класа според спецификациите дадени на слика 5.1. Цицачите се вакцинираат секоја година, птиците на секои 6 месеци, а влекачите на секои 8 месеци. Датумите да се дефинираат во посебна класа Datum со приватни податочни членки den, mesec и godina. Да се имплементира кориснички посредник преку мени со следните опции:
1.	Додавање на животно во зоолошка градина
2.	Прикажување на бројна состојба
3.	Прикажување на животни од дадена група (тип: c- цицачи, v-влекачи, p-птици)
4.	Прикажување на целата листа
5.	Прикажување на сите животни кои треба да се вакцинираат во рок од 1 недела
6.	Излез од менито

Klasa: Zivotno
Podatoci:
Datum_na_ragjanje
Datum_na_donesuvawe_vo_zoo
tip
Pol (m/z)
Ime
Datum_na_posledna_vakcinacija
Metodi:
Konstruktor()
Prikazi_Podatoci()
Presmetaj_vakcinacija()

Слика 5.1 Минимум потребни елементи на класата Zivotno
 */
#include <iostream>
#include "Zoo.h"

#define MENU_ITEMS 5

using namespace std;

int menu() {
    cout << "\n\n1.\tДодавање на животно во зоолошка градина\n"
            "2.\tПрикажување на бројна состојба\n"
            "3.\tПрикажување на животни од дадена група (тип: c- цицачи, v-влекачи, p-птици)\n"
            "4.\tПрикажување на целата листа\n"
            "5.\tПрикажување на сите животни кои треба да се вакцинираат во рок од 1 недела\n"
            "6.\tИзлез од менито\n"
            "? ";

    int choice;
    cin >> choice;
    cout << endl;
    return choice;
}

Datum enterDate() {
    int den, mesec, godina;
    cout << "Den: ";
    cin >> den;
    cout << "Mesec: ";
    cin >> mesec;
    cout << "Godina: ";
    cin >> godina;
    return Datum(den, mesec, godina);
}

Zivotno enterZivotno() {
    cout << "Enter datum na raganje:\n";
    Datum datum_na_raganje = enterDate();

    cout << "Enter datum na donesuvanje vo zoo:\n";
    Datum datum_na_donesuvanje_vo_zoo = enterDate();

    cout << "Enter tip (тип: c- цицачи, v-влекачи, p-птици): ";
    char tip;
    cin >> tip;

    cout << "Enter pol (m/z): ";
    char pol;
    cin >> pol;

    cout << "Enter ime: ";
    string ime;
    cin >> ime;

    cout << "Enter datum na posledna vakcinacija:\n";
    Datum datum_na_posledna_vakcinacija = enterDate();

    return Zivotno(datum_na_raganje, datum_na_donesuvanje_vo_zoo, tip, pol, ime, datum_na_posledna_vakcinacija);
}

int main() {
    Zoo zoo;
    int choice = menu();
    while (choice > 0 && choice <= MENU_ITEMS) {
        switch (choice) {
            case 1:
                zoo.addZivotno(enterZivotno());
                break;
            case 2:
                cout << "Broj na zivotni vo zoo: " << zoo.getSize();
                break;
            case 3:
                cout << "Enter tip na zivotno(тип: c- цицачи, v-влекачи, p-птици): ";
                char tip;
                cin >> tip;
                zoo.prikaziGrupa(tip);
                break;
            case 4:
                zoo.prikazi();
                break;
            case 5:
                zoo.prikaziZaVakcinacija();
                break;
            default:
                cout << "Wrong Choice" << endl;

        }
        choice = menu();
    }
    return 0;
}