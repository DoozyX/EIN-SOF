#include <iostream>
using namespace std;
#include <iomanip>
#include <stdio.h>
using std::setprecision;
using std::setiosflags;
using std::setw;

class Stedac
{
 public:
        void vnesi_podatoci();
        void prikazi_podatoci();
        void uplata(unsigned long i);
        void isplata(unsigned long i);
        long sostojba();

  private:
        int broj;
        char imeprezime[30], adresa[50];
        long saldo;
};
void Stedac::vnesi_podatoci()
{
    cout<<"Vnesi broj an smetka"<<endl;
    cin>>broj;
    cout<<"Vnesi ime prezime"<<endl;
    gets(imeprezime);
    cout<<"Vnesi adresa"<<endl;
    gets(adresa);
    cout<<"Vnesi saldo na smetkata"<<endl;
    cin>>saldo;
}
void Stedac::prikazi_podatoci()
{
    cout<<"Broj           ImePrezime        Adresa                saldo"<<endl;
    cout<<setw( -5 )<<broj<<setw(25)<<imeprezime<<setw(25)<<adresa<<setw(8)<<saldo<<endl;
}
void Stedac::uplata(unsigned long i)
{
    saldo+=i;
}
void Stedac::isplata(unsigned long i)
{

   if (i<=saldo)
    {
      saldo-=i;
      cout<<"Na vasata smetka imate uste "<<saldo<<" denari "<<endl;
    }
    else
    {
        cout<<"Nemate tolkava suma na denari"<<endl;
        cout<<"Na vasata smetka imate uste "<<saldo<<" denari "<<endl;

    }


}
long Stedac::sostojba()
{





    return saldo;
}
void printmeni();
int main()
{
    class Stedac stedaci[1000];
    int i=0;
    unsigned long sredstva;
    char izbor;
    printmeni();
    cin>>izbor;
    while (izbor!='f')
    {

    switch (izbor) {
        case 'a':
                  i++;
                  stedaci[i].vnesi_podatoci();

                  break;
        case 'b':
                  stedaci[i].prikazi_podatoci();
                  break;
        case 'c':
                  cout<<"Vnesi kolkava suma ke uplakas"<<endl;
                  cin>>sredstva;
                  stedaci[i].uplata(sredstva);
                  break;
        case 'd':
                  cout<<"Vnesi kolkava suma sakas da podignes"<<endl;
                  cin>>sredstva;
                  stedaci[i].isplata(sredstva);
                  break;
        case 'e':
                  cout<<"Na vasata smetka imate uste "<<stedaci[i].sostojba()<<endl;
                  break;
        default:
                  cout<<"Vnesovte pogresen izbor obidete se povtorno"<<endl;
                  printmeni();
                  break;
      }
       printmeni();
      cin>>izbor;
    }
    return 0;
}

void printmeni()
{
    cout<<"a) Vnesuvanje nov stedac vo sistemot"<<endl;
    cout<<"b) Prikaz na podatoci"<<endl;
    cout<<"c) Uplata na sredstva"<<endl;
    cout<<"d) Isplata na sredstva"<<endl;
    cout<<"e) Prikaz na saldo"<<endl;
    cout<<"f) Za kraj na programot"<<endl;
}
                  
