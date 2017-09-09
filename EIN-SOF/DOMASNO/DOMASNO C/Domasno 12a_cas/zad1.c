 /*Programa zad1.c*/
 /*Prodazba na kompjuterski delovi*/
  #include <stdio.h>

/* definicija na strukturata delovi */
struct komDelovi {
   int kod;          /* broj na del*/
   char imeDel[ 15 ];  /*ime na delovi  */
   int kolicina; /* kolicina */
   double cena;       /* cena */
}; /* kraj na strukturata comDelovi */

/* prototipovi */
int enterChoice( void );
void textFile( FILE *readPtr );
void updateRecord( FILE *fPtr );
void newRecord( FILE *fPtr );
void deleteRecord( FILE *fPtr );
void prodavaj(FILE *fPtr);

int main()
{
   FILE *cfPtr; /* pokazhuvach kon hardwere.dat */
   int choice;  /* izbor na korisnikot */
    if ( ( cfPtr = fopen( "hardwere.dat", "rb+" ) ) == NULL )
     cfPtr = fopen( "hardwere.dat", "wb" );
   /* fopen otvara datoteka; izlezi ako ne mozhe da se otvori datotekata */
   if ( ( cfPtr = fopen( "hardwere.dat", "rb+" ) ) == NULL ) {
      printf( "Datotekata ne mozhe da se otvori.\n" );
   } /* kraj if */
   else {

      /* korisnikot specificira akcija */
      while ( ( choice = enterChoice() ) != 6 ) {

         switch ( choice ) {

            /* sozdadi text datoteka od sluchajna datoteka */
            case 1:
               textFile( cfPtr );
               break;

            /* azhuriraj zapis */
            case 2:
               updateRecord( cfPtr );
               break;

            /* sozdradi zapis */
            case 3:
               newRecord( cfPtr );
               break;

            /*izbrishi postoechki zapis */
            case 4:
               deleteRecord( cfPtr );
               break;
            /*prodavaj delovi*/
            case 5:
                prodavaj(cfPtr);
                break;
            /* poraka za greshno vnesena opcija */
            default:
               printf( "Greshen izbor\n" );
               break;
           } /* kraj switch */
      } /* kraj while */

      fclose( cfPtr ); /* fclose ja zatvora datotekata */
   } /* kraj else */

   return 0; /* uspeshen kraj */

} /* kraj main */

/* sozdadi formatirana tekstualna datoteka za pechatenje */
void textFile( FILE *readPtr )
{
   FILE *writePtr; /* pokazhuvach kon accounts.txt */

   /* sozdadi clientData so prazna informacija */
   struct komDelovi del1 = { 0, "", 0, 0.0 };

   /* fopen otvara datoteka; izlezi ako ne mozhe da se otvori datotekata */
   if ( ( writePtr = fopen( "sostojba.txt", "w" ) ) == NULL ) {
      printf( "Datotekata ne mozhe da se otvori.\n" );
   } /* kraj if */
   else {
      rewind( readPtr ); /* postavi go pokazhuvachot na pochetokot na datotekata */
      fprintf( writePtr, "%-8s%-16s%-11s%10s\n",
         "Kod", "ImeDel", "Kolicina","Cena" );

      /* iskopiraj gi site zapisi od sluchajna datoteka vo
	     tekstualna datoteka */
      while ( !feof( readPtr ) ) {
         fread( &del1, sizeof( struct komDelovi ), 1, readPtr );

         /* zapishi ediniechen zapis vo tekstualna datoteka */
         if ( del1.kod != 0 ) {
            fprintf( writePtr, "%-8d%-16s%-11d%10.2f\n",
               del1.kod, del1.imeDel,
               del1.kolicina, del1.cena );
         } /* kraj if */
      } /* kraj while */

      fclose( writePtr ); /* fclose ja zatvora datotekata */
   } /* kraj else */

} /* kraj na funkcijata textFile */

