#include <vector>

#include <iostream>

#include <stdio.h>
#include <ctype.h>


#include <algorithm>

#include<string>
using std::string;

using namespace std;

 
//definiranje na template funkcijata palindrom
template<class T>
bool palindrom(vector<T> v1)
{
	bool f=true;
	std::vector<T>::iterator startIterator;//definiranje na iteratori
    std::vector< T >::reverse_iterator reverseIterator;
    startIterator = v1.begin();//na pocetok na vektorot

    
    for ( reverseIterator = v1.rbegin();

         reverseIterator!= v1.rend();

         ++reverseIterator ){
		
		if (*reverseIterator!=*startIterator){
			f=false;
		    break;
		}
		startIterator++;
		}
	
	return f;

}//kraj na funkcijata


int main( )

{

    // Kreira prazen vektor

    vector <char> zbor1;
	

    string baffer1;  //za vlez od tastatura


  
    int i=0,j=0;    //brojaci

	cout<<"vnesi go  zborot\n";
	cin>>baffer1;
	
	//polnenje na vektorot zbor1
	while (baffer1[i]!='\0')
	{
		
		//cin>>c;
		zbor1.push_back(baffer1[i]);
		i++;
	}
  
    
    //otpecati go  zborot
    for (i = 0; i < zbor1.size(); i++) {

        cout << zbor1[i];

    }

    cout << endl;
 
    if (palindrom(zbor1))

		cout<<"Zborot e palindrom\n";
	else

        cout<<"Zborot ne e palindrom\n";  

    return 0;

}

