#ifndef INC_01_ASISTENT_H
#define INC_01_ASISTENT_H


#include "Vraboten.h"

class Asistent : public Vraboten{
private:
    string zvanje;
    string mentor;
    int brPredmeti;
public:
    explicit Asistent(const string &ime = "Unknown", const string &prezime = "Unknown", int godinaNaVrabotuvanje = 0,
             const string &zvanje = "Unknown", const string &mentor = "Unknown", int brPredmeti = 0);

    const string &getZvanje() const;

    void setZvanje(const string &zvanje);

    const string &getMentor() const;

    void setMentor(const string &mentor);

    int getBrPredmeti() const;

    void setBrPredmeti(int brPredmeti);

    const string toString();

    void setVraboten() override;
};


#endif //INC_01_ASISTENT_H
