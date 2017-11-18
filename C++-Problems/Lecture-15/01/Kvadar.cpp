#include "Kvadar.h"

int Kvadar::kvadarCount = 0;

Kvadar::Kvadar(int x, int y, int z) : TroDimenzionalni(x, y, z) {
    ++kvadarCount;

}

Kvadar::~Kvadar() {
    --kvadarCount;
}

double Kvadar::Area() {
    return TroDimenzionalni::Area();
}

double Kvadar::Peremiter() {
    return TroDimenzionalni::Peremiter();
}

double Kvadar::Volume() {
    return TroDimenzionalni::Volume();
}