/* azhuriraj broj na delovi i cena vo zapis */
void updateRecord( FILE *fPtr )
{
   int kod;        /* broj na del */
   double novaCena; /* nova cena */
   int broj;

   /* sozdadi del so prazna informacija */
   struct komDelovi del = { 0, "", 0, 0.0 };

   /* zemi broj na del koj treba da se azhurira */
   printf( "Vnesi broj na del za azhuriranje ( 1 - 100 ): " );
   scanf( "%d", &kod );

   /* premesti go datotechniot pokazhuvach na tochnata
      pozicija vo datotekata */
   fseek( fPtr, ( kod - 1 ) * sizeof( struct komDelovi ),
      SEEK_SET );

   /* prochitaj zapis od datotekata */
   fread( &del, sizeof( struct komDelovi ), 1, fPtr );

   /* objavi greshka ako delot ne postoi */
   if ( del.kod == 0 ) {
      printf( "Delot #%d nema informacii.\n", kod );
   } /* kraj if */
   else { /* azhuriraj zapis */
      printf(  "%-8d%-16s%-11d%10.2f\n",
               del.kod, del.imeDel,
               del.kolicina, del.cena );


       printf( "Vnesi kolku novi delovi se doneseni  " );
      scanf( "%d", &broj);
      del.kolicina+=broj;
       printf( "Vnesi kolku e novata cena na delot  " );
      scanf( "%lf", &novaCena);
      del.cena = novaCena;
     printf(  "%-8d%-16s%-11d%10.2f\n",
               del.kod, del.imeDel,
               del.kolicina, del.cena );
      /* premesti go datotechniot pokazhuvach na tochniot
	     zapis vo datotekata */
      fseek( fPtr, ( kod - 1 ) * sizeof( struct komDelovi ),
         SEEK_SET );

      /* zapishi go azhuriraniot zapis preku stariot zapis */
      fwrite( &del, sizeof( struct komDelovi ), 1, fPtr );
   } /* kraj else */
} /* kraj na funkcijata updateRecord */

/* brishi postoechki zapis */
void deleteRecord( FILE *fPtr )
{

   struct komDelovi del; /* chuva zapis prochitan od datotekata */
   struct komDelovi blankdel = { 0, "", 0, 0.0 }; /* prazen del */

   int kod; /* broj na smetka */

   /* zemi broj na del za brishenje */
   printf( "Vnesi broj na del za brishenje ( 1 - 100 ): " );
   scanf( "%d", &kod );

   /* postavi go datotechniot pokazhuvach na tochniot zapis */
   fseek( fPtr, ( kod - 1 ) * sizeof( struct komDelovi ),
      SEEK_SET );

   /* prochitaj zapis od datotekata */
   fread( &del, sizeof( struct komDelovi ), 1, fPtr );

   /* ispechati poraka ako zapisot ne postoi */
   if ( del.kod == 0 ) {
      printf( "Delot so broj %d ne postoi.\n", kod );
   } /* kraj if */
   else { /* izbrishi zapis */

      /* postavi go pokazhuvachot na tochniot zapis vo datotekata */
      fseek( fPtr, ( kod - 1 ) * sizeof( struct komDelovi ),
         SEEK_SET );

      /* zameni go posteochkiot zapis so prazen zapis */
      fwrite( &blankdel,
         sizeof( struct komDelovi ), 1, fPtr );
   } /* kraj else */
} /* kraj na funkcijata deleteRecord */

/* sozdadi i vnesi zapis */
void newRecord( FILE *fPtr )
{
   /* sozdadi del so prazna informacija */
  struct komDelovi del2 = { 0, "", 0, 0.0 };

   int kod; /* broj na del */

   /* zemi broj na del koj treba da se sozdade */
   printf( "Vnesi broj na del ( 1 - 100 ): " );
   scanf( "%d", &kod );

   /* postavi go datotechniot pokazhuvach na tochniot zapis */
   fseek( fPtr, ( kod - 1 ) * sizeof( struct komDelovi ),
      SEEK_SET );

   /* prochitaj zapis od datotekata */
   fread( &del2, sizeof( struct komDelovi ), 1, fPtr );

   /* ispechati poraka ako zapisot postoi */
   if ( del2.kod != 0 ) {
      printf( "Smetkata #%d vekje e sozdadena.\n",
              del2.kod );
   } /* kraj if */
   else { /* sozdadi zapis */

      /* vnesi  ime kolicina i cena */
      printf( "Vnesi ime kolicina i cena\n? " );
      scanf( "%s%d%lf", &del2.imeDel, &del2.kolicina,
         &del2.cena );

      del2.kod = kod;

      /* postavi go datotechniot pokazhuvach na tochnata pozicija */
      fseek( fPtr, (  kod - 1 ) *
         sizeof( struct komDelovi ), SEEK_SET );

      /* vnesi zapis vo datotekata */
      fwrite( &del2,sizeof( struct komDelovi ), 1, fPtr );
   } /* kraj else */
} /* kraj na funkcijata newRecord */

