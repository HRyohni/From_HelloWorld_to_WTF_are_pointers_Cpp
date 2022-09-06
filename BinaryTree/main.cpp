#include<iostream>
#include<fstream>
#include<ctime>
#include "BST.h"
using namespace std;

 #include <iostream>
using namespace std;



node * min (BST b)
{
node * a=b;
while (a&& a->left!=NULL)
  a=a->left;
  return a;
}

node * deleteX(labeltype x,BST b)
{
if (b==NULL)
  return b;
  if (x<b->label)
  b->left= deleteX(x,b->left);
  
  else if (x>b->label)
  b->right= deleteX(x,b->right);
  else{
    if (b->left== NULL){
    node* pom =b->right;
    return pom;
    }
    else if (b->right==NULL)
    {
    node * pom =b->left;
    return pom;
    }
    node * pom = min(b->right);
    b->label= pom ->label;
    b->right=deleteX(pom->label,b->right);
  }
  return b;
}
//###########################
int main(){

  BST A;
  insert(13,&A);
  insert(1,&A);
  insert(12,&A);
  insert(10,&A);
  insert(8,&A);
  insert(10,&A);
  insert(1,&A);
  insert(12,&A);
  insert(9,&A);
  insert(1,&A);

  
  system("PAUSE");
}  