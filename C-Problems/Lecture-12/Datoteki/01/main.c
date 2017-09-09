#include <stdio.h>
/*
 * 1. Вие сте сопственик на продавница за компјутерска опрема.
 * Треба да си направите апликација која ќе се грижи за хардверот што го имате на располагање,
 * количината на секој од деловите во продавницата и цените на деловите.
 * Напишете програма која иницијализира датотека “hardware.dat”, ви овозможува да внесете податоци за секој дел,
 * да ги излистате податоците за специфичен дел, да дадете комплетен листинг на состојбата во вашата продавница,
 * да избришете податоци за даден дел ако тој веќе го немате на лагер, да ажурирате податоци за даден дел и да правите продажба.
 * Под продажба се подразбира намалување на бројот на потребни делови од датотеката, доколку има толку делови, колку што бара купецот.
 * Да претпоставиме дека имаме оптички читач на касата и дека секој дел се вчитува со негов код.

За започнување со работа, користете ги следните информации:
Код 	Име на дел	Количина	Цена
3	glusec Mico	7	10.34
56	monitor Kiki3	5	65.09
75	tastatura Biko8	4	12.09
89	matploc Ziko32	6	87.09

 */

struct hardwareData {
    int code;
    char name[15];
    int quantity;
    double price;
};


int enterChoice(void);

void textFile(FILE *readPtr);

void updateRecord(FILE *fPtr);

void newRecord(FILE *fPtr);

void deleteRecord(FILE *fPtr);

void prodavaj(FILE *fPtr);

int main() {
    FILE *cfPtr;
    int choice;
    
    if ((cfPtr = fopen("hardware.dat", "rb+")) == NULL) {
        cfPtr = fopen("hardware.dat", "wb");
    }
    if ((cfPtr = fopen("hardware.dat", "rb+")) == NULL) {
        printf("Datotekata ne mozhe da se otvori.\n");
    } else {
        while ((choice = enterChoice()) != 6) {
            switch (choice) {
                case 1:
                    textFile(cfPtr);
                    break;
                case 2:
                    updateRecord(cfPtr);
                    break;
                case 3:
                    newRecord(cfPtr);
                    break;
                case 4:
                    deleteRecord(cfPtr);
                    break;
                case 5:
                    prodavaj(cfPtr);
                    break;
                default:
                    printf("Greshen izbor\n");
                    break;
            }
        }

        fclose(cfPtr);
    }

    return 0;
}


void textFile(FILE *readPtr) {
    FILE *writePtr;

    struct hardwareData del1 = {0, "", 0, 0.0};


    if ((writePtr = fopen("hardwareData.txt", "w")) == NULL) {
        printf("Datotekata ne mozhe da se otvori.\n");
    } else {
        rewind(readPtr);
        fprintf(writePtr, "%-8s%-16s%-11s%10s\n",
                "Code", "Name", "Quantity", "Price");


        while (!feof(readPtr)) {
            fread(&del1, sizeof(struct hardwareData), 1, readPtr);


            if (del1.code != 0) {
                fprintf(writePtr, "%-8d%-16s%-11d%10.2f\n",
                        del1.code, del1.name,
                        del1.quantity, del1.price);
            }
        }

        fclose(writePtr);
    }

}


void updateRecord(FILE *fPtr) {
    int Code;
    double newPrice;
    int broj;

    struct hardwareData del = {0, "", 0, 0.0};

    printf("Vnesi broj na del za azhuriranje ( 1 - 100 ): ");
    scanf("%d", &Code);

    fseek(fPtr, (Code - 1) * sizeof(struct hardwareData),
          SEEK_SET);

    fread(&del, sizeof(struct hardwareData), 1, fPtr);

    if (del.code == 0) {
        printf("Delot #%d nema informacii.\n", Code);
    } else {
        printf("%-8d%-16s%-11d%10.2f\n",
               del.code, del.name,
               del.quantity, del.price);

        printf("Vnesi kolku novi delovi se doneseni  ");
        scanf("%d", &broj);
        del.quantity += broj;
        printf("Vnesi kolku e novata price na delot  ");
        scanf("%lf", &newPrice);
        del.price = newPrice;
        printf("%-8d%-16s%-11d%10.2f\n",
               del.code, del.name,
               del.quantity, del.price);

        fseek(fPtr, (Code - 1) * sizeof(struct hardwareData),
              SEEK_SET);

        fwrite(&del, sizeof(struct hardwareData), 1, fPtr);
    }
}


