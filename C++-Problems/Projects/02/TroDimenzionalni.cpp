#include "TroDimenzionalni.h"

int TroDimenzionalni::troDimenzionalniCount = 0;

TroDimenzionalni::TroDimenzionalni(int x, int y, int z) : DvoDomenzionalni(x, y), z(z) {
    ++troDimenzionalniCount;
}

TroDimenzionalni::~TroDimenzionalni() {
    --troDimenzionalniCount;
}

int TroDimenzionalni::getZ() const {
    return z;
}

void TroDimenzionalni::setZ(int z) {
    TroDimenzionalni::z = z;
}

const string TroDimenzionalni::toString() {
    return DvoDomenzionalni::toString() + "\tz: " + to_string(z) + "\tVolume: " + to_string(Volume());
}

double TroDimenzionalni::Area() {
    return DvoDomenzionalni::Area() * 2 + getX() * 2 * getZ() + getY() * 2 * getZ();
}

double TroDimenzionalni::Peremiter() {
    return 2* DvoDomenzionalni::Peremiter() + 4*getZ() ;
}

double TroDimenzionalni::Volume() {
    return DvoDomenzionalni::Area() * getZ();
}
