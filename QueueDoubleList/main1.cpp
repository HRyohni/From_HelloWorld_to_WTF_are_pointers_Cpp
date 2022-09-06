#include<iostream>
#include<string>
#include<cstdlib>
#include "ATPQueueDoubleList.h"
using namespace std;


int main(){
  	elementtype x;
	DQueue Q;
	InitDQ(&Q);
	
	int izbor;

	do { 
    
		cout<< "1. Ispis dvostranog reda" << endl;
		cout<< "2. Dodavanje elementa na celo reda" << endl;
		cout<< "3. Dodavanje elementa na rep reda" << endl;
		cout<< "4. Brisanje elementa sa cela reda" << endl;
		cout<< "5. Brisanje elementa sa repa reda" << endl;
		cout<< "6. Citanje elementa sa cela reda" << endl;
		cout<< "7. Citanje elementa sa repa reda" << endl;
		cout<< "8. Ispis dvostranog reda - detaljno" << endl;
		cout<< "0. Izlaz" << endl<< endl;
		cout<< "Izbor: ";
		cin >> izbor;
		switch(izbor) {
			case 1:
				PrintDQ(Q);
				cout<<"-----------------------------"<<endl;
				break;
			case 2: 
				cout<<"Upisi vrijednost elementa:";
				cin>>x;
				EnqueueFrontDQ(x,&Q);
				cout<<"-----------------------------"<<endl;
				break;
			case 3:
				cout<<"Upisi vrijednost elementa:";
				cin>>x;
				EnqueueRearDQ(x,&Q);
				cout<<"-----------------------------"<<endl;
				break;
			case 4:
				DequeueFrontDQ(&Q);
				cout<<"-----------------------------"<<endl;
				break;
			case 5:
				DequeueRearDQ(&Q);
				cout<<"-----------------------------"<<endl;
				break;
			case 6:
				cout<<FrontDQ(Q)<<endl;
				break;
			case 7:
				cout<<RearDQ(Q)<<endl;
				break;
			case 8:
				PrintDQE(Q);
				cout<<"-----------------------------"<<endl;
				break;

		}
	} while(izbor!=0);
	cout<<"Kraj"<<endl;
  




/*  
  

  
	cout<<"zadatak 2"<<endl;
  // 7x4-6x3+2x2+5
  polinom kurac,kurac2,kurac3;
  Zero(&kurac);Zero(&kurac2);
  Attach(&kurac,0,5);
  Attach(&kurac,2,2);
  Attach(&kurac,3,6);
  Attach(&kurac,4,7);
  Print(kurac);
  suprotan(kurac,kurac2);
  
  
  cout<<"\n"<<"\n"<<"\n"<<"\n"<<endl;
	polinom A,B;
	Zero(&A);Zero(&B);
	
	if(IsZero(A)) 
		cout<<"Nul-polinom!"<<endl;	
	cout<<"Deg(A)="<<Degree(A)<<endl;
	
	cout<<" A = ";

	//spremanje koeficijenata polinoma:
	Attach(&A,4,2);
	Attach(&A,3,-4);
	Attach(&A,0,-5);
  
	Attach(&B,4,5);
	Attach(&B,6,15);
	Attach(&B,3,-1);
	Attach(&B,1,-1);
	Attach(&B,0,1);
	Attach(&B,6,15);
	//
	cout<<"kurac Deg(A)="<<Degree(A)<<endl;
	cout<<"A = ";
	Print(A);
	
	cout<<endl<<"Deg(B)="<<Degree(B)<<endl;
	cout<<"B = ";
	Print(B);
	
	polinom C;
	Zero(&C);
	Add(A,B,&C); //C=A+B
	
	cout<<endl<<"C = A+B = ";
	Print(C);


	oduzmi1(A,B,&C); //C=A-B
	cout<<endl<<"C = A-B = ";
	Print(C);
	oduzmi2(A,B,&C);
	cout<<endl<<"C = A-B = ";
	Print(C);

	Mult(B,A,&C); //C=A*B
	cout<<endl<<"C = B*A = ";
	Print(C);

*/
	return 0;
}