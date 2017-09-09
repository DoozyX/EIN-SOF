#ifndef DROPKA_H
#define DROPKA_H
//definicija na apstrakten tip dropka
class Dropka {
public:
	Dropka();          //konstruktor
	Dropka( int, int); // predefiniran konstruktor
   void setDropka(int,int);  //f-jata za setiranje na dropkata
   Dropka operator+(Dropka);//operator za sobiranje na dve dropki vraka dropka
   Dropka operator-(Dropka);//operator za odzemanje na dve dropki vraka dropka
   Dropka operator*(Dropka);//operator za mnozenje na dve dropki vraka dropka
   Dropka operator/(Dropka);//operator za delenje na dve dropki vraka dropka
   Dropka operator+(int);// operator za sobiranje na dropka so cel broj vraka dropka
   Dropka operator-(int);// operator za odzemanje na dropka so cel broj vraka dropka
   Dropka operator*(int);// operator za mnozenje na dropka so cel broj vraka dropka
   Dropka operator/(int);// operator za delenje na dropka so cel broj vraka dropka
   void pecatenje();              //f-ja za pecatenje na dropka vo format 3/4
   void pecatenjeReal();          //f-ja za pecatenje na dropka kako realen broj
   void skrati(Dropka &);         //f-ja za skratuvanje na dropkata
private:
   int broitel;
   int imenitel;
}; // kraj na klasata Dropka
#endif