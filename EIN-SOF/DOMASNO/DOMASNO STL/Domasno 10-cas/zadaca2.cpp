// progrmama za zadaca 2

#include <iostream>
#include<exception>
 

using std::cout;

using std::endl;

using std::runtime_error; 

using namespace std;

#include <stdexcept>

//klasa Garaza
class Garaza{

public:

		void problem() throw(runtime_error)//f-ja problem koja frla isklucok ako ima problem so motorot
	{

		if(!(motor))//ako ima problem so motorot frli isklucok

			throw runtime_error("zaradi problem so motorot");
	}

	//konstruktor za Garaza vo koj se lovi problemot so motorot i se frla drug isklucok
	Garaza(bool i=true):motor(i){
		
		cout<<"Konstruktor"<<endl;

		try{ //blok za fakanje na problemot so motorot
			problem();
		}

		catch(runtime_error &error){

			cout<<"Nastanal isklucok: "<<error.what()<<endl;

			throw runtime_error("zaradi drug isklucok frlen od konstruktorot");//frlanje na nov isklucok koj se lovi vo main()


		}


	}
	//destruktor
	~Garaza()
	{
		cout<<"Destruktor"<<endl;
	}

	private:
		bool motor;//privatna clenka motor od tip bool za zapisuvanje dali ima problem (motor=false) ili ne (motor=true)
};//kraj na klasata Garaza

 
//pocetok na programata
int main()

{


	//blok za lovenje na isklucok od objektot Avtomobil koj e instanciran od klasata Garaza so problem vo motorot
   try {

   Garaza Avtomobil(false); 

  } catch ( runtime_error &error )

   {

      cout << "Nastanal isklucok: " << error.what() << endl;

 

   }

   return 0;

 

} //kraj 

 
