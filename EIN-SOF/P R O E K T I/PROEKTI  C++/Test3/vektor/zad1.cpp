//pocetok na programata za operacii so vektori
#include <iostream>
 

 
using std::cout;
using std::cin;
using std::endl;
 



//definirame klasa vektori
class Vektor {
public:
   Vektor(int=1,int=1,int=1);
   Vektor operator+( const Vektor & );//za sobiranje na dva vektori
   friend Vektor operator+(int,const Vektor &);
   friend Vektor operator+(const Vektor &,int);
   Vektor operator-( const Vektor & );//za odzemanje na dva vektori
   friend Vektor operator-(int,const Vektor &);
   friend Vektor operator-(const Vektor &,int);
   int operator%(const Vektor &);
   Vektor operator*(const Vektor &);
   void print();
   ~Vektor(){}
private:
	int x;
	int y;
	int z;
};

//definiranje na funkciite

Vektor::Vektor(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}

Vektor Vektor::operator+( const Vektor &ob1 )
{
	Vektor pom;
	pom.x=x+ob1.x;
	pom.y=y+ob1.y;
	pom.z=z+ob1.z;
	return pom;
}

Vektor operator+(int i,const Vektor &ob1)
{
	Vektor pom;
	pom.x=i+ob1.x;
	pom.y=i+ob1.y;
	pom.z=i+ob1.z;
	return pom;
}

 Vektor operator+(const Vektor &ob1,int i)
{
	Vektor pom;
	pom.x=i+ob1.x;
	pom.y=i+ob1.y;
	pom.z=i+ob1.z;
	return pom;
}

Vektor Vektor::operator-( const Vektor &ob1 )
{
	Vektor pom;
	pom.x=x-ob1.x;
	pom.y=y-ob1.y;
	pom.z=z-ob1.z;
	return pom;
}

Vektor operator-(int i,const Vektor &ob1)
{
	Vektor pom;
	pom.x=i-ob1.x;
	pom.y=i-ob1.y;
	pom.z=i-ob1.z;
	return pom;
}

 Vektor operator-(const Vektor &ob1,int i)
{
	Vektor pom;
	pom.x=ob1.x-i;
	pom.y=ob1.y-i;
	pom.z=ob1.z-i;
	return pom;
}

 int Vektor::operator%(const Vektor &ob1)
 {
	 int pom;
	 pom=x*ob1.x+y*ob1.y+z*ob1.z;
	 
	 return pom;
}

 Vektor Vektor::operator*(const Vektor &ob1)
 {
	 Vektor pom;
	 pom.x=y*ob1.z-ob1.y*z;
	 pom.y=z*ob1.x-x*ob1.z;
	 pom.z=x*ob1.y-ob1.x*y;
	 return pom;
 }

 void Vektor::print()
 {
	 cout<<"X: "<<x<<endl;
	 cout<<"Y: "<<y<<endl;
	 cout<<"Z: "<<z<<endl;
 }

int main()
{
	int i1,j1,k1,i2,j2,k2,n,br;
	cout<<"Vnesi go vektrot A"<<endl;
    cin>>i1;
	cin>>j1;
	cin>>k1;
	Vektor A(i1,j1,k1);
	A.print();
	cout<<"Vnesi go vektrot B"<<endl;
    cin>>i2;
	cin>>j2;
	cin>>k2;
	Vektor B(i2,j2,k2);
	B.print();
	Vektor C;
	
	cout<<"A+B"<<endl;
	C=A+B;
	C.print();
	
	cout<<"A-B"<<endl;
	C=A-B;
	C.print();

    cout<<"A%B"<<endl;
	br=A%B;
	cout<<"A%B= "<<br<<endl;

	cout<<"A*B"<<endl;
	C=A*B;
	C.print();
	
	cout<<"Vnesi cel broj"<<endl;
	cin>>n;
    
	cout<<"A+n"<<endl;
	C=A+n;
	C.print();
	
	cout<<"A-n"<<endl;
	C=A-n;
	C.print();

	cout<<"n-A"<<endl;
	C=n-A;
	C.print();

    cout<<"n+A"<<endl;
	C=n+A;
	C.print();

	return 0;
}







