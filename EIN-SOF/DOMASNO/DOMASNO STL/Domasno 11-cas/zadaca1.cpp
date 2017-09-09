#include <iostream>
using std::cout;

using std::cin;

using std::ios;


using std::endl;

 

using std::left;

using std::right;

using std::fixed;

#include <cmath>

#include <iomanip>

 using std::showpoint;

 

using std::setw;

using std::setprecision;

 

#include <cstdlib> 

int main(){

int n,m,p;

double koren;

koren=1.0/3;

cout<<"Vnesi broj na elementi:"<<endl;

cin>>n;

cout<<"Vnesi sirina na kolonata:"<<endl;

cin>>m;

cout<<"Vnesi preciznost za decimalnite rezultati:"<<endl;

cin>>p;
cout<<endl;
 cout << left << setw( m ) << "i" << setw( m )

        << "i*i" << setw( m )<< "sqrt(i)" << setw( m )<<"pow(i,1/3)"<< endl << fixed << showpoint;

 cout<<endl;

for(int i=1;i<=n;i++)
{
	cout << left << setw( m ) <<setprecision( p )<< i << setw( m ) <<setprecision( p )<< i*i

        << setw( m )<<setprecision( p ) <<sqrt(i)<<setw(m)<<setprecision( p )<<pow(i,koren) << endl;
}
return 0;

}
 

 

