#ifndef P1_ARTIKL_H
#define P1_ARTIKL_H

#include <iostream>
#include <ctime>
#include <utility>

using namespace std;

class Artikl {
protected:
    string imeNaArtikl;
    int golemina;
    int cena;
    tm donesenVoProdavnica;
    int kolicestvo;
public:
    explicit Artikl(string imeNaArtikl = "Unknown", int golemina = -1, int cena = -1,
                    const tm &donesenVoProdavnica = {}, int kolicestvo = -1);

    const string &getImeNaArtikl() const;

    void setImeNaArtikl(const string &imeNaArtikl);

    int getGolemina() const;

    void setGolemina(int golemina);

    int getCena() const;

    void setCena(int cena);

    const tm &getDonesenVoProdavnica() const;

    void setDonesenVoProdavnica(const tm &donesenVoProdavnica);

    virtual bool presmetajNabavka() = 0;

    virtual string toString();

    virtual void setArtikl();
};


#endif //P1_ARTIKL_H
