#include<iostream>
#include<cstdlib>
typedef int elementtype;
using namespace std;
struct element{
	elementtype pod;
	element* sljed;
};
struct Red{
	element*celo, *zacelje;
};

void dodaj(elementtype x, Red *pQ){
	
	element *novi=new element;
	novi->pod=x;
	novi->sljed=NULL;
	//ako je red prazan:
	if(pQ->celo==NULL){
		pQ->celo=novi;
		pQ->zacelje=novi;
		return;
	}
	
	if(x<0)	{
		pQ->zacelje->sljed=novi;
		pQ->zacelje=novi;
	}
	else {
		novi->sljed=pQ->celo;
		pQ->celo=novi;
	}
}
void PrintQ(Red Q){ //pomoæna funkcija za ispis reda
		element *t=Q.celo;
		while(t!=NULL){
			cout<<t->pod<<" ";
			t=t->sljed;
		}
		cout<<endl;
		
	}
		
int main(){
	Red A;
	A.celo=NULL; //prazan red
	dodaj(-1,&A);
	dodaj(2,&A);
	dodaj(-3,&A);
	for(int i=1;i<6;i++){
		int a=rand()%10-4;
		cout<<"Dodajem "<<a<<endl;
		dodaj(a, &A);
	}		
	PrintQ(A);	
}
