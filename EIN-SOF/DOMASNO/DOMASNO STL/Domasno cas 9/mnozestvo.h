#ifndef MNOZESTVO_H
#define MNOZESTVO_H

#include <iostream>

using std::cout;

using std::endl;

using std::ostream;

using std::istream;

#include "kvadrat.h"

#include "pravoagolnik.h"

#include "krug.h"

template< class T >

//class Mnozestvo
class Mnozestvo {

 public:

    Mnozestvo(); //konstruktor
   
	friend ostream &operator<<( ostream &, const Mnozestvo & );//friend f-ja za pecatenje


    void push(  T a );

 
    void max(); //funkcija template
   
    static int getStatic(){return br;}
    
	~Mnozestvo(); //destruktor
 
private:

   static int br;      // broj na elementi

   T *Ptr;  // pole 

}; // kraj na klasa


//definicija na konstruktor za klasata

template<class T> 

Mnozestvo<T>::Mnozestvo(){
 
	Ptr=new T[50];
 
}//kraj na konstruktorot

//inicijalizacija na static clenot co klasata

template <class T> int Mnozestvo<T>::br = 0 ;

//definiranje na friend funkcija

template<class T>
  
ostream &operator<<( ostream &output, const Mnozestvo<T> &a )

	{
		for(int i=0;i<a.br;i++)
			
			output<<a.Ptr[i];
		    
	return output;
}

//definiranje na funkcijata push 

template<class T>

void Mnozestvo<T>::push(  T a )
{	
		int f=1;
	
	
		if(br>0)	
			
		{
			for(int i=0;i<br;i++)
		
			{
				if(Ptr[i]==a)
		 
				f=0;
			}
			if (f)
			{
				Ptr[br] = a; //smesti element
			    br++;
			}
		}
	else 
	{ Ptr[br]=a;
	br++;
	}

  }//kraj na funkcijata push


//definiranje na funkcijata max 
template<class T> 
void Mnozestvo<T>::max()
   {
	   T pom;
	   if(br>0)
	   {
		   pom= Ptr[0];
			for(int i=1;i<br;i++)
				if(pom<Ptr[i])
					pom=Ptr[i];
				cout<< pom;
	   }
	   else
		   cout<<"Prazno mnozestvo";
   }//kraj na funkcijata max

// destruktor za klasata mnozestvo
template<class T> 
Mnozestvo<T>::~Mnozestvo(){
    
	delete [] Ptr;
	
} //kraj na destruktorot

#endif