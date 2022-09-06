#include <iostream>
#include "polinomATP.h"
using namespace std;

bool funkcija (polinom * p1,polinom* p2, int x)
	{
	if (Coef(*p1,x)<Coef (*p2,x)) return 0;
	else return 1;
	
	}
// pocetak izvodenja programa
int main(){
	polinom P1;
	polinom P2;
	int n;
	cout<<"upisi x"<<endl;
	cin>>n;
	Attach(&P1,2,4);
	Attach(&P1,6,7);
	Attach(&P1,1,2);
	Attach(&P2,2,32);
	Attach(&P2,1,5);
	Attach(&P2,5,7);
		if (funkcija(&P1,&P2,n))
			cout<<"prvi je veci od drugog"<<endl;
		else 
		cout<<"drugi je veci od prvog"<<endl;
		
	system("PAUSE");
}