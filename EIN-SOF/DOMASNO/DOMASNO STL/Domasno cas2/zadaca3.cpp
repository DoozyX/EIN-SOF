

#include <iostream>

 
using std::ostream;
using std::cout;
using std::cin;

using std::endl; 
#include <string>
 
using std::string;


template<typename T> class Lice {

 private:
 
	 string ime;

	 string prezime;
	 
	 string mat_br;
	 
	 int vozrast;
	 
	 string ulica;

	 string broj;

	 string grad;
	
	 T kod;

public:
  
	Lice(){}

  void setLice(string i,string p,string m, int v,string u,string b,string g,T k);
  
  
 friend ostream &operator<<( ostream &, const Lice & );//friend f-ja za pecatenje
  
 

};

    
  template<class T>
	  void Lice<T>::setLice(string i,string p,string m, int v,string u,string b,string g,T k)
  {
	  ime=i;

	  prezime=p;
	  
	  mat_br=m;
	  
	  vozrast=v;
	  
	  ulica=u;

	  broj=b;

	  grad=g;
	  
	  kod=k;
	  
	  
  }
  template<class T>
  ostream &operator<<( ostream &output, const Lice<T> &a )

  {
	  output<<"Ime : "<<a.ime<<endl;

	  output<<"Prezime: "<<a.prezime<<endl;
	  
	  output<<"Maticen broj: "<<a.mat_br<<endl;
	  
	  output<<"Vozrast: "<<a.vozrast<<endl;
	  
	 output<<"Adresa: "<<a.ulica<<" br."<<a.broj<<" "<<a.grad<<endl;
	  
	  output<<"Kod: "<<a.kod<<endl;
	  return output;
  }
template< class T >  //*

void pecatiPole(  T * array,  int count )//**

{

   for ( int i = 0; i < count; i++ )
   {
   cout<<array[ i ]; 

      cout << endl;
   }
}

void meni();

int main() 
{

  int n=0,m=0,izbor;
  
  string im,pr,ul,br,gr,kod1,mt;
  
  int vr,kod2;
	
  Lice<int> Vraboteni[10];
  
  Lice<string> Klienti[10];

  meni();

  cin>>izbor;

  while (izbor!=5){
	  switch (izbor){
	  case 1:

			

			cout << "Polnenje na nizata od vraboteni \n";

			
				cout<<"Vnesi ime i prezime,maticen broj, vozrast, adresa, i kod na vraboteniot\n";
	
				cin>>im;cin>>pr;cin>>mt;cin>>vr;cin>>ul;cin>>br;cin>>gr;cin>>kod2;
	   
				Vraboteni[n].setLice(im,pr,mt,vr,ul,br,gr,kod2);
				n++;

			
			break;
	  case 2:


		

			cout << "Polnenje na nizata od klienti \n";

		
			cout<<"Vnesi ime i prezime,maticen broj, vozrast, adresa, i kod na vraboteniot\n";
	
		cin>>im;cin>>pr;cin>>mt;cin>>vr;cin>>ul;cin>>br;cin>>gr;cin>>kod1;
	   
				Klienti[m].setLice(im,pr,mt,vr,ul,br,gr,kod1);

			m++;
			break;
	  case 3:

			pecatiPole(Vraboteni,n);

			break;
	  case 4:

			 pecatiPole(Klienti,m);

			 break;
	  default: 
		
		  cout<<"Vnesovte pogresen izbor obidete se povtorno\n";
		
		  break;
	  }
	  
	  meni();

	  cin>>izbor;
  }

   return 0;

} //

void meni(){
	
	cout<<"Vnesi 1 za vnesuvanje na podatoci za vraboten"<<endl;
	
	cout<<"Vnesi 2 za vnesuvanje na podatoci za klient"<<endl;
	
	cout<<"Vnesi 3 za pecatenje na lista za vraboten"<<endl;

	cout<<"Vnesi 4 za pecatenje na lista za klienti"<<endl;
	
	cout<<"Vnesi 5 za kraj"<<endl;
}
