#include <iostream>
 
using std::cout;
using std::cin;
using std::endl;

class Kvadrat {

private:
	
	double strana;

public:

	void setKvadrat(double a){strana=a;}

	double plostina(){return strana*strana;}
	
	void pecati(){cout <<"Kvadrat so strana  "<<strana<<endl;}

};

class Pravoagolnik {

private:
	
	double sirina;
	
	double dolzina;

public:

	void setPravoagolnik(double a,double b){sirina=a;dolzina=b;}

	double plostina(){return sirina*dolzina;}
	
	void pecati(){cout <<"Pravoagolnik so sirina  "<<sirina<<" i dolzina  "<<dolzina<<endl;}


};

// Definicija na function template sortirajPole

template<class T>

void sortirajPole(T *array, int count)
{
	T pom;

	for ( int i = 0; i < count; i++ )
		for ( int j = i; j < count; j++ )
		{	
			if(array[i].plostina()>array[j].plostina())
			{
				pom=array[i];
				array[i]=array[j];
				array[j]=pom;
			}
		}
}//kraj na funkcijata sortirajPole


// Definicija na function template pecatiPole

template< class T >  //*

void pecatiPole(  T * array,  int count )//**

{

   for ( int i = 0; i < count; i++ )
   {
   array[ i ].pecati(); 

      cout << endl;
   }
 

} // Kraj na function template pecatiPole

int main()
{
	int n,m;

	double a,b;
	
	Kvadrat Pole1[20];
	
	Pravoagolnik Pole2[20];

    cout<<"Vnesi broj na kvadrati\n";
	
	cin>>n;

	cout << "Polnenje na nizata od kvadrati \n";

   for(int i=0;i<n;i++)
   {
	   cout<<"Vnesi strana na kvadratot\n";
	
	   cin>>a;
	   
	   Pole1[i].setKvadrat(a);

   }


   cout<<"Vnesi broj na pravoagolnici\n";
	
   cin>>m;

	
   cout << "Polnenje na nizata od pravoagolnici \n";

   for(i=0;i<m;i++)
   {
	   cout<<"Vnesi sirina i dolzina na pravoagolnikot\n";
	
	   cin>>a;
	   
	   cin>>b;
	   
	   Pole2[i].setPravoagolnik(a,b);

   }
   
   cout<<"KVADRATI"<<endl;

   pecatiPole(Pole1,n);

   cout<<"PRAVOAGOLNICI"<<endl;

   pecatiPole(Pole2,m);

   sortirajPole(Pole1,n);

   sortirajPole(Pole2,m);

    
   cout<<"SORTIRANI  KVADRATI"<<endl;

   pecatiPole(Pole1,n);

   cout<<"SORTIRANI  PRAVOAGOLNICI"<<endl;

   pecatiPole(Pole2,m);

   return 0;
}
