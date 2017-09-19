//
// Created by doozy on 12-Sep-17.
//

#ifndef INC_01_DROPKI_H
#define INC_01_DROPKI_H


class Dropki {
private:
    int broitel;
    int imenitel;
public:
    explicit Dropki(int br = -1, int im = -1);

    void setDropka(int br, int im);

    unsigned int gcd();

    void reduceDropka();

    Dropki operator+(Dropki dropka);

    Dropki operator-(Dropki dropka);

    Dropki operator*(Dropki dropka);

    Dropki operator/(Dropki dropka);

    Dropki operator+(int num);

    Dropki operator-(int num);

    Dropki operator*(int num);

    Dropki operator/(int num);

    void pecati();

    void pecatiBroj();

};


#endif //INC_01_DROPKI_H
