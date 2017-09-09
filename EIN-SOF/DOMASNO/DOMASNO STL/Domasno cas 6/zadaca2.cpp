#include <iostream>

 

using std::cout;

using std::endl;

using std::cin;

using std::istream;

using std::ostream;
 

#include <queue>  // definicija na adapter priority_queue

//klasa Proces
class Proces{

private:

	int ID;         //identifikacija na procesot

	int prioritet;  //prioritet na procesot

public:

 
    friend ostream &operator<<( ostream &, const Proces & );                       //friend f-ja za pecatenje na Proces
     
	friend istream &operator>>( istream &, Proces & );                             //friend f-ja za vnesuvanje na Proces

    friend bool operator==(Proces a1,Proces a2){return a1.prioritet==a2.prioritet;}//preklopuvanje na operatorot ==

	friend bool operator>(Proces a1,Proces a2){return a1.prioritet>a2.prioritet;}  //preklopuvanje na operatorot >

	friend bool operator<(Proces a1,Proces a2){return a1.prioritet<a2.prioritet;}  //preklopuvanje na operatorot<
	
	Proces operator=(Proces a);                                                    //preklopuvanje an operatorot za dodeluvanje =

};//kraj na kalsata Proces

//f-ja za pecatenje na Proces
 ostream &operator<<( ostream &output, const Proces &a )
{
	 
	 output<<"ID: "<<a.ID<<"\n"<<"Priorite: "<<a.prioritet<<endl;

	 return output;
 
}//kraj na f-jata

//f-ja za vnesuvanje na Proces
istream &operator>>( istream &input, Proces &a )
{
	input>>a.ID;
	
	input>>a.prioritet;

	return input;

}//kraj an f-jata

//preklopuvanje an operatorot za dodeluvanje =
Proces Proces::operator=(Proces a)
{
	

	ID=a.ID;

	prioritet=a.prioritet;

	return *this;
}//kraj na f-iata

//pocetok na main
int main()

{
   Proces temp;

   std::priority_queue< Proces > procesi; //pravime priority_queue od Proces
   
   char izbor; //za izbor

   cout<<"Vnesi dali sakas da vnesuvas proces (y/n)\n";
   
   cin>>izbor;

   while (izbor!='n')
   {
	   cout<<"Vnesi ID i pripritet na procesot\n";
	   
	   cin>>temp;

	   procesi.push( temp );   // push elementi na procesi

	   cout<<"Vnesi dali sakas da vnesuvas proces (y/n)\n";
   
       cin>>izbor;
   }

   
  

 

   cout << "Opsluzuvanje  po prioriteti: \n";

  

   while ( !procesi.empty() ) {

      cout << procesi.top();  // prikazi go elementot na pocetokot

      procesi.pop();                 // otstrani go

 

   }

 

   cout << endl;

 

   return 0;

 

} // kraj na main
