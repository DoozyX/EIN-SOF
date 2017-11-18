#include "DvoDomenzionalni.h"

int DvoDomenzionalni::dvoDomenzionalniCount = 0;

DvoDomenzionalni::DvoDomenzionalni(int x, int y) : x(x), y(y) {
    ++dvoDomenzionalniCount;
}

int DvoDomenzionalni::getDvoDomenzionalniCount() {
    return dvoDomenzionalniCount;
}

DvoDomenzionalni::~DvoDomenzionalni() {
    --dvoDomenzionalniCount;

}

int DvoDomenzionalni::getX() const {
    return x;
}

void DvoDomenzionalni::setX(int x) {
    DvoDomenzionalni::x = x;
}

int DvoDomenzionalni::getY() const {
    return y;
}

void DvoDomenzionalni::setY(int y) {
    DvoDomenzionalni::y = y;
}

const string DvoDomenzionalni::toString() {
    return "x: " + to_string(x) + "\ty: " + to_string(y) + "\tArea: " + to_string(Area()) + "\tPerimeter: " +
           to_string(Peremiter());
}

double DvoDomenzionalni::Area() {
    return x * y;
}

double DvoDomenzionalni::Peremiter() {
    return x + y;
}

double DvoDomenzionalni::Volume() {
    return -1;
}
