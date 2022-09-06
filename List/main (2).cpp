#include <iostream>
using namespace std;

struct elem {
 float x;
 elem* sljedeci;
 };
 typedef elem* List; 


void printL(List Li){
	elem *t=Li;
	if(t==NULL) cout<<"Prazna lista!"<<endl;
	while(t!=NULL){
		cout<<t->x<<" -> ";
		t=t->sljedeci;
	}
	cout<<endl;
}


int main() {
List peder;
  peder=NULL;
  elem *e1, *e2, *e3, *e4;
  e1=new elem;
  e2=new elem;
  e3=new elem;
  e4=new elem;
  e1->x=6;
  e1->sljedeci=e2;
  e2->x=4;
  e2->sljedeci=e3;
  e3->x=0;
  e3->sljedeci=e4;
  e4->x=1;
  e4->sljedeci=NULL;
  printL(peder);
  
  
}