#include <iostream>

 

using std::cout;

using std::endl;

#include <numeric>    // definicija na accumulate 

#include <algorithm>  

#include <list>       // list class-template definicija
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int brParni;

int rezult;

//definiranje na predikatite     

bool paren(int a){return !(a%2);} 

bool pomal(int a){return a<2000;}

bool pomal1(int a){return (a>=2000)&&(a<4000);}

bool pomal2(int a){return (a>=4000)&&(a<6000);}

bool pomal3(int a){return (a>=6000)&&(a<8000);}

bool pomal4(int a){return (a>=8000)&&(a<10000);}
 

int main() {

	std::list< int > niza;

	int rezult;

	float srVrednost;

    srand(time(0));

for ( int i = 0; i < 10000; i++ ) 
      niza.push_front(rand() % 10000); /* sluchaen broj od 0 do 9999 */

rezult = std::count_if( niza.begin(), niza.end(), paren );

cout<<"Brojot na parni broevi vo nizata e: "<<rezult<<endl;

rezult = std::count_if( niza.begin(), niza.end(), pomal );

cout<<"Brojot na broevi pomali od 2000 vo nizata e: "<<rezult<<endl;

rezult = std::count_if( niza.begin(), niza.end(), pomal1 );

cout<<"Brojot na broevi [2000-4000) vo nizata e: "<<rezult<<endl;

rezult = std::count_if( niza.begin(), niza.end(), pomal2 );

cout<<"Brojot na broevi [4000-6000) vo nizata e: "<<rezult<<endl;

rezult = std::count_if( niza.begin(), niza.end(), pomal3 );

cout<<"Brojot na broevi [6000-8000) vo nizata e: "<<rezult<<endl;

rezult = std::count_if( niza.begin(), niza.end(), pomal4 );

cout<<"Brojot na broevi [8000-10000) vo nizata e: "<<rezult<<endl;

srVrednost=(std::accumulate( niza.begin(), niza.end(), 0 ))/10000;

cout<<"Srednata vrednost na nizata e: "<<srVrednost<<endl;

return 0;
} // kraj na main







 






  

