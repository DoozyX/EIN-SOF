#include <vector>

#include <iostream>

#include <stdio.h>
#include <ctype.h>


#include <algorithm>

#include<string>
using std::string;

using namespace std;

 
//prototip na funkcijata anagram
//template<char>
bool anagram(vector<char> v1,vector<char> v2);
 

int main( )

{

    // Kreira prazen vektor

    vector <char> zbor1;
	vector <char> zbor2;

    string baffer1;  //za vlez od tastatura
	string baffer2;  //za vlez od tastatura

  
    int i=0,j=0;    //brojaci

	cout<<"vnesi go pviot zbor\n";
	cin>>baffer1;
	
	//polnenje na vektorot zbor1
	while (baffer1[i]!='\0')
	{
		
		//cin>>c;
		zbor1.push_back(baffer1[i]);
		i++;
	}
  
    cout<<"vnesi go vtoriot zbor\n";
	cin>>baffer2;
	
	//polnenje na vektorot zbor2
	while (baffer2[j]!='\0')
	{
		//cin>>c;
		zbor2.push_back(baffer2[j]);
		j++;
	}

    //otpecati go prviot zbor
    for (i = 0; i < zbor1.size(); i++) {

        cout << zbor1[i];

    }
    
    cout << endl;
    
	//otpecati go vtoriot zbor
	for (i = 0; i < zbor2.size(); i++) {

        cout << zbor2[i];

    }

    cout << endl;
 
    if (anagram(zbor1,zbor2))

		cout<<"Zborovite se anagrami\n";
	else

        cout<<"Zborovite ne se anagrami\n";  

    return 0;

}

//definiranje na funkcijata anagram
bool anagram(vector<char> v1,vector<char> v2)
{
	bool f=true;
	sort(v1.begin(),v1.end());// Sortiranje na v1
	sort(v2.begin(),v2.end());// Sortiranje na v2
    
	for (int i = 0; i < v1.size(); i++) {
		
		if (tolower(v1[i])!=tolower(v2[i])){
			f=false;
		    break;
		}
		}
	
	return f;

}//kraj na funkcijata


    