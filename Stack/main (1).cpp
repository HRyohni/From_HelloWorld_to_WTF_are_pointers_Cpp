#include <iostream>
#include "ATPStackPointer.h"
using namespace std;




int main() {
  Stack *S;
  InitS(S);
  cout<<"hello";
  PushS(1, S);
  PushS(2, S);
  PushS(3, S);
  PushS(4, S);
  PushS(5, S);

  for (int i =0;i<=4;i++)
    { TopS(*S);
    
      PopS(S);
    }


  

  
 
}