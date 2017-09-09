#include <iostream>

/*
 * 1.	Напиши програм кој кој користи функциски урнек min за да го определи помалиот од двата аргументи.
 * Тестирај го прогамот со цели броеви, реални броеви и карактери.
 */

template<class T>
T min(T value1, T value2) {
    if (value1 < value2) {
        return value1;
    }
    return value2;
}


int main() {
    std::cout << min(1.221, 0.5123123) << std::endl;
    return 0;
}