//pocetok na programata za operacii so matrica
#include <iostream>
 
using std::ostream;
using std::istream;
 
using std::cout;
using std::cin;
using std::endl;
 
#include <iomanip>
 
using std::setw;
 
#include <cstdlib>
#include <cassert>


//definirame klasa matrica
class Matrica {
   friend ostream &operator<<( ostream &, const Matrica & );//friend f-ja za pecatenje na matrica
   friend istream &operator>>( istream &, Matrica & );//friend f-ja za vnesuvanje na matrica
   friend Matrica operator*(const Matrica &, int); //za mnozenje na matrica so cel broj
   friend Matrica operator*(int, const Matrica &); //za mnozenje na cel broj so matrica
public:
   Matrica( int = 10,int = 10 );                   // default konstruktor
   Matrica( const Matrica & );// copy konstruktor
   Matrica(double a);//konvertiracki konstruktor so vlez double za da ne nastane konfuzija pri povikuvanjeto
								//bidejki se javuva konfuzija
   ~Matrica();                            // destruktor
   int getBrRedovi() const;// vrati broj na redovi
   int getBrKoloni() const; // vrati broj na koloni
   const Matrica &operator=( const Matrica & ); // dodeli matrica
   
   bool operator==( const Matrica & ) const;  // sporedi ednakvi
 
   // Odredi dali dve matrici se ednakvi i
   // vrati true, inaku vrati false (go koristi operator==).
   bool operator!=( const Matrica &right ) const  
      { return ! ( *this == right ); }
   
   int &operator()( int,int);              // indeksen operator
   const int &operator()( int,int ) const;  // indeksen operator
   Matrica operator+( const Matrica & );//za sobiranje na dve matrici
   Matrica operator-( const Matrica & );//za odzemanje na dve matrici
   Matrica operator*( const Matrica & );//za mnozenje na deve matrici
   
private:
   int red; // broj na redovi
   int kolona; //broj na koloni
   int **ptr; // pokazhuvach na niza od pokazuvaci kon sekoj red na matricata

}; // kraj na klasata Matrica




 

 
// Konstruktor za klasata Matrica (predefinirana golenina e 10)
Matrica::Matrica( int row,int column )
:red(row),kolona(column)
{
	ptr=new int *[red];
	for(int i=0;i<red;i++)
	{
		ptr[i]=new int [kolona];
	}

	 for (  i = 0; i < red; i++ )
   {	   
	   for (int j=0;j<kolona;j++)
      ptr[ i ][j] = 0; 
   }// inicijaliziraj matrica
	
}//kraj na konstruktorot
// Copy konstruktor za klasata Matrica mora da dobie 
// referenca za da se onevozmozhi beskonechna rekurzija
Matrica::Matrica( const Matrica &init ) : red( init.red ),kolona(init.kolona)
{
  
   ptr=new int *[red];   // sozdadi mesto za matricata
	for(int i=0;i<red;i++)
	{
		ptr[i]=new int [kolona];
	} 
   assert( ptr != 0 );    // zavrshi ako ne sme dobile dovolno memorija
  
 
   
   for (  i = 0; i < red; i++ )
   {	   
	   for (int j=0;j<kolona;j++)
      ptr[ i ][j] = init.ptr[i][j]; 
   }// kopiranje na matrica
} // kraj na copy konstruktorot na Matrica 

//konverzaciski konstruktor
Matrica::Matrica(double a)
{ 
    int c= (int) a;//kastiranje oti elementite se int
	red=c;
	kolona=c;
	ptr=new int *[red];   // sozdadi mesto za matricata
	for(int i=0;i<red;i++)
	{
		ptr[i]=new int [kolona];
	} 
   assert( ptr != 0 );    // zavrshi ako ne sme dobile dovolno memorija
	for (  i = 0; i < red; i++ )
	{   
	   for (int j=0;j< kolona;j++)
	   ptr[ i ][j] = c;
	   
   }// inicijaliziraj matrica
}
// Destruktor za klasata Matrica
Matrica::~Matrica()
{
  	for(int i=0;i<red;i++)
		delete[] ptr[i];
	delete [] ptr;           // vrati ja memorijata na matricata
  
} // kraj na destruktorot na Matrica 
 
// Zemi broj na redovi na matricata
int Matrica::getBrRedovi() const { return red; }

// Zemi broj na koloni na matricata
int Matrica::getBrKoloni() const { return kolona; }
 
