/*
Zadatak 1.

Kreirajte istu mojalista (1,2). Dodajte element 3 na početak liste te element 4 na kraj liste. Ispišite elemente liste.

Zadatak 2.

U listu iz zadatka 1. dodajte neki element na: a) drugo mjesto b) treće mjesto.
 Poslužite se kodom uz prezentaciju (dodavanje elementa u sredinu liste).

Zadatak 3.

Kreirajte dvije liste L1 i L2 s nekoliko elemenata tipa float. Spojite liste L1 i L2.
 Ispišite liste L1 i L2. Koja je ostala nepromijenjena? Zašto?

Zadatak 4.

Napisati funkciju velicinaL(List Li) koja vraća broj elemenata u listi Li. Zadatak 5.
 Napisati funkciju ispisi_manje(elementtype a, List Li) koja će ispisati samo 
 one elemente liste koji su manji od a. Zadatak 
6. Napisati funkciju uvecaj (List Li, elementtype x) koja će uvećati sve elemente liste Li za broj x.
*/
#include <iostream>

using namespace std;


typedef int elementtype; 
struct element{
	elementtype value;
	element* next;
};
typedef element* List;

void printL(List Li){
	element *t=Li;
	if(t==NULL) cout<<"Prazna lista!"<<endl;
	while(t!=NULL){
		cout<<t->value<<" -> ";
		t=t->next;
	}
	cout<<endl;
}

void mojprint(List l,int x)
    { // 1 2 3 4
        element *n= l;
        if (n==NULL)
            cout<<"lista je prazna"<<endl; 

        while (n!=NULL)
        {   if (n->value == x)
                {
                    n=n->next;
                }
                else
                {
                    n=n->next;
                }
        
        }
        printL(l);
    }

int main()
{
    List lista;
    lista=NULL;
    element *a,*b,*c,*d;
    a= new element;
    b= new element;
    c= new element;
    d= new element;

    a->value=1;
    a->next=b;

    b->value=2;
    b->next=c;

    c->value=3;
    c->next=d;

    d->value=4;
    d->next=NULL;

    lista = a;

 
    //mojprint(lista,3);
   
}