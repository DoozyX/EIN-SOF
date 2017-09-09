/*
 * 2. Да се направи програма која ќе ја користи класата Штедач и ќе овозможи:
a)	Внесување на нов штедач во системот
b)	Приказ на податоците
c)	Уплата на средства
d)	Исплата на средства (со контрола дали е можна таква исплата)
e)	Приказ на салдото за даден штедач
 */
#include <iostream>
#include <vector>

using namespace std;

class Stedac {
public:
    Stedac() {
        broj = 0;
        saldo = 0;
    }
    void vnesi_podatoci() {
        cout << "Enter Number,Name and Surname, address and Credit" << endl;
        cin >> broj >> imeprezime >> adresa >> saldo;
    }

    void prikazi_podatoci(){
        cout << "broj: " << broj << " ime i prezime: " << imeprezime << " adresa: " << adresa << " saldo: " << saldo << endl;
    }


    void uplata(unsigned long i) {
        saldo += i;
    }

    void isplata(unsigned long i) {
        if (saldo - i >= 0) {
            saldo -= i;
        }
    }

    long sostojba() {
        return saldo;
    }

private:
    int broj;
    char imeprezime[30], adresa[50];
    long saldo;
};

class StedacList {
private:
    vector<Stedac> stedaci;
public:
    void addStedac() {
        Stedac stedac1;
        stedac1.vnesi_podatoci();
        stedaci.emplace_back(stedac1);
    }

    void printAllStedac() {
        unsigned long n = stedaci.size();
        for (int i = 0; i < n; ++i) {
            stedaci[i].prikazi_podatoci();
        }
    }

    void uplatiStedac(int i, unsigned long  n) {
        stedaci[i-1].uplata(n);
    }

    void isplatiStedac(int i, unsigned long  n) {
        stedaci[i-1].isplata(n);
    }

    void prikaziSaltoStedac(int i) {
        Stedac stedac1 = stedaci[i-1];
        cout << "stedacod ima slado: " << stedac1.sostojba() << endl;
    }
};


int menu() {
    int choice;
    cout << "Menu" << endl
         << "1)\tВнесување на нов штедач во системот\n"
         << "2)\tПриказ на податоците\n"
         << "3)\tУплата на средства\n"
         << "4)\tИсплата на средства (со контрола дали е можна таква исплата)\n"
         << "5)\tПриказ на салдото за даден штедач\n"
         << "6) Крај";
    cin >> choice;
    return choice;
}

int main() {
    StedacList list;

    int choice = menu();

    int i;
    unsigned long n;
    while (choice >= 1 && choice <= 5) {
        switch (choice) {
            case 1:
                list.addStedac();
                break;
            case 2:
                list.printAllStedac();
                break;
            case 3:
                cout << "Enter stedac ID  i vrednost za uplata" << endl;
                cin >> i >> n;
                list.uplatiStedac(i,n);
                break;
            case 4:
                cout << "Enter stedac ID  i vrednost za isplata" << endl;
                cin >> i >> n;
                list.isplatiStedac(i,n);
                break;
            case 5:
                cout << "Enter stedac ID" << endl;
                cin >> i;
                list.prikaziSaltoStedac(i);
                break;
            default:
                cout << "Error";
                break;
        }
        choice = menu();
    }

    return 0;
}