void deleteRecord(FILE *fPtr) {
    struct hardwareData del;
    struct hardwareData blankdel = {0, "", 0, 0.0};

    int Code;

    printf("Vnesi broj na del za brishenje ( 1 - 100 ): ");
    scanf("%d", &Code);

    fseek(fPtr, (Code - 1) * sizeof(struct hardwareData),
          SEEK_SET);

    fread(&del, sizeof(struct hardwareData), 1, fPtr);

    if (del.code == 0) {
        printf("Delot so broj %d ne postoi.\n", Code);
    } else {
        fseek(fPtr, (Code - 1) * sizeof(struct hardwareData),
              SEEK_SET);

        fwrite(&blankdel,
               sizeof(struct hardwareData), 1, fPtr);
    }
}


void newRecord(FILE *fPtr) {
    struct hardwareData del2 = {0, "", 0, 0.0};

    int Code;

    printf("Vnesi broj na del ( 1 - 100 ): ");
    scanf("%d", &Code);


    fseek(fPtr, (Code - 1) * sizeof(struct hardwareData),
          SEEK_SET);


    fread(&del2, sizeof(struct hardwareData), 1, fPtr);

    if (del2.code != 0) {
        printf("Smetkata #%d vekje e sozdadena.\n",
               del2.code);
    } else {


        printf("Vnesi ime quantity i price\n? ");
        scanf("%s%d%lf", &del2.name, &del2.quantity,
              &del2.price);

        del2.code = Code;


        fseek(fPtr, (Code - 1) *
                    sizeof(struct hardwareData), SEEK_SET);


        fwrite(&del2, sizeof(struct hardwareData), 1, fPtr);
    }
}


int enterChoice(void) {
    int menuChoice;
    printf("\nVnesi izbor\n"
                   "1 - Sozdadi formatiran tekstualen fajl\n"
                   "    \"accounts.txt\" za pechatenje\n"
                   "2 - Azhuriraj kompjuterski del\n"
                   "3 - Dodadi nov kompjuterski del\n"
                   "4 - Izbrishi kompjuterski del\n"
                   "5 - Za prodazba na kompjuterski del\n? "
                   "6 - Za kraj\n");
    scanf("%d", &menuChoice);

    return menuChoice;
}

void prodavaj(FILE *fPtr) {
    int Code;
    double plati;
    int broj;
    char e;
    char c = 'n';

    struct hardwareData del = {0, "", 0, 0.0};

    printf("Vnesi kakov del sakas da kupis so code ");
    scanf("%d", &Code);

    fseek(fPtr, (Code - 1) * sizeof(struct hardwareData),
          SEEK_SET);

    fread(&del, sizeof(struct hardwareData), 1, fPtr);

    if (del.code == 0) {
        printf("Smetkata #%d nema informacii.\n", Code);
    } else {
        printf("%-8d%-16s%-11d%10.2f\n",
               del.code, del.name,
               del.quantity, del.price);

        printf("Vnesi kolku  delovi sakas da kupis  ");
        scanf("%d", &broj);

        if (del.quantity - broj >= 0) {
            del.quantity -= broj;
            plati = broj * del.price;
            printf("Dobro imam tolku delovi ke treba da platis %f denari\n", plati);
        } else {
            printf("Nema tolkav broj na delovi ima samo %d delovi\n", del.quantity);
            scanf("%c", &e);
            printf("sakas li da gi zemes site (d/n)\n");
            scanf("%c", &c);
        }
        if (c == 'd') {
            plati = del.quantity * del.price;
            del.quantity = 0;
            printf("Dobro imam tolku delovi ke treba da platis %f denari\n", plati);
        }
        printf("%-8d%-16s%-11d%10.2f\n",
               del.code, del.name,
               del.quantity, del.price);

        fseek(fPtr, (Code - 1) * sizeof(struct hardwareData),
              SEEK_SET);

        fwrite(&del, sizeof(struct hardwareData), 1, fPtr);
    }
}
