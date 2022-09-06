typedef int elementtype;
#include <iostream>
using namespace std;

struct element{
	elementtype value;
	element* next;
};

typedef element* Stack;

void DeleteAllS(Stack *pS){ //pretvara stog u prazan stog i oslobadja memoriju
	element*t, *t1;
	t=*pS;
	while(t!=NULL){
		t1=t;
		t=t->next;
		delete t1;
	}
	*pS=NULL;	
}
void InitS(Stack *pS){ //pretvara stog u prazan stog
	*pS=NULL;	
}
bool IsEmptyS(Stack S){ // vra�a true ako je stog prazan
	if (S==NULL) return 1;
	return 0;
}
void PushS(elementtype x, Stack *pS){ //stavlja podatak x na vrh stoga
	element *novi=new element;
	novi->value=x;
	novi->next=*pS;
	*pS=novi;
	
}

void PopS(Stack *pS){ //skida podatak s vrha stoga
	element *t=*pS;
	*pS=t->next;
	delete t;
}
elementtype TopS(Stack S){ //vraca podatak s vrha stoga
	return S->value;
}

//pomocna funkcija za ispis (nije dio ATP-a):
void PrintS(Stack S){
	element*t=S;
	if(t==NULL)
		cout<<"Prazan stog!"<<endl;
	else
	while(t!=NULL){
		cout<<t->value<<endl;
		t=t->next;
	}
}


