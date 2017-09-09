#include <iostream>

 

using std::cout;

using std::cin;

using std::ios;

using std::cerr;

using std::endl;

 

using std::left;

using std::right;

using std::fixed;

using std::showpoint;

 

#include <fstream>

 

using std::ifstream;

using std::ofstream;

 

#include <iomanip>

 

using std::setw;

using std::setprecision;

 

#include <cstdlib> 


int main()

{   char zbor[50],zbor1[50];

   // konstruktorot na ofstream otvora datoteka za zapisuvanje na tekst od koja ke gi filtrirame zborovite

   ofstream outClientFile( "prva.dat", ios::out );

 

  

   if ( !outClientFile ) {  // preklopen ! operator za ofstream

      cerr << "Datotekata ne moze da se otvori" << endl;

      exit( 1 );

   }

   cout << "Vnesi tekst vo datotekata od koja potoa ke citame" << endl

        << "Vnesi end-of-file za kraj na vnes.\n? ";
 

   while ( cin >> zbor ) {

      outClientFile << zbor<< endl;

   }

      //zatvoranje na datotekata

      outClientFile.close();

 

   // konstruktorot na ifstream ja otvora istata datoteka za citanje

   ifstream inClientFile( "prva.dat", ios::in );

 

  

   if ( !inClientFile ) {

      cerr << "Datotekata ne moze da se otvori" << endl;

      exit( 1 );

 

   }
 ofstream outClientFile1( "vtora.dat", ios::out );//otvarame nova datoteka vo koja gi vnesuvame zborovite so dolzina pomala od 10

 if ( !outClientFile1 ) {  // preklopen ! operator za ofstream

      cerr << "Datotekata ne moze da se otvori" << endl;

      exit( 1 );}
   // proveri go sekoj zbor

	  while ( inClientFile >> zbor1 )
      if(strlen(zbor1)<=10)//uslov dali e zborot so golemina pomala od 10 
	  {
		 

			outClientFile1 << zbor1<< endl;//ako e zapisi go vo datoteka nova
	  }
	  

 outClientFile1.close();

   return 0;  // destruktorot na ofstream ja zatvora datotekata

} // kraj na main

 

 
