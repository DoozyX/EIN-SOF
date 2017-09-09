 /* Proekt4.c*/
/*rabota so strukturi na vraboteni*/
#include <stdio.h>
#define size 50

    struct vraboten{
        int  ID;
        char ime[25];
        char prezime[50];
        int  vozrast;
        char pol;
        char bracnaSostojba[50];
        int  kredibilnost;
        char adresa[50];
        int  tekovnaPlata;
        int  poranesnaPlata;
     };

int brVraboteni; /*ovde gi vnesuvame brojot na vraboteni*/
/*prototipi na funkciite*/
void sortKredibilnost(struct vraboten Vraboten[size]);
void sortTekovnaPlata(struct vraboten Vraboten[size]);
void sortMinataPlata(struct vraboten Vraboten[size]);
void koregirajVraboten( int ID, struct vraboten Vraboten[size]);
void koregirajKredibilnost(struct vraboten Vraboten[size]);
void printaj(struct vraboten Vraboten[size]);
int main()
{
      struct vraboten Vraboten[size];
     int i; /*i go koristime kako brojac*/
     int f; /*so nego birame koe sortiranje da se izvrsi*/
     int ID; /*go vnesuvame ID to na vraboteniot koj treba da se azurira*/
     char c[1];
     /*ovde definirame niza od pokazuvaci kon funkcii koi gi povikuvame podocna*/
      void (*sortiranja[ 3 ])( struct vraboten Vraboten[size] ) = { sortKredibilnost,sortTekovnaPlata,sortMinataPlata};
printf("Vnesi go brojot na vrabotenite\n");
scanf("%d",&brVraboteni);
while (brVraboteni<0 || brVraboteni>size) /*vo slucaj da vneseme negativen broj na vraboteni ili broj pogolem od 50*/
{
    printf("Vnesovte nepostoecki broj na vraboteni, obidete se povtorno\n");
    scanf("%d",&brVraboteni);
}
printf("Sega vnesuvaj gi vrabotenite eden po eden\n");
/*vo ovoj for ciklus gi vnesuvame vrabotenite eden po eden gi vnesuvame vrabotenite*/
for (i=0;i<brVraboteni;i++)
{
    printf("vnesi ID na %d-ot vraboten\n",i);
    scanf("%d",&Vraboten[i].ID);
    printf("vnesi ime na %d-ot vraboten\n",i);
    scanf("%s",&Vraboten[i].ime);
    printf("vnesi prezime na %d-ot vraboten\n",i);
    scanf("%s",&Vraboten[i].prezime);
    printf("vnesi vozrast na %d-ot vraboten\n",i);
    scanf("%d",&Vraboten[i].vozrast);
    printf("vnesi pol(m/z) na %d-ot vraboten\n",i);
    scanf(" %c",&Vraboten[i].pol);
    printf("vnesi bracna sostojba na %d-ot vraboten\n",i);
    scanf("%s",&Vraboten[i].bracnaSostojba);
    printf("vnesi kredibilnost na %d-ot vraboten\n",i);
    scanf("%d",&Vraboten[i].kredibilnost);
    gets(c);
    printf("vnesi adresa na %d-ot vraboten\n",i);
    gets(Vraboten[i].adresa);
    printf("vnesi tekovna plata na %d-ot vraboten\n",i);
    scanf("%d",&Vraboten[i].tekovnaPlata);
    printf("vnesi poranesna plata na %d-ot vraboten\n",i);
    scanf("%d",&Vraboten[i].poranesnaPlata);
}

printaj(Vraboten); /*gi printame za proverka dali se vneseni dobro*/
 /*ovde birame na koj nacin da gi sortirame vrabotenite*/
 printf("Vnesi kakvo sortiranje sakas\n vnesi 0 za kredibilnost, 1 za tekovna plata, 2 za poranesna plata ");
 scanf("%d",&f);
 /*za proverka za tocnosta na vneseniot broj f*/
 while (f<0 || f>2)
{
    printf("vnesovte pogresen broj obidete se povtorno\n");
    scanf("%d",&f);
}
/* povikaj ja funkcijata koja se naogja na lokacijata na izborot na korisnikot
vo nizata sortiranja i predaj i go argumentot*/
(*sortiranja[f])(Vraboten);
printaj(Vraboten); /*gi printame vrabotenite za proverka na tocnosta na sortiranjeto*/
printf("Vnesi ID na vrabotenot koj sakas da go koregiras\n");
scanf("%d",&ID);
koregirajVraboten(ID,Vraboten);
printf("Posle azuriranjeto na vraboten so ID-%d toj gi ima slednite vrednosti\n",ID);
printaj(Vraboten);
koregirajKredibilnost(Vraboten);
printf("Posle naredbata za koregiranje na kredibilnosta vrabotenite gi imaat slednite podatoci:\n");
printaj(Vraboten);
return 0;
}

  /*funkcija  za sortiranje na vrabotenite spored kredibilnosta*/
