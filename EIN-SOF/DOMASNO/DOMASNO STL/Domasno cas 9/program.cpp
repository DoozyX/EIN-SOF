#include <iostream>

using std::cout;

using std::cin;

using std::endl;

using std::ostream;

using std::istream;

#include "kvadrat.h"

#include "pravoagolnik.h"

#include "krug.h"

#include "mnozestvo.h"

//prototip na funkcijata meni
void meni();

//pocetok na glavnata programa
int main()
{
	Mnozestvo<Pravoagolnik> Pravoagolnici;    //specijalizacija na klasata Mnozestvo so Pravoagolnik

	Mnozestvo<Kvadrat> Kvadrati; //specijalizacija na klasata Mnozestvo so Kvadrat

	Mnozestvo<Krug> Kruznici; //specijalizacija na klasata Mnozestvo so Krug

	int izbor; //za izbor od meni
	
	Pravoagolnik a; //za vnesuvanje na pravoagolnik

	Kvadrat b; //za vnesuvanje na kvadrat

	Krug c; //za vnesuvanje na krug

	char izbor2; //izbor za koe mnozestvo

	meni();
	cin>>izbor;

	while(izbor!=9)
	{
		switch(izbor){
		case 1:

			cout<<"Vnesi pravoagolnik element vo mnozestvoto pravoagolnici:\n";
			cin>>a;

			Pravoagolnici.push(a);
			break;

		case 2:

			cout<<"Vnesi kvadrat element vo mnozestvoto kvadrati:\n";
			cin>>b;

			Kvadrati.push(b);
			break;

		case 3:

			cout<<"Vnesi krug element vo mnozestvoto kruznici:\n";
            cin>>c;
			
			Kruznici.push(c);

		
			break;

		case 4:

			cout<<"Mnozestvoto Pravoagolnici e:\n";

			cout<<Pravoagolnici;

			break;

		case 5:

			cout<<"Mnozestvoto Kvadrati e:\n";

			cout<<	Kvadrati;

			break;

		case 6:

			cout<<"Mnozestvoto Kruznici e:\n";

			cout<<Kruznici;

			break;

		case 7:

			cout<<"Vnesi od koe mnozestvo sakas najgolem element,Prav(P),Kvad(K), Krug(O) \n";
			
			cin>>izbor2;

			if (izbor2=='P')
			{	
				cout<<"Maksimalen element na mnozestvoto Pravoagolnici e:"<<endl;Pravoagolnici.max();cout<<endl;}


			if (izbor2=='B')
			{
				cout<<"Maksimalen element na mnozestvoto Kvadrati  e:"<<endl;Kvadrati.max();cout<<endl;}


			if (izbor2=='C')
			{	
				cout<<"Maksimalen element na mnozestvoto Kruznici e:"<<endl;Kruznici.max();cout<<endl;}

			break;

		case 8:

			cout<<"Brojot na elementi vo mnozestvoto Pravoagolnici se:  "<<Pravoagolnici.getStatic()<<endl;
			
			cout<<"Brojot na elementi vo mnozestvoto Kvadrati se:  "<<Kvadrati.getStatic()<<endl;

			cout<<"Brojot na elementi vo mnozestvoto Kruznici se:  "<<Kruznici.getStatic()<<endl;

			break;

		default:
			
			cout<<"Vnesovte pogresen izbor obidete se povtorno\n";

			break;
		}

		meni();

		cin>>izbor;



	}

	return 0;
}//kraj na main

//definiranje na funkcijata meni
void meni()
{
	cout<<endl;
	cout<<"1. Dodaj pravoagolnik\n";
	cout<<"2. Dodaj kvadrat\n";
	cout<<"3. Dodaj krug\n";
	cout<<"4. Prikazi mnozestvoto na pravoagolnici\n";
	cout<<"5. Prikazi mnozestvoto na kvadrati\n";
	cout<<"6. Prikazi mnozestvoto na kruznici\n";
	cout<<"7. Prikazi najgolemi elementi\n";
	cout<<"8. Prikazi broj na elementi vo mnozestvata \n";
	cout<<"9. Za kraj\n";
} //kraj na funkciajta

