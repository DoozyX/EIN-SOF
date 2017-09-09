// Suma na elementi na pole

 

#include <iostream>

using namespace std;

 

 

template<class T > 

T sum(T *pole, int pocetok, int kraj, T init = T()) {

  for(int i=pocetok;i<=kraj;i++)
  

    init += pole[i];
  
  return init;

}

 

int main() {
  
	int poc,kr,n;
  
	float a[35];
  
	cout<<"Vnesi broj na elementi\n";
	cin>>n;

	cout << "Polnenje na elementi na nizata \n";

   for(int i=0;i<n;i++)
   {
	   cin>>a[i];

   }

	cout << "Vnesi pocetok i kraj na nizata\n";
 
	cin>> poc;
  
	cin>> kr;

	while ((poc<0) || (kr>n-1))
	{
		cout << "Vnesi pocetok i kraj na nizata\n";
 
	cin>> poc;
  
	cin>> kr;
	}
  
	cout << sum(a,poc,kr) << endl; // 6
  
	return 0;

} // kraj na main