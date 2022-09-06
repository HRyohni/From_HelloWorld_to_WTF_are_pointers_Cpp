#include <iostream>
using namespace std;

// pocetak izvodenja programa
int main(){
	// Zadatak 1
	int x;
cout<<"upisi jedan broj"<<endl;
	cin>>x;
while (x>1)
	{
	if (x-3<=0)
		break;
	cout<<x-3<<" ";
	x=x-3;
	}
cout<<endl;
	
			//Zadatak 2
		
	int y=1,djeljivoDva=0, djeljivoTri=0;
cout<<"upisi brojeve"<<endl;
		
	do	
	{
	cin>>y;
	
	if (y%2==0)
		djeljivoDva++;
	if (y%3==0)
		djeljivoTri++;
	
	}
	while (y%2 || y%3);

cout<<"Djeljivo s 2 je: "<<djeljivoDva<<" Djeljivo sa 3 je: "<<djeljivoTri<<endl;

			//Zadatak 3
		int z, sum,counter=0;
		do
		{
		cout<<"upisi broj: ";
		cin>>z;
		
		cout<<endl;
		if (z>99 && z<1000)
			sum+=z;
		counter++;
		}
		while (sum<=1000);
		cout<<"upisanih brojeva je: "<<counter<<" suma je:"<<sum<<endl;

	system("PAUSE");
}