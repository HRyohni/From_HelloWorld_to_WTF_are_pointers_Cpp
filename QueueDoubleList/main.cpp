#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;

 #include <iostream>
#include "ATPQueueDoubleList.h"
using namespace std;

void insert (int poz, elementtype x,DQueue Q)
{
int array [10000];
int counter=0;
  DQueue Q1 = Q;
  PrintDQ(Q1);
  
  while (!IsEmptyDQ(Q1))
  {
     counter++;
     DequeueRearDQ(&Q1);
  }
  //########
  for (int i =0;i<poz;i++)
  {
  array[i]= RearDQ(Q);
  DequeueRearDQ(&Q);
  }

  array[poz]= x;
  for (int i =poz;poz>0;i--)
  {
  EnqueueRearDQ(array[i],&Q);
  }
  
  
}

//###########################
int main(){TEST(5);
  elementtype x;
DQueue Q;
InitDQ(&Q);
EnqueueFrontDQ(1,&Q);
EnqueueFrontDQ(2,&Q);
EnqueueFrontDQ(3,&Q);
EnqueueFrontDQ(4,&Q);
cout<<"prije"<<endl;
PrintDQ(Q);
insert(1,x,Q);
//###########


  system("PAUSE");
}  