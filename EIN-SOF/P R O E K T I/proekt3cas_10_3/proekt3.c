/* Programa Proekt3.c */
/* za prikaz na ocenki i baranje na prosecna minimalna i */
/* maksimalna ocenka za daden ucenik */
#include<stdio.h>
/* prototip na funkcijata max */
void max(const int pole[][5],int Ucenik);
/* prototip na funkcijata pecatiNiza */
void pecatiNiza(const int pole[][5],int Ucenik);
/* prototip na funkcijata min */
void min(const int pole[][5],int Ucenik);
/* prototip na funkcijata prosek */
void prosek(const int pole[][5],int Ucenik);
/* pocetok na glavnata programa */
int main()
{
    int Ucenik; /*Vnesuvame za koj ucenik gi pravime presmetkite*/
    int BrUcenici; /* go vnesuvame brojot na ucenicite */
    int pole[BrUcenici][5];
    int i,j; /* brojaci koi gi koristime za dvizenje niz poleto */
    /* inicijaliziraj niza od 4 pokazhuvachi kon funkcii taka da
    sekoja zema int argument i vrakja void */
    void (*obrabotiOceni[ 4 ])( const int pole[][5],int Ucenik ) = { pecatiNiza,max,min,prosek };
    int izbor; /* promelniva koja go sodrzhi izborot na korisnikot */
    printf("Vnesi go brojot na ucenici\n");
    scanf("%d",&BrUcenici);
    for (i=0;i<BrUcenici;i++)
    {
        printf("Sega vnesuvaj gi ocenkite za %d-iot ucenik\n",i);
        for (j=0;j<5;j++)
        {
            scanf("%d",&pole[i][j]);
            while (pole[i][j]<0 || pole[i][j]>5)
            {
                printf("Vnesovte nepostoecka ocenka obidete se povtorno\n");
                scanf("%d",&pole[i][j]);
            }
        }
    }
    printf("Vnesi  koj ucenik sakas da se obraboti\n");
    scanf("%d",&Ucenik);
    while (Ucenik>=BrUcenici || Ucenik<0)
    {
        printf("Vnesovte nepostoecki ucenik, obidete se povtorno\n");
        scanf("%d",&Ucenik);
    }
    printf("Vnesi 0 za pecatenje na ocenkite na ucenikot \n");
    printf("Vnesi 1 za naoganje na najglomata ocenka na ucenikot \n");
    printf("Vnesi 2 za naoganje na najmalata ocenka na ucenikot \n");
    printf("Vnesi 3 za presmetuvanje na prosekot na ucenikot \n");
    printf("Vnesi 4 za kraj\n");
    scanf("%d",&izbor);
    /* procesiraj go izborot na korisnikot */
    while (izbor>=0 && izbor<4)
    {
        /* povikaj ja funkcijata koja se naogja na lokacijata na izborot na korisnikot
        vo nizata obrabotiOceni i predaj i gi argumentite */
        (*obrabotiOceni[izbor])(pole,Ucenik);
        printf("Vnesi  koj ucenik sakas da se obraboti\n");
        scanf("%d",&Ucenik);
        while (Ucenik>=BrUcenici || Ucenik<0)
        {
            printf("Vnesovte nepostoecki ucenik, obidete se povtorno\n");
            scanf("%d",&Ucenik);
        }
        printf("Vnesi 0 za pecatenje na ocenkite na ucenikot \n");
        printf("Vnesi 1 za naoganje na najglomata ocenka na ucenikot \n");
        printf("Vnesi 2 za naoganje na najmalata ocenka na ucenikot \n");
        printf("Vnesi 3 za presmetuvanje na prosekot na ucenikot \n");
        printf("Vnesi 4 za kraj\n");
        scanf("%d",&izbor);
    }
    /* kraj while */
    printf( "Izvrshuvanjeto na programata zavrshi.\n" );
    return 0; /* uspeshen kraj */
} /* kraj main */
/* pocetok na funkcijata za pecatenje na ocenkite */
void pecatiNiza(const int pole[][5],int Ucenik)
{
    int i;
    printf("Ocenkite na ucenikot %d se:\n",Ucenik);
    for (i=0;i<5;i++)
    printf("%d   ",pole[Ucenik][i]);
    printf("\n");
}  /*kraj na funkcijata*/
/*pocetok na funkcijata za baranje najgolema ocenka */
void max(const int pole[][5],int Ucenik)
{
    int i;
    int max=pole[Ucenik][0];
    for (i=1;i<5;i++)
    {
        if (pole[Ucenik][i]>max)
        max=pole[Ucenik][i];
    }
    printf("Najgolemata ocenka na %d-iot e %d\n",Ucenik,max);
}  /* kraj na funkcijata */
 /* pocetok na funkcijata za baranje najmala ocenka */
 void min(const int pole[][5],int Ucenik)
{
    int i;
    int min=pole[Ucenik][0];
    for (i=1;i<5;i++)
    {
        if (pole[Ucenik][i]<min)
        min=pole[Ucenik][i];
    }
     printf("Najmalata ocenka na %d-iot e %d\n",Ucenik,min);
}   /* kraj na funkcijata */
 /* pocetok na finkcijata za baranje prosek */
void prosek(const int pole[][5],int Ucenik)
{
    int i;
    float prosek=0.0;
    for (i=0;i<5;i++)
    prosek+=pole[Ucenik][i];
    printf("Prosekot na %d-iot ucenik e %.2f\n",Ucenik,prosek/5);
}  /* kraj na funkcijata */

    


