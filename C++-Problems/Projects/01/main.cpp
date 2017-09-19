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

    cin >> matrix;
    cout << matrix;

    //cout << matrix[0][0];
    cout << endl;

    Matrica matrix2(2.0);
    cout << "matrix2:\n";
    cout << matrix2 << endl;
    cout << "test\n";
    Matrica temp(2.0);
    cout << "test\n";
    cout << temp << endl;
    cout << "test\n";
    //(matrix + matrix2);
    cout << temp << endl;

/*    temp = matrix - matrix2;
    cout << temp << endl;

    temp = matrix * matrix2;
    cout << temp << endl;


    temp = matrix * 3;
    cout << temp << endl;

    temp = 3 * matrix;
    cout << endl;
    bool test = (matrix == matrix2);

    if (test) {
        cout << "Same";
    } else {
        cout << "Different";
    }
    cout << endl;*/
    return 0;
}
