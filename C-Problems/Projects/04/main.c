#include <stdio.h>

/*
 * Проект 4:

1. Да се напише програм кој дефинира тип vraboten, кој има полиња за ID, име, презиме, возраст, пол, брачна состојба,
кредибилност (цел број од 0-100 кој означува кредитна историја, што поголем број,
тоа бил вработениот поуспешен во враќање кредити), адреса, тековна плата и поранешна плата.

Да се овозможи внесување на повеќе вработени во низа и да се направат 3 сортирања (sort_kred, sort_tekovnaPlata,
sort_minataPlata) по кредибилност, по тековна и по поранешна плата.

Да се направи и функција koregiraj_vraboten која овозможува предефинирање на податоците за еден вработен внесен
преку неговиот ID.

Да се направи и функција koregiraj_kredibilnost која за сите вработени ја корегира
нивната кредибилност на следниот начин:
ако тековната плата им е поголема од претходната,
тогаш ја зголемува кредибилноста за 3 и ја изедначува тековната со поранешната плата,
ако тековната плата е помала од претходната,
тогаш ја намалува кредибилноста за 3 и ја изедначува тековната од поранешната плата,
инаку ништо не менува за вработениот.

Да се обезбеди мени кое на корисникот на апликацијата ќе му овозможи која функција да ја повика.
Може да има максимум 50 вработени, но корисникот на апликацијата го внесува бројот на вработени кои сака да ги внесе,
на почетоткот на користењето на апликацијата.
 */
#define N_FUNCTIONS 6

typedef struct {
    int ID;
    char name[100];
    char surname[100];
    int age;
    int gender;
    int married;
    int credibility;
    char address[100];
    int currentPayment;
    int previousPayment;
} vraboten;

vraboten enterVraboten() {
    vraboten person;

    puts("Enter Name:");
    scanf("%s", person.name);

    puts("Enter Surname:");
    scanf("%s", person.surname);

    puts("Enter age:");
    scanf("%d", &person.age);

    puts("Enter gender( 0 female, 1 male):");
    scanf("%d", &person.gender);

    puts("Enter if married( 0 no, 1 yes):");
    scanf("%d", &person.married);

    puts("Enter credibility( 0-100):");
    scanf("%d", &person.married);

    puts("Enter Address:");
    scanf("%s", person.address);

    puts("Enter Current Payment:");
    scanf("%d", &person.currentPayment);

    puts("Enter Previous Payment:");
    scanf("%d", &person.previousPayment);

    return person;
}

void sort_kred(vraboten array[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (array[i].credibility > array[j].credibility) {
                vraboten temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void sort_tekovnaPlata(vraboten array[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (array[i].currentPayment > array[j].currentPayment) {
                vraboten temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void sort_minataPlata(vraboten array[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (array[i].previousPayment > array[j].previousPayment) {
                vraboten temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void koregiraj_vraboten(vraboten array[], int n) {
    int ID;
    puts("Enter ID of person to edit:");
    scanf("%d", &ID);
    array[ID - 1] = enterVraboten();
}

void koregiraj_kredibilnost(vraboten array[], int n) {
    for (int i = 0; i < n; ++i) {
        if (array[i].currentPayment > array[i].previousPayment) {
            array[i].credibility += 3;
            array[i].previousPayment = array[i].currentPayment;
        } else if (array[i].currentPayment < array[i].previousPayment) {
            array[i].credibility -= 3;
            array[i].previousPayment = array[i].currentPayment;
        }
    }
}

void print(vraboten array[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("\nVraboten id = %d\n", i + 1);
        printf("Name: %s\n", array[i].name);

        printf("Surname %s\n", array[i].surname);

        printf("Age %d\n", array[i].age);

        printf("Gender %d\n", array[i].gender);

        printf("Married %d\n", array[i].married);

        printf("Credibility%d\n", array[i].married);

        printf("Address %s\n", array[i].address);

        printf("Current Payment %d\n", array[i].currentPayment);

        printf("Previous Payment %d\n", array[i].previousPayment);
    }
    printf("\n");
}

int menu() {
    int choice;
    printf("Vnesi izbor:\n"
                   "0 Sortiraj spored kredibilnost\n"
                   "1 Sortiraj spored tekovna plata\n"
                   "2 Sortiraj spored minata plata\n"
                   "3 Koregiraj vraboten\n"
                   "4 Koregiraj kredibilnost\n"
                   "5 Pecati\n"
                   "6 Kraj\n");
    scanf("%d", &choice);
    return choice;
}


int main() {
    vraboten vraboteni[50];

    int n;

    puts("How many people?");
    scanf("%d", &n);

    void (*functions[N_FUNCTIONS])(vraboten [], int) = {sort_kred, sort_tekovnaPlata, sort_minataPlata, koregiraj_vraboten,
                                              koregiraj_kredibilnost, print};

    for (int i = 0; i < n; ++i) {
        printf("Enter data for person with id %d \n", i + 1);
        vraboteni[i] = enterVraboten();
        vraboteni[i].ID = i + 1;
    }

    int choice = menu();


    while (choice >= 0 && choice < N_FUNCTIONS) {
        (*functions[choice])(vraboteni, n);
        choice = menu();
    }
    return 0;
}