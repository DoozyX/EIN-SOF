#include <iostream>

#include "Pravoagolnik.h"
#include "Kvadar.h"

//Isto kako Proekt 2

using namespace std;


int main() {
    cout << Oblik::getCountOblik() << endl;
    Pravoagolnik *p1 = new Pravoagolnik(1, 2);
    cout << p1->toString() << endl;

    cout << Oblik::getCountOblik() << endl;

    Kvadar k1(1, 2, 3);
    cout << k1.toString() << endl;
    cout << Oblik::getCountOblik() << endl;
    delete p1;
    cout << Oblik::getCountOblik() << endl;

    return 0;
}