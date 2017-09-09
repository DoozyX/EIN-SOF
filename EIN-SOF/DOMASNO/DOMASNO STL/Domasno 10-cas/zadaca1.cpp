// programa za zadaca 1

#include <iostream>

 

using std::cout;

using std::endl;

 

#include <memory>

 

using std::auto_ptr; // definicija na klasata auto_ptr

 

class Student {

public:

 

   // Student konstruktor

   Student( double i = 0 )

      : prosek( i )

   {

      cout << "Konstruktor za Student " << prosek << endl;

 

   }

 

   // Student destruktor

   ~Student()

   {

      cout << "Destruktor za Student, objektot student so prosek  " << prosek <<" e unisten"<< endl;

 

   }

    void setStudent( double i )

   {

      prosek = i;

 

   }

 

   double getStudent() const

   {

      return prosek;

 

   }

 

private:

   double prosek;

 

};  // kraj na klasa Student

 

// upotreba na auto_ptr

int main()

{

   cout << "Kreiranje na auto_ptr objekt sto "

        << "pokazuva naStudent\n";

 

   // postavi auto_ptr

   auto_ptr< Student > ptrStudent( new Student( 8.5 ) );

   auto_ptr< Student > ptrStudent1;//pokazuvac na objekt Student


   ptrStudent1=ptrStudent;

   cout<<"Frlame pokazuvac na sozdaden objekt koj ima vrednost:"<<( *ptrStudent1 ).getStudent();

   cout << "\nUpotrebuvam auto_ptr za manipuliranje so Student\n";


   


   cout << "Vtoriot objekt: "

        << ( *ptrStudent1 ).getStudent()

        << " e sozdaden." << endl;

   ptrStudent->setStudent( 9 );


   cout << "Student po setStudent: "

        << ( *ptrStudent ).getStudent()

        << "\nkraj na programata" << endl;


 

 

   return 0;

 

}  // kraj na main

 