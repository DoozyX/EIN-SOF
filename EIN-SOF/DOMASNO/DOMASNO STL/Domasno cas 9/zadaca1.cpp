#include <iostream>

 

using std::cout;

using std::cin;

using std::endl;

#include <numeric>    // definicija na accumulate 

#include <algorithm>  

#include <vector>       // list class-template definicija
#include <stdio.h>
#include <stdlib.h>
#include <ctime>



#include <exception>

using std::exception;
class CopyException : public exception {

public:

   // konstructorot ja opredeluva default error message

   CopyException::CopyException()

      : exception( "vtorata niza e pomala od prvata" ) {}

 

};  // end class CopyException
//definiranje na predikatite  

void Kopiranje( std::vector< int >&n1, std::vector< int >&n2 )

{

   // frli CopyException

   if ( n1.size() < n2.size() )

      throw CopyException(); // prekin na funkcijata

   std::copy(n2.begin(),n2.end(),n1.begin());

}  // kraj na funkcijata kopiranje   


int main() {

	std::vector< int >niza1,niza2;


    srand(time(0));

	int broj1,broj2;

	int a;

	broj1=(rand()%1000);

	broj2=(rand()%1000);


for ( int i = 0; i < broj1; i++ ) 
      niza1.push_back(rand() % 1000); /* sluchaen broj od 0 do 999 */

for ( i = 0; i < broj2; i++ ) 
      niza2.push_back(rand() % 1000); /* sluchaen broj od 0 do 999 */

cout<<"Vnesi 1 za kopiranje na dve nizi, a 0 za kraj"<<endl;

cin>>a;

while (a) {

  

      // try block sodrzi kod sto moze da frli isklucok

     

      try {

         Kopiranje( niza1, niza2 );

        cout<<"SE IZVRSI KOPIRANJE NA NIZITE, KOI SE SO GOLEMINI: "<<endl; 
		 
		 cout << "Golemina na niza1 e: " << niza1.size() << endl;

		 cout << "Golemina na niza2 e: " << niza2.size() << endl;

 

      } // kraj na try

 

      // exception handler za isklucok delenje so nula

      catch ( CopyException &copyException ) {

         cout << "NASTANAL ISKLUCOK: " <<

            copyException.what() << endl;

 

      } // kraj na catch
	 
	  niza1.clear();

	  niza2.clear();
 
		
      broj1=(rand()%1000);

	  broj2=(rand()%1000);

	  for ( i = 0; i < broj1; i++ ) 
      niza1.push_back(rand() % 1000); /* sluchaen broj od 0 do 999 */

for ( i = 0; i < broj2; i++ ) 
      niza2.push_back(rand() % 1000); /* sluchaen broj od 0 do 999 */


 cout<<"Vnesi 1 za povtorno kopiranje na dve nizi, a 0 za kraj"<<endl;

cin>>a;

   } 

return 0;
} // kraj na main


