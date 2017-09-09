//Programa za operaci so dropki
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
#include "Dropka.h"
int main()
{   int br1,im1,br2,im2;//deklariranje na promenlivi za imenitelite i broitelite na dropkite
   Dropka Dropka1,Dropka2,Dropka3,Dropka4,Dropka5,Dropka6;  //definiranje na dropkite
    cout<<"Vnesi go broitelot na prvata dropka\n";//vnesuvanje na broitelot na 1-ta dropka
    cin>>br1;
    cout<<"Vnesi go imenitelot na prvata dropka\n";//vnesuvanje na imenitelot na 1-ta dropka
    cin>>im1;
     cout<<"Vnesi go broitelot na vtorata dropka\n";//vnesuvanje na broitelot na 2-ta dropka
    cin>>br2;
    cout<<"Vnesi go imenitelot na vtorata dropka\n";//vnesuvanje na imenitelot na 2-ta dropka
    cin>>im2;
    Dropka1.setDropka(br1,im1);//setiranje na 1-ta dropka
    Dropka2.setDropka(br2,im2);//setiranje na 2-ta dropka
    cout << "Dropka1 = ";
   Dropka1.pecatenje();
   Dropka1.pecatenjeReal();
   cout << "\nDropka2 = ";
   Dropka2.pecatenje();
   Dropka2.pecatenjeReal();	
   Dropka1.skrati(Dropka1);
   Dropka2.skrati(Dropka2);
   cout << "\nDropka1 po skratuvanjeto = ";
   Dropka1.pecatenje();
   Dropka1.pecatenjeReal();
   cout << "\nDropka2 po skratuvanjeto = ";
   Dropka2.pecatenje();
   Dropka2.pecatenjeReal();	
   Dropka3 = Dropka3.sobiranje(Dropka1,Dropka2);   // vo dropka 3 e smesten rezultatot od sobiranjeto
   cout << "\n\nPo sobiranjeto, Dropka = ";
   Dropka3.pecatenje();
   cout << "\nPo skratuvanjeto na soberenata dropka = ";
   Dropka3.skrati(Dropka3);
   Dropka3.pecatenje();
   Dropka3.pecatenjeReal();
   Dropka4 = Dropka4.odzemanje(Dropka1,Dropka2);   // vo dropka 4 e smesten rezultatot od odzemanjeto
   cout << "\n\nPo odzemanjeto, Dropka = ";
   Dropka4.pecatenje();
   cout << "\nPo skratuvanjeto na odzemenata dropka = ";
   Dropka4.skrati(Dropka4);
   Dropka4.pecatenje();
   Dropka4.pecatenjeReal();
   Dropka5 = Dropka5.mnozenje(Dropka1,Dropka2);   // vo dropka 5 e smesten rezultatot od mnozenjeto
   cout << "\n\nPo mnozenjeto, Dropka = ";
   Dropka5.pecatenje();
   cout << "\nPo skratuvanjeto na mnozenjeto e = ";
   Dropka5.skrati(Dropka5);
   Dropka5.pecatenje();
   Dropka5.pecatenjeReal();
   Dropka6 = Dropka6.delenje(Dropka1,Dropka2);   // vo dropka 6 e smesten rezultatot od delenjeto
   cout << "\n\nPo delenjeto, Dropka = ";
   Dropka6.pecatenje();
   cout << "\nPo skratuvanjeto na delenjeto e = ";
   Dropka6.skrati(Dropka6);
   Dropka6.pecatenje();
   Dropka6.pecatenjeReal();
   cout << endl;
   return 0;
} // kraj main
