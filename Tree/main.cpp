#include <iostream>
using namespace std;
#include "ATPBTreePointer.h"

void preorder(node n, BinaryTree b){
	node l,r;
	l=LeftChildB(n,b);
	r=RightChildB(n,b);
	cout<<LabelB(n,b)<<" ";
	if(l!=LAMBDA)
		preorder(l,b);
	if(r!=LAMBDA)
		preorder(r,b);
}

int sum(node n, BinaryTree b){
	node l,r;
	int suma=0;
	l=LeftChildB(n,b);
	r=RightChildB(n,b);
		suma+=LabelB(n,b);
	if(l!=LAMBDA)
		sum(l,b);
	if(r!=LAMBDA)
		sum(r,b);
		
	if (l!=LAMBDA && r!=LAMBDA)
	{return suma;}


}


int main(){
	BinaryTree A;
	node root=InitB(5,&A);
	root=CreateLeftB(3,root,&A);
	node t = root;
	CreateLeftB(2,root,&A);
	root=RootB(A);
	root=CreateRightB(8,root,&A);
	CreateLeftB(6,root,&A);
	CreateRightB(9,root,&A);
	node x = RootB(A);
	preorder(x,A);

	//2 zad
	system("PAUSE");
}