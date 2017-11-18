/*
1. Нека е дадена класата Complex со кодовите презентирани подолу (дефиниција на класа,
 дефиниција на функции цхленки и драјвер за класатa Complex). Оваа класа овозможува операции со комплексни броеви.
 Тоа се броеви од облик realenDel + imaginarenDel * i, каде i има вредност √1

а) да се модифицира класата така да овозможи влез и излез на комплексни броеви преку преклопување на операторите << и >>.
 Ова треба да ја замени функцијата print() од класата, која во вашето решение не треба да постои.
б) да се преклопи оператор за множење кој ќе овозможи множење на: два комплексни броја,
 комплексен со цел број и цел број со комплексен број.
в) да се преклопат операорите == и != кои ќе овозможат споредување на два комплексни броја.
г) да се преклопат операторите +=, -= и *= со помош на ваќе направените функции за преклопување на +, - и *.
 */
#include <iostream>

using std::cout;
using std::endl;

#include "Complex.h"

int main() {
    Complex x, y, z;
    cout << "Enter x and y in form (x, y): ";
    cin >> y;
    cin.get();
    cout << "Enter x and y in form (x, y): ";
    cin >> z;
    cout << endl;

    cout << "x: ";
    cout << x;
    cout << "\ny: ";
    cout << y;
    cout << "\nz: ";
    cout << z;

    x = y + z;
    cout << "\n\nx = y + z:\n";
    cout << x;
    cout << " = ";
    cout << y;
    cout << " + ";
    cout << z;

    x = y - z;
    cout << "\n\nx = y - z:\n";
    cout << x;
    cout << " = ";
    cout << y;
    cout << " - ";
    cout << z;
    cout << endl;

    x = y * z;
    cout << "\n\nx = y * z:\n";
    cout << x;
    cout << " = ";
    cout << y;
    cout << " * ";
    cout << z;
    cout << endl;

    x *= y;
    cout << "\n\nx *= y:\n";
    cout << x;
    cout << " *= ";
    cout << y;
    cout << endl;

    x = 2 * y;
    cout << "\n\nx = 2 * y:\n";
    cout << x;
    cout << "= 2 * ";
    cout << y;
    cout << endl;

    return 0;
}


