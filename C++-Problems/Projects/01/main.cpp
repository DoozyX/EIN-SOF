/*
 * Да се направи класа Matrica која работи со дводимензионална низа од цели броеви.
 * Да се преклопат  оператори за влез и екстракција на потоци, индексен оператор,
 * оператор за собирање, одземање и множење (низа со низа, низа со цел број и цел број со низа).
 * Да се преклопат оператори за еднаквост и нееднаквост на низа, копирачки конструктор, конверзиски конструктор.
 * Да се постави кориснички изборник за опции во главната програма.
 * Може да се користат колку сакаме други помошни функции.
 */


#include "Matrica.h"

using namespace std;

int main() {
    Matrica matrix;

    cout << "Matrix:" << endl;
    cin >> matrix;
    cout << matrix;
    cout << "Matrix[0][0]:" << endl;
    cout << matrix[0][0];
    cout << endl;
    cout << "Matrix[3][3]:" << endl;
    cout << matrix[3][3];
    cout << endl;

    Matrica matrix2(2.0);
    cout << "matrix2:\n";
    cout << matrix2 << endl;

    cout << "temp:" << endl;

    Matrica temp(2.0);
    cout << temp << endl;
    temp = (matrix + matrix2);
    cout << "matrix 1 + matrix2 = " << endl;
    cout << temp << endl;

    cout << "matrix 1 - matrix2 = " << endl;
    temp = matrix - matrix2;
    cout << temp << endl;
    cout << "matrix 1 * matrix2 = " << endl;
    temp = matrix * matrix2;
    cout << temp << endl;

    cout << "matrix 1 * 3 = " << endl;
    temp = matrix * 3;
    cout << temp << endl;

    cout << "3* matrix1 = " << endl;
    temp = 3 * matrix;
    cout << temp << endl;
    bool test = (matrix == matrix2);

    if (test) {
        cout << "Same";
    } else {
        cout << "Different";
    }
    cout << endl;
    return 0;
}
