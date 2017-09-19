//
// Created by doozy on 12-Sep-17.
//

#include "Dropki.h"
#include <iostream>

using namespace std;

Dropki::Dropki(int br, int im) {
    setDropka(br, im);
}

void Dropki::setDropka(int br, int im) {
    broitel = br;
    imenitel = im;
    reduceDropka();
}

unsigned int Dropki::gcd() {
    auto u = (unsigned int) imenitel;
    auto v = (unsigned int) broitel;
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

void Dropki::reduceDropka() {
    if (imenitel == 0) {
        cout << "So nula ne se deli" << endl;
        imenitel = -1;
    }
    int n = gcd();
    broitel /= n;
    imenitel /= n;
}

Dropki Dropki::operator+(Dropki dropka) {
    Dropki temp;
    temp.broitel = broitel * dropka.imenitel;
    dropka.broitel *= imenitel;
    temp.imenitel = imenitel * dropka.imenitel;
    temp.broitel += dropka.broitel;
    temp.reduceDropka();
    return temp;
}

Dropki Dropki::operator-(Dropki dropka) {
    Dropki temp;
    temp.broitel = broitel * dropka.imenitel;
    dropka.broitel *= imenitel;
    temp.imenitel = imenitel * dropka.imenitel;
    temp.broitel -= dropka.broitel;
    temp.reduceDropka();
    return temp;
}

Dropki Dropki::operator*(Dropki dropka) {
    Dropki temp;
    temp.broitel = broitel * dropka.broitel;
    temp.imenitel = imenitel * dropka.imenitel;
    temp.reduceDropka();
    return temp;
}


Dropki Dropki::operator/(Dropki dropka) {
    Dropki temp;
    temp.broitel = broitel * dropka.imenitel;
    temp.imenitel = imenitel * dropka.broitel;
    temp.reduceDropka();
    return temp;
}

void Dropki::pecati() {
    cout << broitel << " / " << imenitel << endl;
}

void Dropki::pecatiBroj() {
    cout << (double) broitel / imenitel << endl;
}

Dropki Dropki::operator+(int num) {
    Dropki temp;
    temp.broitel = broitel + num*imenitel;
    temp.imenitel = imenitel;
    temp.reduceDropka();
    return temp;
}

Dropki Dropki::operator-(int num) {
    Dropki temp;
    temp.broitel = broitel - num*imenitel;
    temp.imenitel = imenitel;
    temp.reduceDropka();
    return temp;
}

Dropki Dropki::operator*(int num) {
    Dropki temp;
    temp.broitel = broitel *num;
    temp.imenitel = imenitel;
    temp.reduceDropka();
    return temp;
}

Dropki Dropki::operator/(int num) {
    Dropki temp;
    temp.broitel = broitel;
    temp.imenitel = imenitel*num;
    temp.reduceDropka();
    return temp;
}





