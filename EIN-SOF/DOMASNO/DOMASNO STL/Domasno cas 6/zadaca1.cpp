//programa za stedaci

#include <iostream>

#include <conio.h>

#include <string>

#include<algorithm>

using std::cout;

using std::endl;

using std::ostream;

using std::istream;

using std::string;

using std::cin;



//klasa za uplata
class Uplata{

public:

	Uplata (){smetka=0;}
		
	friend ostream &operator<<( ostream &, Uplata & );//friend f-ja za pecatenje
	
	friend istream &operator>>( istream &, Uplata & );      //friend f-ja za vnesuvanje

private:
     string ime;

     string prezime;

     string matbr;
	
     double smetka; //promenliva za smetkata
};

//pocetok na f-jata za vnesuvanje
istream &operator>>( istream &input, Uplata &a )
{
	 double x;
    if(a.ime.empty())    //za da go vneseme imeto ednas
    {cout<<"Vnesi ime: ";
    input>>a.ime;
    }
    if(a.prezime.empty())
    {cout<<"Vnesi prezime: ";
    input>>a.prezime;
    }
    if(a.matbr.empty())
    {cout<<"Vnesi maticen broj: ";
    input>>a.matbr;
    }
	cout<<"Vnesi uplata: ";
    input>>x;
	
	a.smetka+=x;
	
	return input;
} //kraj na funkcijata

//pocetok na f-jata za pecatenje
ostream &operator<<( ostream &output, Uplata &a )

	{
	output<<"Ime: "<<a.ime<<endl;

    output<<'\t'<<"Prezime: "<<a.prezime<<endl;

    output<<'\t'<<"Maticen broj: "<<a.matbr<<endl;		
	
    output<<'\t'<<"Smetka na stedacot: "<<a.smetka<<endl;
		
	return output;
}


#include <map>  //definicija na map class-template

// definicija na multimap type pod ime mmid

typedef std::multimap< int, Uplata, std::less< int > > mmid;


void meni();//f-ja za menito
//pocetok na programata
int main()

{
   int kluc,iz;
   
   mmid Stedaci;

   Uplata Pom[100];//pole od objektite Uplata
   
    mmid::iterator iter;    //iterator od mmid

  int izbor;
  
  meni();
  
  cin>>izbor;
  
  while(izbor!=3){

    switch(izbor)
    {
        case 1:
        
        cout<<"Vnesi kluc za stedacot(1-100): ";cin>>kluc;cout<<endl;

        cin>>Pom[kluc];
        Stedaci.insert( mmid::value_type( kluc, Pom[kluc] ) ); //vnesuvanje na uplata

        break;
        
        case 2:
        
        cout<<"Vnesi go klucot na stedacot sto sakas da go vidis(1-100): ";cin>>iz;

        cout<<endl;

        cout << "Informacii za transakciite na stedacot:\n\nKluc:\tPodatoci:\n";

        cout<<endl;
        //pecatenje na stedac so soodvetniot kluc
        for ( iter = Stedaci.begin();

         iter != Stedaci.end(); ++iter )
         {
           if(iter->first==iz)
            {cout << iter->first << '\t'

          << iter->second << '\n';  }
         }
           
           break;
           
           default:
           cout<<"Vnesovte pogresen izbor obidete se povtorno\n";
           break;
    }
    meni();
    cin>>izbor;
  }
           
   return 0;



} // kraj na main
//f-ja za menito
void meni()
{
    cout<<endl;
    
    cout<<"Vnesi 1 za dodavanje uplata"<<endl;
    
    cout<<"Vnesi 2 za prikazuvanje na uplata za daden stedac"<<endl;
    
    cout<<"Vnesi 3 za kraj"<<endl;
    
    cout<<endl;
} //kraj na f-jata za menito
