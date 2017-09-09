#include <iostream>

 
using std::ostream;
using std::cout;
using std::cin;

using std::endl; 

#include <string>
 
using std::string;



template< class T >

//class Pole
class Pole {

 public:

    Pole(); //konstruktor
   
	friend ostream &operator<<( ostream &, const Pole & );//friend f-ja za pecatenje


    void push(  T a );

 
    T max(); //funkcija template
   
    static int getStatic(){return br;}
    
	~Pole(); //destruktor
 
private:

   static int br;      // broj na elementi

   T *Ptr;  // pole 

}; // kraj na klasa

//definicija na konstruktor za klasata Pole
template<class T> 
Pole<T>::Pole(){
 
	Ptr=new T[20];
 }

//inicijalizacija na static clenot co klasata
template <class T> int Pole<T>::br = 0 ;

//definiranje na friend funkcija
template<class T>
  ostream &operator<<( ostream &output, const Pole<T> &a )

	{
		for(int i=0;i<a.br;i++)
			
			output<<a.Ptr[i]<<"  ";
		    
	return output;
}

//definiranje na funkcijata push 
template<class T>

void Pole<T>::push(  T a )
{	
		
				Ptr[br] = a; //smesti element
			    br++;
  }//kraj na funkcijata push


//definiranje na funkcijata max 
template<class T> 
T Pole<T>::max()
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
string Pole<string>::max()
   {
	   string pom;
	   
	   if(br>0)
	   {
		   pom= Ptr[0];
			
		   for(int i=1;i<br;i++)
			
			   if(pom<Ptr[i])
				
				   pom=Ptr[i];
				
			   return pom;
	   }
	   else
		   return "Nema";
   }//kraj na funkcijata max

template<class T> 
Pole<T>::~Pole(){
    
	delete [] Ptr;
	
} //kraj na destruktorot


int main()
{
	Pole<int> A;    //specijalizacija na klasata Pole so int

	Pole<char> B; //specijalizacija na klasata Pole so char

	Pole<string> C; //specijalizacija na klasata Pole so string
	
	int a; //za vnesuvanje na int element

	char b; //za vnesuvanje na double element

	string c1; //za vnesuvanje na string element



	cout<<"Vnesi 5 elementi vo poleto A od int tip\n";
	for(int i=0;i<5;i++){
			cout<<"Vnesi go "<<i+1<<" element vo A:\n";
			cin>>a;

			A.push(a);}
		
cout<<"Vnesi 5 elementi vo poleto B od char tip\n";
	
	for( i=0;i<5;i++){
			cout<<"Vnesi go "<<i+1<<" element vo B:\n";
			cin>>b;

			B.push(b);}
		
cout<<"Vnesi 5 elementi vo poleto C od string tip\n";
			
for( i=0;i<5;i++){
cout<<"Vnesi go "<<i+1<<" element vo C:\n";
			
            cin>>c1;
			
			C.push(c1);}

		
			cout<<"Poleto A e:\n";

			cout<<A<<endl;


			cout<<"Poleto B e:\n";

			cout<<B<<endl;


			cout<<"Poleto C e:\n";

			cout<<C<<endl;

			
				cout<<"Maksimalen elementn na Poleto A e:  "<<A.max()<<endl;
				
				cout<<"Maksimalen elementn na Poleto B e:  "<<B.max()<<endl;
	
				cout<<"Maksimalen elementn na Poleto C e:  "<<C.max()<<endl;



	

	return 0;
}//kraj na main





