#include <iostream>

 

using std::cout;

using std::cin;

using std::endl;

#include <vector>

using std::vector; 

#include <deque>      // deque class-template definicija

using std::deque;

#include <algorithm>  // se vklucuva bidejki se koristi algoritmot copy

 

int main()

{   
   vector< int > Vector;   //definirame vector od int elementi

   deque< int > Deque;     //definirame deque od int elementi

   std::ostream_iterator< int > output( cout, " " ); 

   std::deque< int >::reverse_iterator reverseIterator;  

   int temp;

   cout<<"Vnesuvaj celi broevi vo deque, za kraj vnesi 0\n";

   cin>>temp;

   Deque.push_back( temp ); //go polnime deque
   
   while (temp!=0){
	   
	   cin>>temp;

       if (temp!=0)
	   Deque.push_back( temp ); //go polnime deque
   }

   

   for ( reverseIterator = Deque.rbegin();  //se dvizime vo Deque od posledniot kon prviot element
       
   reverseIterator!= Deque.rend();
       
   ++reverseIterator){

   Vector.push_back(*reverseIterator);     //go polnime vectorot

   }


   std::copy( Vector.begin(), Vector.end(), output );   //go pecatime vektorot

   return 0;

 

} // kraj na main