#ifndef INC_01_MATRICA_H
#define INC_01_MATRICA_H

#include <iostream>

using namespace std;

class Matrica {
private:
    int **matrix;
    int row;
    int column;
public:

    explicit Matrica(int row = 2, int column = 2);

    explicit Matrica(double num);


    Matrica(const Matrica &m);

    Matrica &operator=(const Matrica &m);

    friend ostream &operator<<(ostream &output, const Matrica &m);

    friend istream &operator>>(istream &input, Matrica &m);

    class Proxy {
    public:
        explicit Proxy(int *_array, int column) : _array(_array), _column(column) {}

        int &operator[](int index) {
            if (index < 0 || _column < index) {
                cout << "Wrong Column\n";
                return _array[0];
            }
            return _array[index];
        }

    private:
        int _column;
        int *_array;
    };

    Proxy operator[](int index);

    Matrica operator+(Matrica &m);

    Matrica operator-(Matrica &m);

    Matrica operator*(Matrica &m);

    Matrica operator*(int n);

    friend Matrica operator*(int n, Matrica &m);

    bool operator==(Matrica &m);

    bool operator!=(Matrica &m);

    ~Matrica();
};


#endif //INC_01_MATRICA_H
