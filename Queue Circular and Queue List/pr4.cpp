#include<iostream>
using namespace std;
#include "ATPQueueCircular.h"

int main(){
	// Queue A; 		deklaracija novovg red
	// InitQ(&A);		inicijalizacija reda:
	// IsEmptyQ(A);		provjera da li je red prazan
	// FrontQ(A);		citanje podatka na celu reda
	// EnqueueQ(3, &A);	ubacivanje podatka 3 na zacelje reda
	// DequeueQ(&A);	brisanje podatka sa cela reda
	// PrintQ(A);		ispisi clanove reda
	
	Queue red;
	InitQ(&red);
	
	EnqueueQ(8,&red);
	EnqueueQ(-2,&red);
	EnqueueQ(5,&red);
	EnqueueQ(4,&red);
	EnqueueQ(-6,&red);
	EnqueueQ(7,&red);
	PrintQ(red);
	/*
	cout<<"izbacivanje n elemenata iz reda:";
	
	int n, i=0;
	cout<<"upisi n:";
	cin>>n;
	while(i<n && !IsEmptyQ(red))
	{
		DequeueQ(&red);
		i++;
	}
	PrintQ(red);
	*/
	Queue pom;
	InitQ(&pom);
	while(!IsEmptyQ(red)){
		if(FrontQ(red)>=0) EnqueueQ(FrontQ(red), &pom);
		DequeueQ(&red);
	}
	while(!IsEmptyQ(pom)){
		EnqueueQ(FrontQ(pom), &red);
		DequeueQ(&pom);
	}
	PrintQ(red);
	return 0;
	
}
