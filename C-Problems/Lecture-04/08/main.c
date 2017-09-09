#include <stdio.h>
/*
 * 8.      Една стоковна куќа продава 5 производи чии цени се дадени во долната табела
Производ број	Цена
1	50.5
2	45.6
3	32.8
4	65.3
5	20.0
Да се напише програм кој чита серија од парови броеви за:
а) број на производ
б) количина продадена во текот на денот
Програмот треба да ја користи switch наредбата за да ја одреди цената за секој  производ. Програмот треба да ја пресмета и испечати вкупната продадена вредност за секој од производите посебно, како и вкупната сума за сите производи продадени во текот на денот.

 */
int main() {
    double totalnow = 0, totalday = 0;
    int number, quantity;

    while (1) {
        printf("Enter number: (-1 for Exit)");
        scanf("%d", &number);
        if (number == -1) {
            break;
        }
        printf("Enter quantity:");
        scanf("%d", &quantity);
        switch (number) {
            case 1:
                totalnow = 50.5 * quantity;
                break;
            case 2:
                totalnow = 45.6 * quantity;
                break;
            case 3:
                totalnow = 32.8 * quantity;
                break;
            case 4:
                totalnow = 65.3 * quantity;
                break;
            case 5:
                totalnow = 20.0 * quantity;
                break;
            default:
                printf("Wrong Product number.");
        }
        printf("Price: %.02f\n", totalnow);
        totalday += totalnow;
    }

    printf("Total for today: %.02f\n", totalday);
    return 0;
}