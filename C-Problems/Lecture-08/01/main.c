#include <stdio.h>

/*
 * 1.      Напиши програм кој вчитува вредности за температури за секој ден од месецот и наоѓа средна месечна температура.
 * Да се земе предвид дека различни месеци имаат различен број на денови.
 */
int main() {
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    float totalTemperature = 0;

    printf("Enter month number (1-12)");
    scanf("%d", &month);

    for (int i = 0 ; i < monthDays[month-1]; ++i) {
        float temp;
        scanf("%f", &temp);
        totalTemperature += temp;
    }

    printf("Average Temperature: %.03f", totalTemperature / monthDays[month-1]);

    return 0;
}