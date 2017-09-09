/*
 * Проект 3. Да се изработи до понеделник 29.01.2007
Да се направи програма во која ќе се сместат оцени на студенти по предмети (дводимензионална низа во која во редици се студентите,
а во колони се нивните оцени по 5 предмети). Програмата треба да го нуди следниот кориснички посредник:

Vnesi izbor:
0 Ispechati ja nizata so oceni
1 Najdi ja maksimalnataocena
2 Najdi ja minimalnata ocena
3 Ispecati ja prosechnata ocena za sekoja student
4 Kraj

Програмата да се реши со користење на покажувачи до функциите max, min, pecatiNiza, рrosek.
Покажувачите кон четирите функции да се сместат во низата obrabotiOceni,
а како индекс за повикување на секоја од функкциите да се користи изборот од корисничкото мени.

Забелешка: Една рестрикција при користење на покажувачи кон функции е што сите функции мора да се од ист тип.
Покажувачите мора да се со иста повратна вредност и да примаат аргументи од ист тип.
Наједноставно би било кога ниту една од функциите нема да враќа вредност, но ќе печати вредности,
а како аргумент би се предавале оцени за еден студент.
*/
#include <stdio.h>

#define GRADES 5

/* prototipovi */
void pecatiNiza(int studentWithGrades[][GRADES], int n, int studentID);

void max(int studentWithGrades[][GRADES], int n, int studentID);

void min(int studentWithGrades[][GRADES], int n, int studentID);

void prosek(int studentWithGrades[][GRADES], int n, int studentID);

int menu() {
    int choice;

    printf("Vnesi izbor:\n"
                   "0 Ispechati ja nizata so oceni\n"
                   "1 Najdi ja maksimalnataocena\n"
                   "2 Najdi ja minimalnata ocena\n"
                   "3 Ispecati ja prosechnata ocena za sekoja student\n"
                   "4 Kraj\n");
    scanf("%d", &choice);
    return choice;
}

int main() {
    int n;
    printf("Enter how many students:");
    scanf("%d", &n);

    int studentWithGrades[n][GRADES];

    for (int i = 0; i < n; ++i) {
        printf("Enter for student %d: ", i + 1);
        for (int j = 0; j < GRADES; ++j) {
            scanf("%d ", &studentWithGrades[i][j]);
        }
        printf("\n");
    }
    void (*obrabotiOceni[4])(int [][GRADES], int, int) = {pecatiNiza, max, min, prosek};

    int choice = menu();


    while (choice >= 0 && choice < 4) {
        int studentID;
        printf("Enter student number (1-max students):");
        scanf("%d", &studentID);
        (*obrabotiOceni[choice])(studentWithGrades, n, studentID - 1);
        choice = menu();
    }

    return 0;

} /* kraj main */

void pecatiNiza(int studentWithGrades[][GRADES], int n, int studentID) {
    printf("Grades for %d are: \n",studentID+1);
    for (int i = 0; i < GRADES; ++i) {
        printf("%d ", studentWithGrades[studentID][i]);
    }
    printf("\n");
}

void max(int studentWithGrades[][GRADES], int n, int studentID) {
    int max = studentWithGrades[studentID][0];

    for (int i = 1; i < GRADES; ++i) {
        if (studentWithGrades[studentID][i] > max) {
            max = studentWithGrades[studentID][i];
        }
    }
    printf("Max is: %d\n", max);
}

void min(int studentWithGrades[][GRADES], int n, int studentID) {
    int min = studentWithGrades[studentID][0];

    for (int i = 1; i < GRADES; ++i) {
        if (studentWithGrades[studentID][i] < min) {
            min = studentWithGrades[studentID][i];
        }
    }
    printf("Min is: %d\n", min);
}

void prosek(int studentWithGrades[][GRADES], int n, int studentID) {
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < GRADES; ++j) {
            sum += studentWithGrades[i][j];
        }

        printf("Average for student %d is %.02f\n", i+1, (float)sum / GRADES);
    }
}