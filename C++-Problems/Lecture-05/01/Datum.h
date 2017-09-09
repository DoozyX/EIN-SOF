
#ifndef INC_01_DATUM_H
#define INC_01_DATUM_H


class Datum {
private:
    int den;
    int mesec;
    int godina;

    bool checkDay(int d);

public:
    Datum(int d, int m, int g);

    Datum();

    int getDen() const;

    int getMesec() const;

    int getGodina() const;

    void print();

    int toNumber();

    int daysDifference(Datum data);

};


#endif //INC_01_DATUM_H
