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

void zadnji_elem (List A) 
  {
    
  }


int main(){

  
  List kurac;
  kurac=NULL;
  element *a1,*a2,*a3,*a4;
  a1= new element;
  a2= new element;
  a3= new element;
  a4= new element;
  
  a1->value=213;
  a1->next=a2;
  a2->value=66;
  a2->next=a3;
  a3->value=756;
  a3->next=a4;
  a4->value=223;
  a4->next=NULL;

  kurac=a1;
  printL(kurac);
  
	List mylist;
	mylist=NULL;
	element *e1, *e2,*e3;
	
  e1=new element;
	e2=new element;
	e3=new element;
	
  e1->value=5;
	e1->next=e2;
	e2->value=7;
	e2->next=e3;
	e3->value=1;
	e3->next=NULL;
	mylist=e1;
	printL(mylist);

	// dodajmo element 3 na pocetak liste mylist(5,7,1)
	cout<<"dodajmo element 3 na pocetak liste"<<endl;
	element *novi=new element;
	novi->value=3;
	novi->next=mylist;
	mylist=novi;
	printL(mylist);

	//dodajmo 10 na kraj liste mylist
	cout<<"dodajmo 10 na kraj liste mylist"<<endl;
	novi=new element;
	novi->value=10;
	novi->next=NULL;
	element *t=mylist, *temp; //postavi t na 1. element
	while(t->next!=NULL){
		t=t->next;
		temp=t;
	}
	temp->next=novi; //t je zadnji element
	printL(mylist);

	//dodajmo element 17 izmedu elemenata 5 i 7 liste mylist
	cout<<"dodajmo element 17 izmedu elemenata 5 i 7 //liste mylist"<<endl;
	novi=new element;
	novi->value=17;
	t=mylist;
	t=t->next;
	novi->next=t->next;
	t->next=novi;
	printL(mylist);

	
	
	return 0;

}