#include <iostream>
#include <string>
using namespace std;
int main() {
  //prvi primjerr
  int *i= new int; 
  int *n= new  int;
  int *sum= new  int;
  cout<<"upisite broj ocjene?"<<endl;
  cin>>*n;
   int *ocjene= new int [*n];
  *sum=0;
for ( *i =0; *i<*n; (*i)++)
    {
  
     cin>>ocjene[*i]; 
     

    }
   
    for ( *i =0; *i<*n; (*i)++)
    {
    
           *sum+=ocjene[*i]; 

    }
cout<<(float) *sum/(*n)<<endl;
  delete i, n, sum,  ocjene;
 


} 