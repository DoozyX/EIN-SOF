#include <iostream>

using namespace std;

class Complex {

public:

   Complex( double = 0.0, double = 0.0 );       // konstruktor

   Complex operator+(const  Complex & ) const;  // sobiranje

   Complex operator-( const Complex & ) const;  // odzemanje

   const Complex &operator=( const Complex & ); // dodeluvanje

   friend ostream &operator<<( ostream&, const Complex & );

   friend istream &operator>>( istream&, Complex & );
   
   friend Complex operator*(Complex ob1, Complex ob2);

   friend Complex operator*(Complex ob1, int i);

   friend Complex operator*(int i, Complex ob1);

   bool operator==(Complex ob1);
   
   bool operator!=(Complex ob1);
   
   Complex operator+=( const Complex & );
   
   Complex operator-=( const Complex & );
   
   Complex operator*=( const Complex & );
   
    //int operator==(Complex ob1);
 

private:

   double real;       // realen del

   double imaginary;  // imaginaren del

}; // kraj na klasta Complex

Complex Complex::operator+=( const Complex &ob1 )
{
     *this=*this+ob1;
     return *this;
}

Complex Complex::operator-=( const Complex &ob1 )
{
     *this=*this-ob1;
     return *this;
}

Complex Complex::operator*=( const Complex &ob1 )
{
     *this=*this*ob1;
     return *this;
}
bool Complex::operator==(Complex ob1)
{
    if  ((real==ob1.real) && (imaginary==ob1.imaginary))
    return true;
    else
    return false;
}

bool Complex::operator!=(Complex ob1)
{
    if  ((real==ob1.real) && (imaginary==ob1.imaginary))
    return false;
    else
    return true;
}
Complex operator*(Complex ob1, Complex ob2)
{
    Complex pom;
   pom.real=ob1.real*ob2.real-ob1.imaginary*ob2.imaginary;
    pom.imaginary=ob1.real*ob2.imaginary+ob1.imaginary*ob2.real;
    return pom;
}
 
Complex operator*(Complex ob1, int i)
{
    Complex pom;
    pom.real=ob1.real*i;
    pom.imaginary=ob1.imaginary*i;
return pom;
}

Complex operator*(int i, Complex ob1)
{
    Complex pom;
    pom.real=ob1.real*i;
    pom.imaginary=ob1.imaginary*i;
return pom;
}
 
// Konstruktor

Complex::Complex( double r, double i )

   :real(r),imaginary(i){ }

 

// Preklopi operator za sobiranje

Complex Complex::operator+(  const Complex &operand2 )  const

{

   return Complex( real + operand2.real,

                   imaginary + operand2.imaginary );  //ovde kreirame so pomos na konstruktorot nov objekt koj go vrakame

} // kraj na funkcijata operator+

 

// Preklopi operator za odzemanje

Complex Complex::operator-( const Complex &operand2 ) const

{

   return Complex( real - operand2.real,

                   imaginary - operand2.imaginary );

} // kraj na funkcijata operator-

 

// Preklopi operator =

const Complex& Complex::operator=( const Complex &right )

{

   real = right.real;

   imaginary = right.imaginary;

   return *this;   // ovozmozhuva kaskadiranje

} // ekraj na funkcijata operator=

 ostream &operator<<( ostream& izlez, const Complex &ob1 )
{
    izlez << ob1.real << " + "<<ob1.imaginary<<"*i";

        

   return izlez;     // mu ovozmozhuva na cout << a << b << c;

} // kraj na oprator<< funkcijata

 istream &operator>>( istream& vlez, Complex &num )
{
    

   vlez >> num.real; // vnesi kod na drzhava

   vlez.ignore( 3 );                  // preskokni ) i prazno

   vlez >> num.imaginary;

   vlez.ignore(2);                     // preskokni crtka (-)

   

   return vlez;      // ovozmozhuva cin >> a >> b >> c;
}
 
void meni();

int main()

{
   int izbor;

   Complex x, y, z;

   int i;

    cout << "Vnesi kompleksen broj od oblik a + b*i \n";

    cin >> z;
    
    cout << "Vneseniot kompleksen broj  e: " << z << endl;

    cout << "Vnesi kompleksen broj od oblik a + b*i \n";

    cin >> y;
    
    cout << "Vneseniot kompleksen broj  e: " << y << endl;

    meni();

    cin>>izbor;
    
    while (izbor!=0)
    {
        switch (izbor)
        {
            case 1:
                     x=y+z;

                     cout <<x<<" = ("<< y <<") + ("<< z <<")"<<endl;
                     break;
            case 2:
                     x=y-z;

                     cout <<x<<" = ("<< y <<") - ("<< z <<")"<<endl;
                     break;
                     
            case 3:
                     x=y*z;

                     cout <<x<<" = ("<< y <<") * ("<< z <<")"<<endl;
                     break;
            case 4:
                     cout<<"Vnesi koeficient na mnozenje"<<endl;

                     cin>>i;
                     
                     x=i*y;

                     cout <<x<<" = ("<< i <<") * ("<< y <<")"<<endl;
                     break;
             case 5:
                     x+=y;

                     cout << "Dobieniot kompleksen broj  e: " << x << endl;
                     break;
             case 6:
                     x-=y;

                     cout << "Dobieniot kompleksen broj  e: " << x << endl;
                     break;
              case 7:
                     x*=y;

                     cout << "Dobieniot kompleksen broj  e: " << x << endl;
                     break;
               case 8:
                     if (x==y)
                     cout<<"Broevite se ednakvi"<<endl;
                     if (x!=y)
                     cout<<"Broevite se razlicni"<<endl;
                     break;
               default:
                     cout<<"Vnesovte pogresen broj obidete se povtorno"<<endl;
                     break;
        }
        meni();
        cin>>izbor;
    }
    
    x+=y;
    
    cout << "Dobieniot kompleksen broj  e: " << x << endl;
    
     x=i*x;

    cout << "Dobieniot kompleksen broj  e: " << x << endl;
   return 0;

} // kraj na main

void meni()
{
    cout<<"Vnesi 1 za sobiranje na broevite"<<endl;
    cout<<"Vnesi 2 za odzemanje na borevite"<<endl;
    cout<<"Vnesi 3 za mnozenje na dva kompleksni broja"<<endl;
    cout<<"Vnesi 4 za mnozenje na kompleksen broj so integer"<<endl;
    cout<<"Vnesi 5 za += operacijata"<<endl;
    cout<<"Vnesi 6 za -= operacijata"<<endl;
    cout<<"Vnesi 7 za *= operacijata"<<endl;
    cout<<"Vnesi 8 za sporeduvanje na broevite"<<endl;
    cout<<"Vnesi 0 za kraj"<<endl;
}

