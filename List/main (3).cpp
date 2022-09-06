#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;


/*
typedef int elementtype; 
struct element{
	elementtype value;
	element* next;
};


element *t; //pomocni pokazivač
t=mylist; // usmjeri t na listu (prvi element)
cout<t->value<<" "; //ispisi vrijednost
t=t->next; //t je sada drugi element
cout<<t->value<<" ";
t=t->next;
cout<<t->value<<endl;
*/
struct elem {
 float x;
 elem* sljedeci;
 };
 typedef elem* List;


void printL(List Li){
	
  elem *t=Li;
  if(t==NULL)
    printL(t);
  
	if(t==NULL) cout<<"Prazna lista!"<<endl;
	while(t!=NULL){
		cout<<t->x<<" -> ";
		t=t->sljedeci;
	}
	cout<<endl;
}

List zadnji_elem (List A){ 
  elem *t=A;
    while (t->sljedeci!= NULL)
      t=t->sljedeci;
  return t;
}



int main() {
List A;
  A=NULL;
  elem *a1,*a2,*a3,*a4;

  a1 = new elem;
  a2 = new elem;
  a3 = new elem;
  a4 = new elem;

  a1->x=132;
  a1->sljedeci=a2;

  
  a2->x=13322;
  a2->sljedeci=a3;

  
  a3->x=32;
  a3->sljedeci=a4;

  
  a4->x=554;
  a4->sljedeci=NULL;
  A=a1;
  printL(A);
  
  printL(zadnji_elem(A));
  

  
return 0;
  
}










































/*
  elem *t=A;
    while (t->sljedeci != NULL)
      t=t->sljedeci;
  return t;
*/