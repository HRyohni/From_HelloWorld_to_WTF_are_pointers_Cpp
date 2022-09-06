#include<iostream>
using namespace std;
#include "ATPQueueCircular.h"

int main(){
	
	//inicijalizacija reda:
	Queue A;
	InitQ(&A);
	
	if (IsEmptyQ(A))
		cout<<"Prazan red."<<endl;
	PrintQ(A);
	
	//dodajmo elemente u red: 
	EnqueueQ(3, &A);
	PrintQ(A);
	for(int i=10;i<22;i++)
		EnqueueQ(i, &A);
	PrintQ(A);
	
	//ispišimo prvih 5 elemenata reda: 
	for(int i=1;i<=5;i++){
		cout<<"Na pocetku reda je "<<FrontQ(A)<<endl;
		DequeueQ(&A);
	}
	PrintQ(A);
	
	//ispraznimo red:
	while(!IsEmptyQ(A))	
		DequeueQ(&A);
	PrintQ(A);
	
	return 0;
	
}
