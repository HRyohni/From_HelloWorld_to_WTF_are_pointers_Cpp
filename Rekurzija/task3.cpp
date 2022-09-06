#include <iostream>
#include <cstdlib>
using namespace std;

int suma(int a){
if(a>0){
return(a%10+suma(a/10));
}
else{
return 0;
}
}
int main(){
   int x;
   cout<<"upisite zeljeni broj "; cin>>x;
   cout<<"Suma znamneki je= "<<suma(x)<<endl;

	system("PAUSE");
}


