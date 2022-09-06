#include <iostream>
#include "polinomATP.h"
using namespace std;



void oduzmi1(polinom p1, polinom p2, polinom *p3){ //u *p3 sprema (p1-p2)
	Zero(p3);
	int d1=Degree(p1),d2=Degree(p2), d3;
	if(d1<d2) d3=d2;
	else d3=d1;
	for(int i=0;i<=d3;i++){
		double t=Coef(p1,i)-Coef(p2,i);
		Attach(p3, i, t);
	}	
}
void oduzmi2(polinom p1, polinom p2, polinom *p3){ //u *p3 sprema (p1-p2) pomocu funkcije Add()
	polinom p2neg; //pomocni polinom
	Zero(&p2neg);
	for(int i=0;i<=Degree(p2);i++){
		double t=-Coef(p2,i);
		Attach(&p2neg,i, t);
	}
	Add(p1,p2neg,p3);
}

/*Pomoću gotovih funkcija iz ATP-a polinom napišite funkciju void suprotan(polinom p1, polinom*p2)
koja u polinom *p2 sprema suprotan polinom polinoma p1. */
void Print(polinom p){ //ispisuje koeficijente i potencije od vodeceg do slobodnog koeficijenta
	if(IsZero(p)) {
		cout<<0<<endl;return;
	}
	for(int i=Degree(p);i>=0;i--)
			cout<<" "<<Coef(p,i)<<"*x^"<<i<<" ";
	cout<<endl;
}

void  suprotan(polinom p1, polinom p2)
{ for (int i =0; i<=Degree(p1);i++)
    Attach(&p2,i, -(Coef(p1,i)));
  Print(p2);
}


bool funkcija (polinom* p1)
	{
	int broj=0;
	for(int i =0;i<=Degree(*p1);i++)
		{
		if (Coef(*p1,i)<0)
			broj++;
		}
		return broj;
	
	}
int main(){
	polinom P1;
	Attach(&P1,2,4);
	Attach(&P1,6,-7);
	Attach(&P1,-1,2);
	Attach(&P1,2,32);
	Attach(&P1,-1,5);
	Attach(&P1,5,-7);
	cout<<funkcija(&P1)<<endl;
				
	system("PAUSE");
}