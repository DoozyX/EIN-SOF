// debagiranje1 (animal.h)

 

#ifndef ANIMAL_H

#define ANIMAL_H

 

// Zabeleshka: klasata Animal e apstraktna klasa

// definicija na klasata Animal 

class Animal {

 

public:

   Animal( int = 0, int = 0 );

 

   void setHeight( int );

   virtual int getHeight() const;

 

   void setWeight( int );

   virtual int getWeight() const;

 

   virtual void print() const;   

 

private:

   int height;

   int weight;

 

}; // kraj na klasata Animal

 

#endif // ANIMAL_H

 

