#include <iostream>

 

using std::cout;

using std::cin;

using std::endl;

using std::ostream;

using std::istream;

#include <numeric>    // definicija na accumulate 

#include <algorithm>  

#include <vector>

using std::vector; 

#include <stdio.h>

#include <stdlib.h>

#include <ctime>

#include "Urand.h"
//definirame klasa Karta

class Karta{

private:

	int broj;

	int znak;

public:

	Karta(){}

	void setZnak(int a){znak=a;}

	int getZnak(){return znak;}

	void setBroj(int br){broj=br;}

	int getBroj(){return broj;}

    friend ostream &operator<<( ostream &, const Karta & );                       //friend f-ja za pecatenje na Karta
     
	friend istream &operator>>( istream &, Karta & );                             //friend f-ja za vnesuvanje na Karta

    friend bool operator==(Karta a1,Karta a2){return a1.broj==a2.broj;}//preklopuvanje na operatorot ==

	friend bool operator>(Karta a1,Karta a2){return a1.broj>a2.broj;}  //preklopuvanje na operatorot >

	friend bool operator<(Karta a1,Karta a2){return a1.broj<a2.broj;}  //preklopuvanje na operatorot<
	
	friend bool operator!=(Karta a1,Karta a2){return a1.broj!=a2.broj;}

	friend int operator+(int a1,Karta a2){return a1+a2.broj; }

	Karta operator=(Karta a);                                                    //preklopuvanje an operatorot za dodeluvanje =
};//kraj na klasata Karta

//f-ja za pecatenje na Karta
ostream &operator<<( ostream &output, const Karta &a )
{
	output<<"Karta broj: "<<a.broj<<" Znak: ";

	if (a.znak==1)
		output<<"Srce"<<endl;
	if (a.znak==2)
		output<<"Trev"<<endl;
	if (a.znak==3)
		output<<"Karo"<<endl;
	if (a.znak==4)
		output<<"List"<<endl;


	return output;

}//kraj an f-jata

//f-ja za vnesuvanje na Karta
istream &operator>>( istream &input, Karta &a )
{
	input>>a.broj;

	input>>a.znak;

	return input;

}//kraj na f-jata

//preklopuvanje an operatorot za dodeluvanje
Karta Karta::operator=(Karta a)
{
	broj=a.broj;

	znak=a.znak;

	return *this;
}//kraj na f-jata

//definiranje na predikat
void zgolemi(Karta &a)
{
	
	
	if (a.getZnak()==1){
	
		a.setBroj(2*a.getBroj());
	
		a.setZnak(a.getZnak());
	}

}


//pocetok na glavnata programa
int main()
{
	std::vector<Karta> karti; //go definirame spilot karti

	vector<Karta> *Igrac;     //igraci vo prvata igra

	vector<Karta> *Igrac1;   //igraci vo vtorata igra

	int zbir[52];            //zbirot na kartite na igracite
    
	Karta temp;             //za polnenje na vektorite od karti

	int pom,pom1;           //pomosni
 
	int max=0;              //go smestuvame max broj na zbir na karti

	int pobednik;           //go smestuvame pobednikot

	int igraci;             //smestuvame broj na igraci

	int delenje;            //po kolku karti delime na sekoj igrac

	
	std::ostream_iterator< Karta > output( cout );  //iterator za pecatenje na kartite
	
    Urand<14>broj; 
	Urand<4>boja;

	for (int j=1;j<5;j++){
    
		pom1=boja();
	
		for(int i = 0; i < 14; ++i){

			pom=broj()+1;
	  
			if ((pom!=11)){
	  		
				temp.setBroj(pom);
	  	
				temp.setZnak(pom1+1);
			
				karti.push_back(temp);
	  }
	 
	}
	}
    


	std::random_shuffle( karti.begin(), karti.end() );  //ovde gi promesuvame kartite

	cout<<"Spilot na karti izmesani izgleda vaka"<<endl;
	std::copy( karti.begin(), karti.end(), output );  

	 cout<<"Vnesi broj na igraci za prvata igra\n";
	 cin>>igraci;
	 
	 Igrac=new vector<Karta>[igraci];

	 delenje=52/igraci;

     std::vector< Karta >::iterator Iterator; //definirame iterator 
      
	  
	 
	j=0;
	int i=0;
	
	//ovde gi delime kartite na igracite
	for(Iterator=karti.begin();Iterator!=karti.end();Iterator++){
	      
		j++;
		
		if (j<=delenje)
	            
		Igrac[i].push_back(*Iterator);
			  
		else{
			  
		  i++;
			  
		  j=0;
			  
			  }
		  }
		 
    

	//go naogame najgolemiot zbir na karti
	for ( i=0;i<igraci;i++){

	
		zbir[i]=std::accumulate( Igrac[i].begin(), Igrac[i].end(), 0 );	
	
		cout<<zbir[i]<<"  ";
		
		if (max<zbir[i]){
				
			max=zbir[i];  //ovde go smestuvame max broj na karti
			
			pobednik=i;   //ovde go smestuvame pobednikot
		 
		}
		 
	} 
	
    //go pecatime pobednikot so najgolem zbir na karti
	cout<<"a) Pobednik vo prvata igra e igracot so reden broj: "<<pobednik<<" so zbir na karti: "<<max<<endl;
         
	cout<<"Igracot gi ima ovie karti"<<endl;
	
	std::copy( Igrac[pobednik].begin(), Igrac[pobednik].end(), output );

	//programiranje na vtorata igra
		 
	std::random_shuffle( karti.begin(), karti.end() );//go mesame spilot povtorno
		 
	std::for_each( karti.begin(), karti.end(), zgolemi );//ja duplirame vrednosta na kartite so znak SRCE

	cout<<"Vnesi broj na igraci za vtorata igra\n";
	
	cin>>igraci;
	 
	Igrac1=new vector<Karta>[igraci];

	delenje=52/igraci;

    
      
	max=0;
	 
	j=0;
	i=0;
	//gi delime kartite na igracite	  
	for(Iterator=karti.begin();Iterator!=karti.end();Iterator++){
	      
		j++;
		
		if (j<=delenje)
	            
			Igrac1[i].push_back(*Iterator);
			  
		else{
			  
			i++;
			  
			j=0;
			  
			  }
		  }
		 
    

	//go naogame igracot so max zbir na karti
	for ( i=0;i<igraci;i++){

	
		zbir[i]=std::accumulate( Igrac1[i].begin(), Igrac1[i].end(), 0 );	
	
		cout<<zbir[i]<<"  ";
		
		if (max<zbir[i]){
				
			max=zbir[i];
			
			pobednik=i;
		 
		}
		 
	} 
	

	cout<<"b) Pobednik vo vtorata igra e igracot so reden broj: "<<pobednik<<" so zbir na karti: "<<max<<endl;
         
	cout<<"Igracot gi ima ovie karti"<<endl;
	
	std::copy( Igrac1[pobednik].begin(), Igrac1[pobednik].end(), output );


return 0;

}//kraj na main



