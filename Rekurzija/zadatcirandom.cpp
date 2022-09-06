#include <iostream>
using namespace std;

//1.Napišite rekurzivnu funkciju koja izračunava sumu neparnih brojeva do zadanog (u glavnoj funkciji) 
//prirodnog broja n. U glavnoj funkciji ispišite rezultat.

int suma (int n){
    if(n==0){
        return 0;
    }
  
    if(n%2==0){
        return (n+suma(n-2)-1);

    }
    else{
        return (n+suma(n-1)-1);


    }
}

int main(){
int n;
cout<<"Unesite broj: ";
cin>>n;
cout<<suma(n)<<endl;





}