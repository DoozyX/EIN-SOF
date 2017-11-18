#include "Pantaloni.h"


Pantaloni::Pantaloni(string imeNaArtikl, int golemina, int cena, const tm &donesenVoProdavnica, int kolicestvo)
        : Artikl(move(
        imeNaArtikl),
                 golemina, cena,
                 donesenVoProdavnica, kolicestvo) {
    tm temp = donesenVoProdavnica;
    mktime(&temp);
    datumNaSlednaNabavka.tm_year = temp.tm_year;
    datumNaSlednaNabavka.tm_mon = temp.tm_mon + 1;
    datumNaSlednaNabavka.tm_mday = temp.tm_mday;

}

string Pantaloni::toString() {
    return Artikl::toString() + "\nSledna nabavka: " + to_string(datumNaSlednaNabavka.tm_mday) + "." +
           to_string(datumNaSlednaNabavka.tm_mon) + "." + to_string(datumNaSlednaNabavka.tm_year);
}

bool Pantaloni::presmetajNabavka() {
    time_t now = time(nullptr);
    tm *ltm = localtime(&now);

    tm temp = *ltm;

    temp.tm_mday = datumNaSlednaNabavka.tm_mday;
    temp.tm_mon = datumNaSlednaNabavka.tm_mon - 1;
    temp.tm_year = datumNaSlednaNabavka.tm_year - 1900;

    time_t x = mktime(ltm);
    time_t y = mktime(&temp);
    if (x != (time_t) (-1) && y != (time_t) (-1)) {
        double difference = difftime(y, x) / (60 * 60 * 24);
        return difference < 8;
    }
    return false;
}

void Pantaloni::setArtikl() {
    Artikl::setArtikl();
    tm temp = donesenVoProdavnica;
    mktime(&temp);
    datumNaSlednaNabavka.tm_year = temp.tm_year;
    datumNaSlednaNabavka.tm_mon = temp.tm_mon + 1;
    datumNaSlednaNabavka.tm_mday = temp.tm_mday;
}

