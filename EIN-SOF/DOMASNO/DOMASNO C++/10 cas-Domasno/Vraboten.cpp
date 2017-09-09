
//Klasi Vraboteni,Profesor, Asistent i Demostrator
 
#include <iostream>
 
using std::cin;
using std::cout;
using std::endl;
 
class Vraboten {
 public:
     Vraboten();
	 Vraboten( char *,char *, unsigned );//konstruktor
	void postavi_v(char *,char *,unsigned);
    void printVraboten();
    ~Vraboten(){};
 private:
    char *ime;
	char *prezime;
    unsigned godina;
};
Vraboten::Vraboten(){} 
Vraboten::Vraboten(char *i,char *p, unsigned y )
{
   ime = new char[strlen(i)+1 ];
   strcpy( ime, i);
   godina = y;
   prezime = new char[strlen(p)+1 ];
   strcpy( prezime, p);
}
void Vraboten::printVraboten()
{
   cout << "Ime " << ime << endl;
   cout << "Prezime " << prezime << endl;
   cout << "Godina " << godina << endl;
}

void Vraboten::postavi_v(char *i,char *p, unsigned y )
{
   ime = new char[strlen(i)+1 ];
   strcpy( ime, i);
   godina = y;
   prezime = new char[strlen(p)+1 ];
   strcpy( prezime, p);
} 


