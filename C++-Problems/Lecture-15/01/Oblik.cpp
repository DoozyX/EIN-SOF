#include "Oblik.h"

int Oblik::countOblik = 0;

Oblik::Oblik() {
    ++countOblik;
}

int Oblik::getCountOblik() {
    return countOblik;
}

Oblik::~Oblik() {
    --countOblik;
}
