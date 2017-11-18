#ifndef INC_01_ZIVOTNO_H
#define INC_01_ZIVOTNO_H

#include <iostream>
#include <ctime>

using namespace std;

class Zivotno {
protected:
    tm datumNaRaganje;
    tm datumNaDonesuvanjeVoZoo;
    char pol; //(m/z)
    string ime;
    tm datumNaPoslednaVakcinacija;
public:
    explicit Zivotno(const tm &datumNaRaganje = {}, const tm &datumNaDonesuvanjeVoZoo = {}, char pol = 'm', const string &imel = "Unknown",
            const tm &datumNaPoslednaVakcinacija = {});

    static const string getPolName(char c);

    static const string getDateString(tm date);

    const static string getDaNeString(char c);

    const tm &getDatumNaRaganje() const;

    void setDatumNaRaganje(const tm &datumNaRaganje);

    const tm &getDatumNaDonesuvanjeVoZoo() const;

    void setDatumNaDonesuvanjeVoZoo(const tm &datumNaDonesuvanjeVoZoo);

    char getPol() const;

    void setPol(char pol);

    const string &getImel() const;

    void setImel(const string &imel);

    const tm &getDatumNaPoslednaVakcinacija() const;

    void setDatumNaPoslednaVakcinacija(const tm &datumNaPoslednaVakcinacija);

    virtual bool presmetajVakcinacija() = 0;

    virtual void setZivotno();

    virtual const string toString();
};


#endif //INC_01_ZIVOTNO_H
