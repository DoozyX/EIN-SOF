//zadaca1 kvadar manipulacii so niza od objekti Kvadari
#include <iostream>
using namespace std;
//definirame klasa kvadari
class Kvadar {
public:
double volumen();//javna f-ja za presmetuvanje volumen
int plostina(); //f-ja za presmetuvanje plostina
bool neEKocka(); //f-ja koja proveruva dali vneseniot kvadar e kocka ako ne e vraka true
void set ();//za setiranje na kvadarite
void pecati();//za pecatenje na objekt
private:      //privatni elementi dolzina sirina i visina
int dolzina;
int sirina; 
int visina;
}niza[50];//definirame niza od objekti
//pocetok na f-jata za setiranje
void Kvadar::set () {
cout<<"Vnesi dolzina:"; cin>>dolzina;
cout<<"Vnesi sirina:"; cin>>sirina;
cout<<"Vnesi visina:"; cin>>visina;
}//kraj na f-jata za setiranje
//pocetok na f-jata plostina
int Kvadar::plostina() {
return 2*(dolzina*sirina+dolzina*visina+sirina*visina);//f-la za presmetuvanje na plostina
}//kraj na f-jata za plostina
//pocetok na f-jata za volumen
double Kvadar::volumen() {

return (double)(dolzina*sirina*visina)/3;
}//kraj na volumen
//f-ja za pecatenje
void Kvadar::pecati () {
cout<<"dolzinata e:"<<dolzina<<"\n";
cout<<"sirinata e:"<<sirina<<"\n";
cout<<"visinata e:"<<visina<<"\n";
} //kraj na f-jata za pecatenje
//f-ja za proverka dali e kocka ako ne e vraka true
bool Kvadar::neEKocka()
{if((sirina!=dolzina)||(sirina!=visina)||(visina!=dolzina))
return true;
else
return false;//ako se site isti dimenzii vraka false
}//kraj na f-jata ne e kocka
//pocetok na programata
void main()
{int n,min,key,broj;//inicijalizacija
cout<<"Vnesi kolku objekti sakas da sodrzi nizata\n"; // kolku objekti vnesuvame
cin>>n;
for(int i=0;i<n;i++) //vo ovoj ciklus gi vnesuvame site objekti
{cout<<"vnesi gi dimenziite na "<<i<<"-ot objekt\n";
niza[i].set();
}
cout<<"Nizata gi ima slednite objekti:\n";
for(int i=0;i<n;i++) //gi pecatime objektite od nizata
{cout<<i<<"-ot objekt:\n";niza[i].pecati();
}
if(niza[0].neEKocka())
min=niza[0].plostina();//minimalnata plostina ja inicijalizirame na prviot kvadar so uslov da ne e kocka
key=0;
 for(int i=1;i<n;i++)//ja barame minimalnata plostina vo nizata od objekti
 if((min>niza[i].plostina())&&(niza[i].neEKocka()))//uslov za min
 {min=niza[i].plostina();key=i;}
 cout<<"minimalna povrsina e:"<<min<<" toa e "<<key<<"-ot objekt\n";
 cout<<"vnesi go redniot broj na objektot sto sakas da go vidis(od 0 do "<<n-1<<")\n";//vnesuvame koj objekt sakame da go vidime
 cin>>broj;
  if(broj<n)
  {cout<<"objektot e so dimenzii:\n";niza[broj].pecati();} //go ispecatuvme baraniot objekt
  else
  cout<<"ne postoi takov objekt\n";//ne postoi objekt so toj broj

}
