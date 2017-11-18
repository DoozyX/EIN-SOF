#include "Kosuli.h"

Kosuli::Kosuli(string imeNaArtikl, int golemina, int cena, const tm &donesenVoProdavnica, int kolicestvo) : Artikl(
        std::move(imeNaArtikl),
        golemina, cena,
        donesenVoProdavnica, kolicestvo
) {}

bool Kosuli::presmetajNabavka() {
    return kolicestvo == 0;
}