void sortKredibilnost(struct vraboten Vraboten[size])
{
    int i,j;
    struct vraboten pom;
    for (i=0;i<brVraboteni;i++)
    for (j=i;j<brVraboteni;j++)
    {
        if (Vraboten[i].kredibilnost>Vraboten[j].kredibilnost)
        {
            pom=Vraboten[i];
            Vraboten[i]=Vraboten[j];
            Vraboten[j]=pom;
        }
    }
}  /*kraj na funkcijata za sortiranje spored kredibilnost*/

/*funkcija  za sortiranje na vrabotenite spored tekovna plata*/
void sortTekovnaPlata(struct vraboten Vraboten[size])
{
    int i,j;
    struct vraboten pom;
    for (i=0;i<brVraboteni;i++)
    for (j=i;j<brVraboteni;j++)
    {
        if (Vraboten[i].tekovnaPlata>Vraboten[j].tekovnaPlata)
        {
            pom=Vraboten[i];
            Vraboten[i]=Vraboten[j];
            Vraboten[j]=pom;
        }
    }
}  /*kraj na funkcijata za sortiranje spored tekovna plata*/

/*funkcija  za sortiranje na vrabotenite spored minata plata*/
void sortMinataPlata(struct vraboten Vraboten[size])
{
    int i,j;
    struct vraboten pom;
    for (i=0;i<brVraboteni;i++)
    for (j=i;j<brVraboteni;j++)
    {
        if (Vraboten[i].poranesnaPlata>Vraboten[j].poranesnaPlata)
        {
            pom=Vraboten[i];
            Vraboten[i]=Vraboten[j];
            Vraboten[j]=pom;
        }
    }
}  /*kraj na funkcijata za sortiranje spored minata plata*/

 /*funkcija za koregiranje na vraboten spred vnesen ID*/
 void koregirajVraboten( int ID, struct vraboten Vraboten[size])
 {
    int i;
    char c[1];
    for (i=0;i<brVraboteni;i++)
    {
        if (ID==Vraboten[i].ID)
        {
          printf("vnesi ime na %d-ot vraboten\n",i);
    scanf("%s",&Vraboten[i].ime);
    printf("vnesi prezime na %d-ot vraboten\n",i);
    scanf("%s",&Vraboten[i].prezime);
    printf("vnesi vozrast na %d-ot vraboten\n",i);
    scanf("%d",&Vraboten[i].vozrast);
    printf("vnesi pol(m/z) na %d-ot vraboten\n",i);
    scanf(" %c",&Vraboten[i].pol);
    printf("vnesi bracna sostojba na %d-ot vraboten\n",i);
    scanf("%s",&Vraboten[i].bracnaSostojba);
    printf("vnesi kredibilnost na %d-ot vraboten\n",i);
    scanf("%d",&Vraboten[i].kredibilnost);
    gets(c);
    printf("vnesi adresa na %d-ot vraboten\n",i);
    gets(Vraboten[i].adresa);
    printf("vnesi tekovna plata na %d-ot vraboten\n",i);
    scanf("%d",&Vraboten[i].tekovnaPlata);
    printf("vnesi poranesna plata na %d-ot vraboten\n",i);
    scanf("%d",&Vraboten[i].poranesnaPlata);
        }
    }
 } /*kraj na funkcijata koregiraj vraboten*/
 
 /*funkcija za koregiranje na kredibilnosta na site vraboteni*/
 void koregirajKredibilnost(struct vraboten Vraboten[size])
 {
    int i;
    for (i=0;i<brVraboteni;i++)
    {
        if (Vraboten[i].tekovnaPlata>Vraboten[i].poranesnaPlata)
        {
            Vraboten[i].kredibilnost+=3;
            Vraboten[i].poranesnaPlata=Vraboten[i].tekovnaPlata;
        }
        if (Vraboten[i].tekovnaPlata<Vraboten[i].poranesnaPlata)
        {
            Vraboten[i].kredibilnost-=3;
            Vraboten[i].poranesnaPlata=Vraboten[i].tekovnaPlata;
        }
    }
 }  /*kraj na funkcijata*/
 
/*funkcija za printanje na vensenite vraboteni*/
 void printaj(struct vraboten Vraboten[size])
  {
    int i;
    for(i=0;i<brVraboteni;i++)
    {
      printf("ID: %d \n ime: %s\n prezime: %s\n vozrast: %d\n ",Vraboten[i].ID,Vraboten[i].ime,Vraboten[i].prezime,Vraboten[i].vozrast);
      printf("pol: %c\n bracna sostojba: %s\n kredibilnost: %d\n ",Vraboten[i].pol,Vraboten[i].bracnaSostojba,Vraboten[i].kredibilnost);
      printf("adresa: %s\n ",Vraboten[i].adresa);
      printf("segasna plata: %d\n poranesna plata: %d\n",Vraboten[i].tekovnaPlata,Vraboten[i].poranesnaPlata);
      printf("\n");

   }
   printf("\n\n");
  } /*kraj na funkcijata*/
