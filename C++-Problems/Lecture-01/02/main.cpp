#include <iostream>

/*
 * 2.	Нaпиши С++ програм со две посебни функции кои едноставно ја триплираат вредноста на променливата count дефинирана во main.
 * Овие функции се:
 * a.	Функцијата tripleCallByValue која предава копија од count,
 * ја триплира нејзината вредност и ја враќа новата вредност
 * b.	Функцијата tripleCallByReference која ja предава count како референцен параметар,
 * ја триплира самата променлива и ја враќа новата вредност на count

 */

using namespace std;

int tripleCallByValue(int count) {
    count *= 3;
    return count;
}

int tripleCallByReference(int &count) {
    count *= 3;
    return count;
}

int main() {
    int n = 3;
    tripleCallByValue(n);
    cout << n << endl;
    tripleCallByReference(n);
    cout << n << endl;
    return 0;
}