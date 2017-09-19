#include <iomanip>
#include "Complex.h"

using std::cout;

// Konstruktor
Complex::Complex(double r, double i)
        : real(r), imaginary(i) {}

// Preklopi operator za sobiranje
Complex Complex::operator+(const Complex &operand2) const {
    return Complex(real + operand2.real,
                   imaginary + operand2.imaginary);
} // kraj na funkcijata operator+

// Preklopi operator za odzemanje
Complex Complex::operator-(const Complex &operand2) const {
    return Complex(real - operand2.real,
                   imaginary - operand2.imaginary);
} // kraj na funkcijata operator-

// Preklopi operator =
Complex &Complex::operator=(const Complex &right) {
    real = right.real;
    imaginary = right.imaginary;
    return *this;   // ovozmozhuva kaskadiranje
} // ekraj na funkcijata operator=

ostream &operator<<(ostream &output, const Complex &num) {
    output << '(' << num.real << ", " << num.imaginary << ')';
    return output;
}

istream &operator>>(istream &input, Complex &num) {
    input.ignore();
    input >> num.real;
    input.ignore(2);
    input >> num.imaginary;
    input.ignore();
    return input;
}

Complex Complex::operator*(const Complex &right) {
    return Complex(real * right.real, imaginary * right.imaginary);
}

Complex Complex::operator*(int num) {
    return Complex(real * num, imaginary * num);
}

Complex operator*(int num, const Complex &complex) {
    return Complex(num* complex.real, num* complex.imaginary);
}

bool Complex::operator==(const Complex &right) {
    return real == right.real && imaginary == right.imaginary;
}

bool Complex::operator!=(const Complex &right) {
    return !((*this) == right);
}

Complex &Complex::operator+=(const Complex &right) {
    *this = (*this) + right;
    return *this;
}

Complex &Complex::operator-=(const Complex &right) {
    *this = (*this) - right;
    return *this;
}

Complex &Complex::operator*=(const Complex &right) {
    *this = (*this) * right;
    return *this;
}
