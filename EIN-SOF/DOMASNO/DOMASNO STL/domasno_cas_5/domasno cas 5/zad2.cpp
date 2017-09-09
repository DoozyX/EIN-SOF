#include <iostream>
#include<string>

using std::string;
 

using std::cout;

using std::endl;

using std::cin;


 

#include <list>       // list class-template definicija

using std::list;

#include <algorithm>  // se vklucuva bidejki se koristi algoritmot copy

 

// prototip za function template printList

template < class T >

void printList( const std::list< T > &listRef );

//prototip na funkcijata meni

void meni(); 

// prototip za function template prikazi

template < class T >

list<T> prikazi( list< T > &list1,list< T > &list2,list< T > &list3 );

int main()

{

   list< string > lista1; //pravata lista na e-mail adresi

   list< string > lista2; //vtorata lista na e-mail adresi

   list< string > lista3; //tretata lista na e-mail adresi

   list< string > lista;  //za smestuvanje na site e-mail adresi

   string temp;           //za vlez od tastatura
   
   int izbor;            //se koristi za izbor od meniot
   

   

  
   meni();
   cin>>izbor;         //vnesi izbor

   while (izbor!=5){

	   switch (izbor){

	   case 1:
		   
		   cin>>temp;

           lista1.push_front( temp );

		   temp.erase();

		   break;

	   case 2:
         
           cin>>temp;

           lista2.push_front( temp );
            
           temp.erase();

		   break;

	   case 3:
         
           cin>>temp;

           lista3.push_front( temp );		   
            
           temp.erase();

		   break;
		   
	   case 4:

		   cout<<"Site razlicni e-mail adresi koi go ima vo trite listi se slednive\n";

		   lista=prikazi(lista1,lista2,lista3);

		   printList(lista);

		   break;

	   default:
		   
		   cout<<"Vnesovte pogresen izbor obidete se povtorno\n";
           
		   break;
	   
	   }//kraj na switch
	   
	   meni();

	   cin>>izbor;
   
   }//kraj na while
 

   return 0;

 

} // kraj na main

 

// printList function template definicija; koristi

// ostream_iterator i copy algoritam za pecatenje na elementi

template < class T >

void printList( const std::list< T > &listRef )

{

   if ( listRef.empty() )

      cout << "List?ta e prazna";

 

   else {

      std::ostream_iterator< T > output( cout, " " );

      std::copy( listRef.begin(), listRef.end(), output );

	  cout<<endl;

 

   }

 

} // kraj na printList

//definiranje na funkcijata meni

void meni(){
    cout<<endl;
	cout<<"Vnesi 1 za vnesuvanje na e-mail adresa vo prvata lista\n"; 
	cout<<"Vnesi 2 za vnesuvanje na e-mail adresa vo vtorata lista\n"; 
	cout<<"Vnesi 3 za vnesuvanje na e-mail adresa vo tretata lista\n";
	cout<<"Vnesi 4 za prikazuvanje na e-mail adresite vo trite listi\n"; 
	cout<<"Vnesi 5 za kraj\n"; 
}  //kraj na funkcijata

//definiranje na funkcijata template prikazi

template < class T >

list<T> prikazi( list< T > &list1,list< T > &list2,list< T > &list3 )
{
   list<T> pom;

    pom.insert( pom.begin(),list1.begin(), list1.end() );

	pom.insert( pom.end(),list2.begin(), list2.end() );

	pom.insert( pom.end(),list3.begin(), list3.end() );

	pom.sort();

	pom.unique();

	

	return pom;
}//kraj na prikazi

