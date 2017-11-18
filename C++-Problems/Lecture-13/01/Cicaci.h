//
// Created by doozy on 18-Nov-17.
//

#ifndef INC_01_CICACI_H
#define INC_01_CICACI_H


#include "Zivotno.h"

class Cicaci : public Zivotno{
private:
    tm datumNaSlednaVakcinacija;
    char prezivar; //(d/n)
public:
    explicit Cicaci(const tm &datumNaRaganje = {}, const tm &datumNaDonesuvanjeVoZoo = {}, char pol = 'm', const string &imel = "Unknown",
                   const tm &datumNaPoslednaVakcinacija = {}, char prezivar = 'n');

    const tm &getDatumNaSlednaVakcinacija() const;

    char getPrezivar() const;

    void setPrezivar(char prezivar);

    void setDatumNaSlednaVakcinacija(const tm &datumNaSlednaVakcinacija);

    const string toString() override;

    bool presmetajVakcinacija() override;

    void setZivotno() override;
};


#endif //INC_01_CICACI_H