// Preklopi go operatorot za dodeluvanje
// vrakjanje na const izbegnuva: ( a1 = a2 ) = a3
const Matrica &Matrica::operator=( const Matrica &right )
{
	int i;
   if ( &right != this ) {  // proveri da ne ima samo-dodeluvanje
      
      // za nizi so razlichni golemini, dealociraj ja originalnata
      // niza od levata strana, potoa alociraj niva niza na levata strana.
      if ( red != right.red ) {
        for( i=0;i<red;i++)   // vrati mesto
		delete[] ptr[i];
	    delete [] ptr;                
         red = right.red;     // smeni ja goleminata na this objektot
        ptr=new int *[red];    // sozdadi mesto za kopija na matrica
	for( i=0;i<red;i++)
	{
		ptr[i]=new int [kolona];
	}  
         assert( ptr != 0 );    // zavrshi ako ne e alocirana memorija
      } // kraj if
      else {

	  if ( kolona != right.kolona ) {
        for( i=0;i<red;i++)   // vrati mesto
		delete[] ptr[i];
	    delete [] ptr;                
         kolona = right.kolona;     // smeni ja goleminata na this objektot
        ptr=new int *[red];    // sozdadi mesto za kopija na matrica
	for( i=0;i<red;i++)
	{
		ptr[i]=new int [kolona];
	}  
         assert( ptr != 0 );    // zavrshi ako ne e alocirana memorija
      } // kraj if
	  } //kraj else
      for (  i = 0; i < red; i++ )
   {	   
	   for (int j=0;j<kolona;j++)
      ptr[ i ][j] = right.ptr[i][j]; 
   }// kopiraj matrica
   }//kraj if
 
   return *this;   // ovozmozhuva x = y = z;
} // kraj na funkcijata operator= 
 
// Odredi dali dve matrici se ednakvi i vrati
// true, inaku vrati false.
bool Matrica::operator==( const Matrica &right ) const
{
   if ( red != right.red )
      return false;    // nizi so razlicen broj na redovi
   if ( kolona != right.kolona )
      return false;    // nizi so razlicen broj na koloni
 
   for ( int i = 0; i < red; i++ )
	   for (int j=0;j<kolona;j++)
       if ( ptr[ i ][j] != right.ptr[ i ][j] )
         return false; // matricite ne se ednakvi
 
   return true;        // nizite se ednakvi
} // kraj na funkcijata operator== 
 
// Preklopen indeksen operator za ne-const matrici
// vrakjanjeto na referenca sozdava lvalue
int &Matrica::operator()( int r,int k )
{
   // proveri dali indeksite se vo potrebniot opseg
   assert( 0 <= r && r < red );
   assert( 0 <= k && k < kolona );
   return ptr[ r ][ k ]; // vrati referenca
} // kraj na funkcijata operator() 
 
// Preklopi indeksen operator za const nizi
// vrakjanje na const referenca return sozdava rvalue
const int &Matrica::operator()( int r,int k ) const
{
   // proveri dali indeksite se vo potrebniot opseg
   assert( 0 <= r && r < red );
   assert( 0 <= k && k < kolona );
   return ptr[ r ][ k ]; // vrati referenca
} // kraj na funkcijata operator() 
 

 
// Preklopi go operatorot za vlez za klasata Matrica;
// vnesuva vrednosti za celata Matrica.
istream &operator>>( istream &input, Matrica &a )
{
   for ( int i = 0; i < a.red; i++ )
     for (int j=0;j<a.kolona;j++)
      input >> a.ptr[ i ][ j ];
 
   return input;   // ovozmozhuva cin >> x >> y;
} // kraj na funkcijata operator>>
 
// Preklopi go operatorot za izlez za klasata Matrica 
ostream &operator<<( ostream &output, const Matrica &a )
{
   int i;
 
   for ( i = 0; i < a.red; i++ ) {
	   for ( int j = 0; j < a.kolona; j++)
         output << setw( 5 ) << a.ptr[ i ][ j ];
       output << endl;
      
   }
 
   
      output << endl;
 
   return output;   // ovozmozhuva cout << x << y;
} // kraj na funkcijata operator<< 

 
//preoptovaruvanje na operator + za sobiranje na matrici
 Matrica Matrica::operator+( const Matrica &second )
{	Matrica a(2,2);
    Matrica Temp(*this);// za da odgovara so dimenziite na matricite koi se sobiraat
	if(red!=second.red || kolona!=second.kolona)
	{
	cout<<"Ne e mozno sobiranje na matricite"<<endl;
	return a;}
	else {	
		for(int i=0;i<red;i++)
			for(int j=0;j<kolona;j++)
				Temp.ptr[i][j]=ptr[i][j]+second.ptr[i][j]; 
	return Temp;	
	}
	
}//kraj na operatorot +

