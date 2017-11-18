#include "Pravoagolnik.h"

int Pravoagolnik::pravoagolnikCount = 0;

Pravoagolnik::Pravoagolnik(int x, int y) : DvoDomenzionalni(x, y) {
    ++pravoagolnikCount;
}

Pravoagolnik::~Pravoagolnik() {
    --pravoagolnikCount;
}

double Pravoagolnik::Area() {
    return getX() * getY();
}

double Pravoagolnik::Peremiter() {
    return 2 * getX() + 2 * getY();
}
