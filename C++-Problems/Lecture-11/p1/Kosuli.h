#ifndef P1_KOSULI_H
#define P1_KOSULI_H


#include "Artikl.h"

class Kosuli : public Artikl {
private:
public:
    explicit Kosuli(string imeNaArtikl = "Unknown", int golemina = -1, int cena = -1, const tm &donesenVoProdavnica = {}, int kolicestvo = -1);

    bool presmetajNabavka() override;

};


#endif //P1_KOSULI_H
