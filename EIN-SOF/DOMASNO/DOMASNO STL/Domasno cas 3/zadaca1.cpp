#include <iostream.h>

#include <conio.h>

 

 
//template klasa Zapis
template <class T>
class Zapis{

 private:
	T x;
	T y;
	T z;  

 public:
     Zapis(T x1=0,T y1=0,T z1=0){x=x1;y=y1;z=z1;}            //konstruktor;
	 
	 friend ostream &operator<<( ostream &, const Zapis & );//friend f-ja za pecatenje na Zapis
     
	 friend istream &operator>>( istream &, Zapis & );      //friend f-ja za vnesuvanje na Zapis
	 	 
	 T suma(){ return (x+y+z);}

};//kraj na klasata

//friend funkcija za pecatenje na klasata Zapis
template<class T>
ostream &operator<<( ostream &output, const Zapis<T> &a )
{
   output << "x=" << a.x <<"; y="<<a.y<<"; z="<<a.z<< endl;
   return output;
}//kraj na funkcijata

//friend funkcija za vnesuvanje na klasata Zapis
template<class T>
istream &operator>>( istream &input, Zapis<T> &a )
{
	input>>a.x;
	input>>a.y;
	input>>a.z;
	return input;
} //kraj na funkcijata

//pocetok na funkcijata kontrolor
template<class T>

void kontrolor(Zapis<T> *a, int broj)
{
	for(int i=0;i<broj;i++)
	{
		if(a[i].suma()>10000)
			
			cout<<"Objektot so reden broj "<<i<<"\n"<<a[i]<<"ja nadminuva sumata 10000"<<endl;
		
	}
}; //kraj na funkcijata

int main()
{	
	int n,m;

	Zapis<int> Niza1[20];     //specijalizirana klass int
	Zapis<double> Niza2[20]; //specijalizirana klass double

	cout<<"Vnesi go brojot na objekti od nizata so int clenovi:\n";
		
		cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Vnesi gi x,y,z elementie za "<<i<<"-ot element"<<endl;
		cin>>Niza1[i];
	}


	cout<<"Niza1 se sostoi od slednive objekti:\n";

	for(i=0;i<n;i++)

		cout<<Niza1[i];

	cout<<"Vnesi go brojot na objekti od nizata so double clenovi:\n";
		
		cin>>m;
	for( i=0;i<m;i++)
	{
		cout<<"Vnesi gi x,y,z elementie za "<<i<<"-ot element"<<endl;
		cin>>Niza2[i];
	}

cout<<"Niza2 se sostoi od slednive objekti:\n";

	for(i=0;i<m;i++)

		cout<<Niza2[i];

	cout<<"Vo nizata od int objekti koi nadminuvaat 10000 se:\n";

	kontrolor(Niza1,n);
	
	cout<<"Vo nizata od double objekti koi nadminuvaat 10000 se:\n";

	kontrolor(Niza2,m);


return 0;
}
