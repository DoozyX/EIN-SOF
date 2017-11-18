#ifndef P1_PANTALONI_H
#define P1_PANTALONI_H


#include "Artikl.h"

class Pantaloni : public Artikl {
private:
    tm datumNaSlednaNabavka;
public:
    explicit Pantaloni(string imeNaArtikl = "Unknown", int golemina = -1, int cena = -1, const tm &donesenVoProdavnica = {}, int kolicestvo = -1);

    bool presmetajNabavka() override;

    string toString() override;

    void setArtikl() override;

};

#endif //P1_PANTALONI_H
