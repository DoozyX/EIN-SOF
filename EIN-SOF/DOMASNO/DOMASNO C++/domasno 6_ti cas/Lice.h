//Lice.h
#ifndef LICE_H
#define LICE_H

class Lice {
public:
    Lice(){};
    Lice(char *,char *,char *,char *);
    void printLice() const;


private:
    char ime[25];
    char prezime[25];
    char adresa[50];
    char telefon[15];
  };

#endif