//preoptovaruvanje na operator - za odzemanje na matrici 
 Matrica Matrica::operator-( const Matrica &second )
{		Matrica b(2,2);
    Matrica Temp(*this);// za da odgovaraat dimenziite
	if(red!=second.red || kolona!=second.kolona)
	{
		cout<<"Ne e mozno odzemanje na matricite"<<endl;
		return b;}
	else {
		for(int i=0;i<red;i++)
			for(int j=0;j<kolona;j++)
				Temp.ptr[i][j]=ptr[i][j]-second.ptr[i][j];
	return Temp;
	}
		
}//kraj na - operatorot

 //preoptovaruvanje na operator * za mnozenje na dve matrici
 Matrica Matrica::operator*( const Matrica &second )
 {   
	 Matrica Temp(red,second.kolona);//definiranje na soodvetna golemina
	 if(kolona!=second.red || red!=second.kolona)
	cout<<"Matricite ne mozat da se pomnozat"<<endl;
	 else {
	
	for(int i=0;i<red;i++)
		for(int j=0;j<second.kolona;j++)
		{
			Temp(i,j)=0;
			for(int k=0;k<kolona;k++)
				Temp(i,j)+=(ptr[i][k]*second(k,j));
		}
		
	 }
	 return Temp;
 }//kraj na * operatorot

//preoptovaruvanje na operatorot * za mnozenje na matrica so broj
 Matrica operator*(const Matrica &second, int number)
 {
	Matrica Temp(second);//za da odgovara soodvetnata golema
	for(int i=0;i<second.red;i++)
		for(int j=0;j<second.kolona;j++)
			Temp(i,j)*=number;
	return Temp;
}

//preoptovaruvanje na operatorot * za mnozenje na broj so matrica
 Matrica operator*(int number, const Matrica &second)
{
	Matrica Temp(second);//za da odgovara soodvetnata golema
	for(int i=0;i<second.red;i++)
		for(int j=0;j<second.kolona;j++)
			Temp(i,j)*=number;
	return Temp;
}
 void proba(Matrica E){cout<<E;}//probna f-ja za konvertiracki konstruktor
 int main()
 {   
	 int r1,k1,r2,k2,br;
	 cout<<"Vnesi broj na redovi i broj na koloni na matricata A\n";
	 cin>>r1;cin>>k1;
	 Matrica A(r1,k1);
	 cout<<"Vnesi broj na redovi i broj na koloni na matricata B\n";
	 cin>>r2;cin>>k2;
	 Matrica B(r2,k2);
	 cout<<"Vnesi matrica A"<<endl;
	 cin>>A;
	 cout<<"Vnesi matrica B"<<endl;
	 cin>>B;
	 cout<<"Matrica A:"<<endl;
	 cout<<A<<endl;
     cout<<"Matrica B:"<<endl;
	 cout<<B<<endl;
	 cout<<"inicijalizacija so konverzaciski konstruktor na matricata C\n";
	 Matrica C=2.0;//inicijalizacija so konverzaciski konstruktor na matricata C
	 cout<<C<<endl;
	 cout<<"Vaka raboti konverzaciskiot konstruktor povikan od f-jata proba\n";
	 proba(3.0);
	 cout<<"Dodeluvanje na vrednost na element od matricata A(0,0)=0:\n";
	 A(0,0)=0;
	 cout<<A<<endl;//za proverka na dadenata operacija
	 cout<<"Elementot A(1,1) ima vrednost: ";
	 cout<<A(1,1)<<endl;//za pecatenje na element od matricata
	 cout<<"Matrica A+B"<<endl;
     C=A+B;
	 cout<<C;
	 cout<<"Matrica A-B"<<endl;
	 C=A-B;
	 cout<<C;
	 cout<<"Matrica A*B"<<endl;
	 C=A*B;
	 cout<<C;
	 cout<<"Vnesi so koj broj sakas da ja pomnozis matricata B\n";
	 cin>>br;
	 cout<<"Matrica broj*B"<<endl;
	 C=br*B;
	 cout<<C;
	 cout<<"Matrica B*broj"<<endl;
	 C=B*br;
	 cout<<C;
	 return 0;

 }
 