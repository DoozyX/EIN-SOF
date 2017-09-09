#include <iostream>
#include <math.h>
/*
 * 1.	Напиши С++ програм кој користи inline функција circleArea која бара влез од корисникот за радиус на круг,
 * ја пресметува и ја печати површината на кругот.
 */

using namespace std;

inline void circleArea() {
    double radius;
    cin >> radius;
    cout << radius *radius * M_PI;
}

int main() {
    circleArea();
    return 0;
}