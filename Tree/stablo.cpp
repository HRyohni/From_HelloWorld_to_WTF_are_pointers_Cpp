#include <iostream>
using namespace std;

struct nodestruct{
	int label;
	nodestruct* firstchild;
	nodestruct* nextsibling;
	
};
typedef nodestruct* node;
typedef nodestruct* Tree;


void obilazakPreorder(Tree T){
	cout << T->label << " ";
	node fc = T->firstchild;
	while(fc != NULL){
		if(fc->firstchild!=NULL) obilazakPreorder(fc);
		else{
			cout << fc->label << " ";
		}
		fc = fc->nextsibling;
	}
	
}

int main(){
        int *a,*b,*c;
        a=new int (69);
        cout<<*a<<endl;


	// deklaracija cvorova
	node n5 = new nodestruct;
	node n3 = new nodestruct;
	node n8 = new nodestruct;
	node n2 = new nodestruct;
	node n4 = new nodestruct;
	node n7 = new nodestruct;
	node n9 = new nodestruct;
	
	nodestruct st;
    st.label = 123;
    cout<<st.label<<endl;
	
	// postavljanje korjena
	Tree stablo = new nodestruct;
    
	stablo->label = 5;
	stablo->firstchild = n3;
	stablo->nextsibling = NULL;
	
	// definiranje cvorova
	n3->label = 3;
	n3->firstchild = n2;
	n3->nextsibling = n8;
	
	n8->label = 8;
	n8->firstchild = n7;
	n8->nextsibling = NULL;
	
	n2->label = 2;
	n2->firstchild = NULL;
	n2->nextsibling = n4;
	
	n4->label = 4;
	n4->firstchild = NULL;
	n4->nextsibling = NULL;
	
	n7->label = 7;
	n7->firstchild = NULL;
	n7->nextsibling = n9;
	
	n9->label = 9;
	n9->firstchild = NULL;
	n9->nextsibling = NULL;
	
	
	obilazakPreorder(stablo);
	system("PAUSE");
	return 0;
}