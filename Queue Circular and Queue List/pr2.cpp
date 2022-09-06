#include<iostream>
#include<cstdlib>
using namespace std;
#include "ATPQueueList.h"
#include "ATPStackArray.h"
void premjesti_manje(elementtype a, Queue *pQ) {//sve elemente manje od a premjestiti na kraj reda
	Queue pom1, pom2;
	elementtype f;
	InitQ(&pom1);
	InitQ(&pom2);
	while(!IsEmptyQ(*pQ)){
		f=FrontQ(*pQ);
		if(f<a)	
			EnqueueQ(f,&pom2);
		else
			EnqueueQ(f,&pom1);
		DequeueQ(pQ);
	}
	while(!IsEmptyQ(pom1)){
		EnqueueQ(FrontQ(pom1),pQ);
		DequeueQ(&pom1);
	}
		
	while(!IsEmptyQ(pom2)){
		EnqueueQ(FrontQ(pom2),pQ);
		DequeueQ(&pom2);
	}
}
void obrni_red(Queue *pQ){ //pomocu pomocnog stoga obrni redoslijed elemenata u redu
	Stack S;
	InitS(&S);
	while(!IsEmptyQ(*pQ)){
		PushS(FrontQ(*pQ), &S);
		DequeueQ(pQ);
	}
	while(!IsEmptyS(S)){
		EnqueueQ(TopS(S), pQ);
		PopS(&S);
	}
}
int main(){
	
	//inicijalizacija reda:
	Queue A;
	InitQ(&A);
	
	//dodajmo elemente u red: 
	for (int i=1;i<=10;i++)
		EnqueueQ(rand()%25, &A);
	PrintQ(A);
	//obrnimo red: 
	cout<<"Obrnuti red: ";
	obrni_red(&A);
	//premjestimo elemente manje od 10 na kraj:
	PrintQ(A);
	premjesti_manje(10, &A);
	PrintQ(A);
	

	
}
