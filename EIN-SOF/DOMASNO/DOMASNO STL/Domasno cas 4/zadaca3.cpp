#include <vector>

#include <iostream>
#include <stdio.h>
#include <algorithm>

#include<string>
#include<cstring>

using namespace std;


//prototip na funkcijata brisi

vector<string> brisi(vector<string> &v1);

//pocetok na programata
int main( )

{

    // Kreira prazen vektor

    vector <string> v;//prvo formiran vektor

	vector <string> v3;//pomosen vektor
	
    char tekst[200]=" ";//za celata recenica

	char baffer[20]="                   ";  //za eden zbor
	
    string baffer1;

    int i=0,j=0;    //brojaci

	cout<<"vnesi go tekstot\n";

	gets(tekst);//vnesuvanje na teks so space megu zborovite
    
	
	//polnenje na vektorot zbor1
	
	while ( tekst[i] != '\0' )//dodeka ne pritisneme enter
    {
        while ((tekst[i]!=' ') && (tekst[i]!='\0'))//ciklus za sekoj zbor od recenicata koi se odeleni so space
		{
			
			baffer[j]=tekst[i];	//vo baffer se vnesuvaat sekoj zbor	
			i++;
			j++;
		}
	
	
	
	v.push_back(baffer);  //sekoj zbor go stavame vo vektorot
	
	i++;
	j=0;
	for (int a=0;a<19;a++)
		baffer[a]=' '; //go inicijalizirame bafferot na prazen
     
    
	}
  cout<<endl;  

    //otpecati go tekstot 
  for (i = 0; i <v.size() ; i++) {

	
        cout << v[i];//pecatenje na vektorot, t.e. sekoj zbor od recenicata
		cout << endl;

    }
  cout<<endl;
  v3=brisi(v);//vo vektorot v3 se smestuva sredeniot vektor bez dupli zborovi
  
  //otpecati gi zborovite bez duplikatite 
  for (i = 0; i <v3.size() ; i++) {

	
        cout << v3[i];
		cout << endl;

    }
    return 0;
}

//definiranje na funkcijata brisi, za brisenje na duplikati, vraka vektor
vector<string> brisi(vector<string> &v1)
{
vector<string> v2;	
	int j=0;
	int f=1;//flag
	sort(v1.begin(),v1.end());// Sortiranje na vlezniot v1
	


vector<string>::iterator startIterator;//definiranje na iteratori
vector<string>::iterator tempIterator;
startIterator = v1.begin();//na pocetok na vektorot


   //ciklusi za otstranuvanje na duplite zborovi
  for( startIterator = v1.begin(); startIterator != v1.end(); startIterator++ )
  {
  for( tempIterator = startIterator+1; tempIterator != v1.end(); tempIterator++ )	  
  {
	  if (*startIterator==*tempIterator)
		 f=0;// flag za duplikatite
		}
  if (f)//ako nema duplikat polni go v2
	   v2.push_back(*startIterator); //vo vektorot v2 se polni vektor bez duplikati
  f=1;
  }

return v2;//se vraka v2 kako vektor bez duplikati
  		
}//kraj na funkcijata


