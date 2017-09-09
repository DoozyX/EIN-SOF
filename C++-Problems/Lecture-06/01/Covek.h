#ifndef INC_01_COVEK_H
#define INC_01_COVEK_H

#include <iostream>

using namespace std;

class Covek {
private:
    string ime;
    string prezime;
    string adresa;
    int telefon;
public:
    Covek(string ime, string prezime, string adresa, int telefon);

    const string &getIme() const;

    void setIme(const string &ime);

    const string &getPrezime() const;

    void setPrezime(const string &prezime);

    const string &getAdresa() const;

    void setAdresa(const string &adresa);

    int getTelefon() const;

    void setTelefon(int telefon);

    void print();
};


#endif //INC_01_COVEK_H
