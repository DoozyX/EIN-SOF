#ifndef INC_01_PTICI_H
#define INC_01_PTICI_H


#include "Zivotno.h"

class Ptici : public Zivotno {
private:
    tm datumNaSlednaVakcinacija;
    char letac; //(d/n)
public:
    explicit Ptici(const tm &datumNaRaganje = {}, const tm &datumNaDonesuvanjeVoZoo = {}, char pol = 'm', const string &imel = "Unknown",
                     const tm &datumNaPoslednaVakcinacija = {}, char letac = 'n');

    const tm &getDatumNaSlednaVakcinacija() const;

    char getLetac() const;

    void setLetac(char letac);

    void setDatumNaSlednaVakcinacija(const tm &datumNaSlednaVakcinacija);

    const string toString() override;

    bool presmetajVakcinacija() override;

    void setZivotno() override;

};


#endif //INC_01_PTICI_H
