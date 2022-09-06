#include <cstdlib>
#include<iostream>
using namespace std;
typedef int elementtype;

struct element{
	elementtype podatak;
	element* sljedeci, *prethodni;
};
struct DQueue{
	element* glava, *rep;
};

void InitDQ(DQueue *pQ){ //inicijalizira prazan red
	pQ->glava=NULL;
	pQ->rep=NULL;
}

bool IsEmptyDQ(DQueue Q){
	if(Q.glava==NULL && Q.rep==NULL)
		return 1;
	return 0;
}

elementtype FrontDQ(DQueue Q){ //vra�a vrijednost na glavi reda
	return Q.glava->podatak;
}

elementtype RearDQ(DQueue Q){ //vra�a vrijednost na repu reda
	return Q.rep->podatak;
}

void EnqueueFrontDQ(elementtype x, DQueue*pQ){ //dodaje x na glavu reda
	element*novi=new element;
	novi->podatak=x;
	novi->prethodni=NULL;
	novi->sljedeci=NULL;
	//dodavanje u prazan red:
	if(pQ->glava==NULL){
		pQ->glava=novi;
		pQ->rep=novi;
		return;
	}
	//dodavanje u neprazan red
	pQ->glava->prethodni=novi;
	novi->sljedeci=pQ->glava;
	pQ->glava=novi;
}

void EnqueueRearDQ(elementtype x, DQueue*pQ){ //dodaje x na glavu reda
	element*novi=new element;
	novi->podatak=x;
	novi->sljedeci=NULL;
	novi->prethodni=NULL;
	//dodavanje u prazan red:
	if(pQ->glava==NULL){
		pQ->glava=novi;
		pQ->rep=novi;
		return;
	}
	//dodavanje u neprazan red
	pQ->rep->sljedeci=novi;
	novi->prethodni=pQ->rep;
	pQ->rep=novi;
}
void DequeueFrontDQ(DQueue*pQ){ //bri�e element s glave reda
	element *t;
	t=pQ->glava;
	if(pQ->glava==pQ->rep){
		pQ->glava=NULL;
		pQ->rep=NULL;
	}
	else{
		pQ->glava=t->sljedeci;
		pQ->glava->prethodni=NULL;
	}
	delete t;	
}

void DequeueRearDQ(DQueue*pQ){ //bri�e element s glave reda
	element *t;
	t=pQ->rep;
	if(pQ->rep==pQ->glava){
		pQ->rep=NULL;
		pQ->glava=NULL;
	}
	else{
		pQ->rep=t->prethodni;
		pQ->rep->sljedeci=NULL;
	}
	delete t;
}
void PrintDQ(DQueue Q){ //pomo�na funkcija za ispis reda
	if(IsEmptyDQ(Q))
		cout<<"Prazan red!"<<endl;
	else{
		cout<<"Red:  ";
		element *t=Q.glava;
		while(t!=NULL){
			cout<<t->podatak<<" <- ";
			t=t->sljedeci;
		}
		cout<<endl;
		
	}
		
}

void PrintDQE(DQueue Q){ //pomo�na funkcija za detaljni ispis reda
	cout<<"Glava: "<<Q.glava<<" "<<"Rep: "<<Q.rep<<endl;
	if(IsEmptyDQ(Q))
		cout<<"Prazan red!"<<endl;
	else{
		element *t=Q.glava;
		while(t!=NULL){
			//cout<<".................."<<endl;
			cout<<"Podatak: "<<t->podatak<<" ";
			cout<<"Adresa: "<<t<<" ";
			cout<<"Prethodni: "<<t->prethodni<<" ";
			cout<<"Sljedeci: "<<t->sljedeci<<endl;
			cout<<".................."<<endl;
			t=t->sljedeci;
		}
		cout<<endl;
		
	}
		
}