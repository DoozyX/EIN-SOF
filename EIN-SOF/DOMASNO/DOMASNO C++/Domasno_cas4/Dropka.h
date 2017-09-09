#ifndef DROPKA_H
#define DROPKA_H
//definicija na apstrakten tip dropka
class Dropka {
public:
	Dropka();          //konstruktor
	Dropka( int, int); // predefiniran konstruktor
   void setDropka(int,int);  //f-jata za setiranje na dropkata
   Dropka sobiranje(Dropka, Dropka);//f-ja za sobiranje na dve dropki vraka dropka
   Dropka odzemanje(Dropka, Dropka);//f-ja za odzemanje na dve dropki vraka dropka
   Dropka mnozenje(Dropka, Dropka);//f-ja za mnozenje na dve dropki vraka dropka
   Dropka delenje(Dropka, Dropka);//f-ja za delenje na dve dropki vraka dropka
   void pecatenje();              //f-ja za pecatenje na dropka vo format 3/4
   void pecatenjeReal();          //f-ja za pecatenje na dropka kako realen broj
   void skrati(Dropka &);         //f-ja za skratuvanje na dropkata
private:
   int broitel;
   int imenitel;
}; // kraj na klasata Dropka
#endif