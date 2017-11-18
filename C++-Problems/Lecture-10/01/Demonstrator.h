//
// Created by doozy on 16-Nov-17.
//

#ifndef INC_01_DEMONSTRATOR_H
#define INC_01_DEMONSTRATOR_H


#include "Vraboten.h"

class Demonstrator : public Vraboten{
private:
    int rabotnoVremeOd;
    int rabotnoVremeDo;
public:
    explicit Demonstrator(const string &ime = "Unknown", const string &prezime = "Unknown", int godinaNaVrabotuvanje = 0, int rabotnoVremeOd = 0, int rabotnoVremeDo = 0);

    int getRabotnoVremeOd() const;

    void setRabotnoVremeOd(int rabotnoVremeOd);

    int getRabotnoVremeDo() const;

    void setRabotnoVremeDo(int rabotnoVremeDo);

    const string toString();

    void setVraboten() override;

};


#endif //INC_01_DEMONSTRATOR_H
