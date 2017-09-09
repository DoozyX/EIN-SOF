#include <iostream.h>

#include <conio.h>

#include <cstring>

#include <string>
 
using std::string;

template< class T >

//class Mnozestvo
class Mnozestvo {

 public:

    Mnozestvo(); //konstruktor
   
	friend ostream &operator<<( ostream &, const Mnozestvo & );//friend f-ja za pecatenje


    void push(  T a );

 
    T max(); //funkcija template
   
    static int getStatic(){return br;}
    
	~Mnozestvo(); //destruktor
 
private:

   static int br;      // broj na elementi

   T *Ptr;  // pole 

}; // kraj na klasa

//definicija na konstruktor za klasata
template<class T> 
Mnozestvo<T>::Mnozestvo(){
 
	Ptr=new T[20];
 }

//specifikacija na konstruktor za klasata
template<> 
Mnozestvo<char*>::Mnozestvo(){
    
	cout<<"Konstruktor\n";
	
	Ptr=new char *[20];
	
	for(int i=0;i<20;i++)
		Ptr[i]=new char [20];
}//kraj na konstruktorot

//inicijalizacija na static clenot co klasata
template <class T> int Mnozestvo<T>::br = 0 ;

//definiranje na friend funkcija
template<class T>
  ostream &operator<<( ostream &output, const Mnozestvo<T> &a )

	{
		for(int i=0;i<a.br;i++)
			
			output<<a.Ptr[i]<<"  ";
		    
	return output;
}

//definiranje na funkcijata push 
template<class T>

void Mnozestvo<T>::push(  T a )
{	
		int f=1;
	
	
		if(br>0)	
			
		{
			for(int i=0;i<br;i++)
		
			{
				if(Ptr[i]==a)
		 
				f=0;
			}
			if (f)
			{
				Ptr[br] = a; //smesti element
			    br++;
			}
		}
	else 
	{ Ptr[br]=a;
	br++;
	}

  }//kraj na funkcijata push


//definiranje na funkcijata max 
template<class T> 
T Mnozestvo<T>::max()
   {
	   T pom;
	   if(br>0)
	   {
		   pom= Ptr[0];
			for(int i=1;i<br;i++)
				if(pom<Ptr[i])
					pom=Ptr[i];
				return pom;
	   }
	   else
		   return 0;
   }//kraj na funkcijata max

//specijalizacija na funckijata max
template<> 
char * Mnozestvo<char *>::max()
   {
	   char * pom;
	   
	   if(br>0)
	   {
		   pom= Ptr[0];
			
		   for(int i=1;i<br;i++)
			
			   if(strcmp(pom,Ptr[i])<0)
				
				   pom=Ptr[i];
				
			   return pom;
	   }
	   else
		   return "Nema elementi";
   }//kraj na funkcijata max

//definiranje na destruktor za klasata
template<class T> 
Mnozestvo<T>::~Mnozestvo(){}

//specifikacija na destruktor za klasata
template<> 
Mnozestvo<char*>::~Mnozestvo(){
    
	delete [] Ptr;
	
} //kraj na destruktorot

//
void meni();

int main()
{
	Mnozestvo<int> A;    //specijalizacija na klasata Mnozestvo so int

	Mnozestvo<double> B; //specijalizacija na klasata Mnozestvo so double

	Mnozestvo<char *> C; //specijalizacija na klasata Mnozestvo so *char

	int izbor; //za izbor od meni
	
	int a; //za vnesuvanje na int element

	double b; //za vnesuvanje na double element

	char c[50]; //za vnesuvanje na niza od znaci

	char *c1;  

	char izbor2; //izbor za koe mnozestvo

	meni();
	cin>>izbor;

	while(izbor!=9)
	{
		switch(izbor){
		case 1:

			cout<<"Vnesi int element vo A:\n";
			cin>>a;

			A.push(a);
			break;

		case 2:

			cout<<"Vnesi double element vo B:\n";
			cin>>b;

			B.push(b);
			break;

		case 3:

			cout<<"Vnesi char * element vo C:\n";
			
            cin>>c;
			
			c1=new char[strlen(c)];
            
			strcpy(c1,c);
			C.push(c1);

		
			break;

		case 4:

			cout<<"Mnozestvoto A e:\n";

			cout<<A;

			break;

		case 5:

			cout<<"Mnozestvoto B e:\n";

			cout<<B;

			break;

		case 6:

			cout<<"Mnozestvoto C e:\n";

			cout<<C;

			break;

		case 7:

			cout<<"Vnesi od koe mnozestvo sakas najgolem element (A,B,C) \n";
			
			cin>>izbor2;

			if (izbor2=='A')
				
				cout<<"Maksimalen elementn na mnozestvoto A e:  "<<A.max()<<endl;


			if (izbor2=='B')
				
				cout<<"Maksimalen elementn na mnozestvoto B e:  "<<B.max()<<endl;


			if (izbor2=='C')
				
				cout<<"Maksimalen elementn na mnozestvoto C e:  "<<C.max()<<endl;

			break;

		case 8:

			cout<<"Brojot na elementi vo mnozestvoto A se:  "<<A.getStatic()<<endl;
			
			cout<<"Brojot na elementi vo mnozestvoto B se:  "<<B.getStatic()<<endl;

			cout<<"Brojot na elementi vo mnozestvoto C se:  "<<C.getStatic()<<endl;

			break;

		default:
			
			cout<<"Vnesovte pogresen izbor obidete se povtorno\n";

			break;
		}

		meni();

		cin>>izbor;



	}

	return 0;
}//kraj na main

//definiranje na funkcijata meni
void meni()
{
	cout<<endl;
	cout<<"1. Dodaj element vo A\n";
	cout<<"2. Dodaj element vo B\n";
	cout<<"3. Dodaj element vo C\n";
	cout<<"4. Prikazi go A\n";
	cout<<"5. Prikazi go B\n";
	cout<<"6. Prikazi go C\n";
	cout<<"7. Prikazi najgolem element\n";
	cout<<"8. Prikazi broj na elementi vo mnozestvata \n";
	cout<<"9. Za kraj\n";
} //kraj na funkciajta




