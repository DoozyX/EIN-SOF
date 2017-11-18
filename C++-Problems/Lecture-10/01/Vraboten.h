#ifndef INC_01_VRABOTEN_H
#define INC_01_VRABOTEN_H

#include <iostream>

using namespace std;

class Vraboten {
private:
    string ime;
    string prezime;
    int godinaNaVrabotuvanje;
public:
    explicit Vraboten(const string &ime = "Unknown", const string &prezime = "Unknown", int godinaNaVrabotuvanje = 0);

    const string &getIme() const;

    void setIme(const string &ime);

    const string &getPrezime() const;

    void setPrezime(const string &prezime);

    int getGodinaNaVrabotuvanje() const;

    void setGodinaNaVrabotuvanje(int godinaNaVrabotuvanje);

    virtual const string toString();

    virtual void setVraboten();
};


#endif //INC_01_VRABOTEN_H
