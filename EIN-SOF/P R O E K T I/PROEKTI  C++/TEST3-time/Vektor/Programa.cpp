//Programa za operaci so vektori so preoptovareni operatori(+,-,*,/)
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
#include "Vektor.h"
int main()
{
Vektor A(1,1,1);
Vektor B(3,2,2);
Vektor C,E,F;
int D;
cout<<"Vektor A e so dimenzii:\n";
A.pecatenje();
cout<<"Vektor B e so dimenzii:\n";
B.pecatenje();
cout<<"Sobiranjeto na ovie vektori e: ";
C=A+B;
C.pecatenje();
cout<<"Odzemanjeto na ovie vektori e: ";
E=A-B;
E.pecatenje();
cout<<"Skalarno mnozenje na ovie vektori e: ";
D=A%B;
cout<<D<<endl;
cout<<"Vektorsko mnozenje na ovie vektori e: ";
E=A*B;
E.pecatenje();
cout<<"Sobiranje na vektorot A so brojot 3 e: ";
A=A+3;
A.pecatenje();
cout<<"Sobiranje na brojot 2 so vektorot B e: ";
B=2+B;
B.pecatenje();
cout<<"Odzemanje na vektorot A so brojot 1 e: ";
A=A-1;
A.pecatenje();
cout<<"Odzemanje na brojot 3 so vektorot B e: ";
B=3-B;
B.pecatenje();



return 0;
}