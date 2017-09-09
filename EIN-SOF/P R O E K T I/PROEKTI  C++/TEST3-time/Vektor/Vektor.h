#ifndef VEKTOR_H
#define VEKTOR_H
//definicija na apstrakten tip Vektor
class Vektor {
public:
	Vektor();          //konstruktor
	Vektor( int, int,int); // predefiniran konstruktor
   
   Vektor operator+(Vektor);//operator za sobiranje na dva vektori vraka vektor
   friend Vektor operator+(Vektor ob1, int i);//sobiranje na vektor so int
   friend Vektor operator+(int i, Vektor ob1);//za sobiranje na int so vektor

   Vektor operator-(Vektor);//operator za odzemanje na dva vektora vraka vektor
   friend Vektor operator-(Vektor ob1, int i);//odzemanje na vektor so int
   friend Vektor operator-(int i, Vektor ob1);//za odzemanje na int so vektor
   int operator%(Vektor);//operator za skalarno mnozenje na dva vektori vraka vektor
   Vektor operator*(Vektor);//operator za vektorsko mnozenje na dva vektori vraka vektor
   
   void pecatenje();              //f-ja za pecatenje na dropka vo format 3/4
   
private:
   int x;
   int y;
   int z;
}; // kraj na klasata Dropka
#endif