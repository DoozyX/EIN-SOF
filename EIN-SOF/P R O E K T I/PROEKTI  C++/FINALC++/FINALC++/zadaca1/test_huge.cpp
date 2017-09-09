// test_huge.cpp

// Test program za HugeInt.

#include <iostream>

 

using std::cout;

using std::endl;

 

#include "hugeint1.h"

 

int main()

{

   HugeInt n1( 7654321 );

   HugeInt n2( 7891234 );

   HugeInt n3( "99999999999999999999999999999" );

   HugeInt n4( "1" );

   HugeInt n5;

 

   cout << "n1 e " << n1 << "\nn2 e " << n2

        << "\nn3 e " << n3 << "\nn4 e " << n4

        << "\nn5 e " << n5 << "\n\n";

 

   n5 = n1 + n2;

   cout << n1 << " + " << n2 << " = " << n5 << "\n\n";

 

   cout << n3 << " + " << n4 << "\n= " << ( n3 + n4 ) 

        << "\n\n";

 

   n5 = n1 + 19;

   cout << n1 << " + " << 9 << " = " << n5 << "\n\n";

 

   n5 = n2 + "10000";

   cout << n2 << " + " << "10000" << " = " << n5 << endl;

 

   return 0;

 

} // kraj main

