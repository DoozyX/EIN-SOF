#ifndef INC_01_COMPLEX_H
#define INC_01_COMPLEX_H


#include <iostream>

using namespace std;

class Complex {
public:
    explicit Complex(double = 0.0, double = 0.0);

    Complex operator+(const Complex &) const;

    Complex operator-(const Complex &) const;

    Complex &operator=(const Complex &);

    Complex operator*(const Complex &);

    bool operator==(const Complex &);

    bool operator!=(const Complex &);

    Complex &operator+=(const Complex &);

    Complex &operator-=(const Complex &);

    Complex &operator*=(const Complex &);


    Complex operator*(int);

    friend Complex operator*(int, const Complex &);

    friend ostream &operator<<(ostream &, const Complex &);

    friend istream &operator>>(istream &, Complex &);

private:
    double real;
    double imaginary;
};

#endif //INC_01_COMPLEX_H
