#include <iostream>
using namespace std;

// pocetak izvodenja programa

	int rekurzija(int x)
	{
		if (x==1)
			return 1;
			
		else if (x%2!=0)
			{
			return (x+rekurzija(x-1));
			}
		
		
		else
			{
			 return (rekurzija(x-1));
			}
	

	}
int main(){
	int x;
	cout<<"upisi x:";
	cin>>x;
	cout<<"rijesenje je: "<<rekurzija(x)<<endl;
	system("PAUSE"); 
}