class Profesor: public Vraboten {
 public:
	 Profesor(){};
	 Profesor(char *,char *, unsigned,char *,char *,int );//konstruktor
    void printProfesor();
	void postavi_p(char *,char *, unsigned,char *,char *,int);
 private:
     char *zvanje;
	 char *oblast;
	 int br_predmeti;
};
 
 Profesor::Profesor (char *a,char *b, unsigned c,char *d,char *e,int f ):Vraboten(a,b,c)
{
   zvanje = new char[strlen(d)+1 ];
   strcpy( zvanje, d);
   br_predmeti = f;
   oblast = new char[strlen(e)+1 ];
   strcpy( oblast, e);
}
void Profesor::printProfesor()
{
   printVraboten();
  cout << "Zvanje " << zvanje << endl;
   cout << "Oblast " << oblast << endl;
   cout << "Br_predmeti " << br_predmeti << endl;
}
void Profesor::postavi_p (char *a,char *b, unsigned c,char *d,char *e,int f )
{	
	postavi_v(a,b,c);
   zvanje = new char[strlen(d)+1 ];
   strcpy( zvanje, d);
   br_predmeti = f;
   oblast = new char[strlen(e)+1 ];
   strcpy( oblast, e);
} 
class Asistent: public Vraboten {
 public:
	 Asistent(){};
	 Asistent(char *,char *, unsigned,char *,char *,int );//konstruktor
    void printAsistent();
	void postavi_a(char *,char *, unsigned,char *,char *,int);
 private:
     char *zvanje;
	 char *mentor;
	 int br_predmeti;
};
 
 Asistent::Asistent (char *a,char *b, unsigned c,char *d,char *e,int f ):Vraboten(a,b,c)
{
   zvanje = new char[strlen(d)+1 ];
   strcpy( zvanje, d);
   br_predmeti = f;
   mentor = new char[strlen(e)+1 ];
   strcpy( mentor, e);
}
void Asistent::printAsistent()
{
   printVraboten();
  cout << "Zvanje " << zvanje << endl;
   cout << "Mentor " << mentor << endl;
   cout << "Br_predmeti " << br_predmeti << endl;
}
void Asistent::postavi_a (char *a,char *b, unsigned c,char *d,char *e,int f )
{	
	postavi_v(a,b,c);
   zvanje = new char[strlen(d)+1 ];
   strcpy( zvanje, d);
   br_predmeti = f;
   mentor = new char[strlen(e)+1 ];
   strcpy( mentor, e);
} 
class Demonstrator: public Vraboten {
 public:
	 Demonstrator(){};
	 Demonstrator(char *,char *, unsigned,char *,char * );//konstruktor
    void printDemonstrator();
	void postavi_d(char *,char *, unsigned,char *,char *);
 private:
     char *odRabotno;
	 char *doRabotno;

};
 
 Demonstrator::Demonstrator (char *a,char *b, unsigned c,char *d,char *e):Vraboten(a,b,c)
{
   odRabotno = new char[strlen(d)+1 ];
   strcpy( odRabotno, d);
   doRabotno = new char[strlen(e)+1 ];
   strcpy( doRabotno, e);
}
void Demonstrator::printDemonstrator()
{
   printVraboten();
  cout << "Pocetok na rabotno vreme " << odRabotno << endl;
   cout << "Kraj na rabotno vreme " << doRabotno << endl;
}
void Demonstrator::postavi_d (char *a,char *b, unsigned c,char *d,char *e )
{	
	postavi_v(a,b,c);
   odRabotno = new char[strlen(d)+1 ];
   strcpy( odRabotno, d);
   
   doRabotno = new char[strlen(e)+1 ];
   strcpy( doRabotno, e);
} 
void meni();
int main()
{ 
  int izbor,izbor2,izbor3,i=1,j=1,k=1,br_p;
  char ime[25],prezime[50],zvanje[20],oblast[50],mentor[50],poc_r[15],kraj_r[15];
  unsigned god_v;
  Profesor Niza_P[20];
  Asistent Niza_A[20];
  Demonstrator Niza_D[20];
  meni();
  cin>>izbor;
  while (izbor!=3)
  {
	  switch(izbor){
case 1: cout<<"Vnesi 1 za profesor\n";
        cout<<"Vnesi 2 za asistent\n";
        cout<<"Vnesi 3 za demonstrator\n";
		cin>>izbor2;
		if (izbor2==1)
		{
			cout<<"Vnesi ime, prezime, godina na vrabotuvanje, zvanje, oblast, broj na predmeti:\n";
			cin>>ime;cin>>prezime;cin>>god_v;cin>>zvanje;cin>>oblast;cin>>br_p;
			Niza_P[i].postavi_p(ime,prezime,god_v,zvanje,oblast,br_p);
			i++;
		}
		if(izbor2==3)
		{	
			cout<<"Vnesi ime, prezime, godina na vrabotuvanje, pocetok na rabotno vreme i kraj\n";
			cin>>ime;cin>>prezime;cin>>god_v;cin>>poc_r;cin>>kraj_r;
			Niza_D[j].postavi_d(ime,prezime,god_v,poc_r,kraj_r);
			j++;
		}
		if(izbor2==2)
		{	
			cout<<"Vnesi ime, prezime, godina na vrabotuvanje, zvanje, mentor, broj na predmeti:\n";
			cin>>ime;cin>>prezime;cin>>god_v;cin>>zvanje;cin>>mentor;cin>>br_p;
			Niza_A[k].postavi_a(ime,prezime,god_v,zvanje,mentor,br_p);
			k++;
		}break;
		
case 2:  cout<<"Vnesi 1 za profesori\n";
         cout<<"Vnesi 2 za asistenti\n";
         cout<<"Vnesi 3 za demonstratori\n";
		 cin>>izbor3;
		 if(izbor3==1)
		 {	 if(i>1)	
			 for(int r=1;r<i;r++)
				 Niza_P[r].printProfesor();
			 else
				 cout<<"Nemas vneseno vraboteni-profesori\n";
		 }
		 if(izbor3==2)
		 {		if(k>1)
			 for(int r=1;r<k;r++)
				 Niza_A[r].printAsistent();
				else
				 cout<<"Nemas vneseno vraboteni-asistenti\n";
		 }
		 if(izbor3==3)
		 {	if(j>1)
			 for(int r=1;r<j;r++)
				 Niza_D[r].printDemonstrator();
			 else
				 cout<<"Nemas vneseno vraboteni-demonstratori\n";
		 }
		 break;
	  }
	  meni();
	 cin>>izbor;
  }

	return 0;
}
void meni()
{ cout<<"Vnesi 1 za dodavanje na nov vraboten\n";
  cout<<"Vnesi 2 za printanje na vrabotenite\n";
  cout<<"Vnesi 3 za kraj\n";
}