#ifndef INC_01_PROFESOR_H
#define INC_01_PROFESOR_H


#include "Vraboten.h"

class Profesor : public Vraboten {
private:
    string zvanje;
    string oblast;
    int brPredmeti;
public:
    explicit Profesor(const string &ime = "Unknown", const string &prezime = "Unknown", int godinaNaVrabotuvanje = 0,
                      const string &zvanje = "Unknown", const string &oblast = "Unknown", int brPredmeti = 0);

    const string &getZvanje() const;

    void setZvanje(const string &zvanje);

    const string &getOblast() const;

    void setOblast(const string &oblast);

    int getBrPredmeti() const;

    void setBrPredmeti(int brPredmeti);

    const string toString() override;

    void setVraboten() override;
};


#endif //INC_01_PROFESOR_H
