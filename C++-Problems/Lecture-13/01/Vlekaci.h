#ifndef INC_01_VLEKACI_H
#define INC_01_VLEKACI_H

#include "Zivotno.h"

class Vlekaci : public Zivotno {
private:
    tm datumNaSlednaVakcinacija;
public:
    explicit Vlekaci(const tm &datumNaRaganje = {}, const tm &datumNaDonesuvanjeVoZoo = {}, char pol = 'm', const string &imel = "Unknown",
            const tm &datumNaPoslednaVakcinacija = {});

    const tm &getDatumNaSlednaVakcinacija() const;

    void setDatumNaSlednaVakcinacija(const tm &datumNaSlednaVakcinacija);

    const string toString() override;

    bool presmetajVakcinacija() override;

    void setZivotno() override;

};


#endif //INC_01_VLEKACI_H