/* ovozmozhi mu na korisnikot da vnese izbor od menito */
int enterChoice( void )
{
   int menuChoice; /* izbor na korisnikot */

   /* ispechati gi mozhnite opcii */
   printf( "\nVnesi izbor\n"
      "1 - Sozdadi formatiran tekstualen fajl\n"
      "    \"accounts.txt\" za pechatenje\n"
      "2 - Azhuriraj kompjuterski del\n"
      "3 - Dodadi nov kompjuterski del\n"
      "4 - Izbrishi kompjuterski del\n"
      "5 - Za prodazba na kompjuterski del\n? "
      "6 - Za kraj\n" );

   scanf( "%d", &menuChoice ); /* vnesi izbor */

   return menuChoice;

} /* kraj na funkcijata enterChoice */


void prodavaj(FILE *fPtr)
{
   int kod;        /* broj na kompjuterski del */
   double plati; /* vrednost za plakanje */
   int broj;
   char e;
   char c='n';

   /* sozdadi del so prazna informacija */
   struct komDelovi del = { 0, "", 0, 0.0 };

   /* zemi broj na del koj treba da se azhurira */
   printf( "Vnesi kakov del sakas da kupis so kod " );
   scanf( "%d", &kod );

   /* premesti go datotechniot pokazhuvach na tochnata
      pozicija vo datotekata */
   fseek( fPtr, ( kod - 1 ) * sizeof( struct komDelovi ),
      SEEK_SET );

   /* prochitaj zapis od datotekata */
   fread( &del, sizeof( struct komDelovi ), 1, fPtr );

   /* objavi greshka ako delot ne postoi */
   if ( del.kod == 0 ) {
      printf( "Smetkata #%d nema informacii.\n", kod );
   } /* kraj if */
   else { /* azhuriraj zapis */
      printf(  "%-8d%-16s%-11d%10.2f\n",
               del.kod, del.imeDel,
               del.kolicina, del.cena );

      /*Vnesi kolku delovi sakas dak kupis*/
       printf( "Vnesi kolku  delovi sakas da kupis  " );
      scanf( "%d", &broj);
      /*proverka dali ima tolku delovi vo magacin */
      if (del.kolicina-broj>=0)
      { del.kolicina-=broj;
      plati=broj*del.cena;
      printf("Dobro imam tolku delovi ke treba da platis %f denari\n",plati);
      }
      else
      {
        printf("Nema tolkav broj na delovi ima samo %d delovi\n",del.kolicina);
        scanf("%c",&e);
        printf("sakas li da gi zemes site (d/n)\n");
        scanf("%c",&c);
      }
      if (c=='d')
      {
      plati=del.kolicina*del.cena;
      del.kolicina=0;
      printf("Dobro imam tolku delovi ke treba da platis %f denari\n",plati);
      }
      printf(  "%-8d%-16s%-11d%10.2f\n",
               del.kod, del.imeDel,
               del.kolicina, del.cena );
      /* premesti go datotechniot pokazhuvach na tochniot
	     zapis vo datotekata */
      fseek( fPtr, ( kod - 1 ) * sizeof( struct komDelovi ),
         SEEK_SET );

      /* zapishi go azhuriraniot zapis preku stariot zapis */
      fwrite( &del, sizeof( struct komDelovi ), 1, fPtr );
   } /* kraj else */
} /* kraj na funkcijata prodavaj */
