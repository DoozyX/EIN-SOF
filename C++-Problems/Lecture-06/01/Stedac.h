#ifndef INC_01_STEDAC_H
#define INC_01_STEDAC_H

#include "Covek.h"

class Stedac {
private:
    static double kamata;
    static int brojStedaci;
    Covek lice;
    double balance;
    double kredit;
public:
    Stedac(const Covek &lice, double balance, double kredit);

    static double getKamata();

    static void setKamata(double kamata);

    static int getBrojStedaci();

    const Covek &getLice() const;

    void setLice(const Covek &lice);

    double getBalance() const;

    void setBalance(double balance);

    double getKredit() const;

    void setKredit(double kredit);

    void print();

    virtual ~Stedac();

};


#endif //INC_01_STEDAC_H
