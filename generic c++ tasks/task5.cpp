#include<cmath>
#include <iostream>
#include <cstring>


using namespace std;

bool daljeparan(int x)
{
 if (x%2==0)
    return true;
  else 
    return false;
}

 float p_kruga(float r)
 {
   return 2*r*M_PI;
 }


 float o_kruga(float r)
 {  
     return pow(r, 2)*M_PI;
 }
int main() {
    cout<<"upisi polumjer kruga"<<endl;
    float x;
    cin>>x;
    cout<<"opseg kruga je "<<o_kruga(x)<<", a povrsina "<<p_kruga(x)<<endl;

    // zadatak 2

    cout<<"upisi broj"<<endl;
    int c;
    cin>>c;
    if (daljeparan(c))
      cout<<"broj je paran"<<endl;
    else 
      cout<<"broj je neparan"<<endl;
    return 0;
}



/*1. Napišite program koji traži od korisnika da upiše polumjer kruga, a onda poziva funkcije koje kao rezultat vraćaju opseg i površinu kruga.

2. Napišite program koji traži od korisnika da upiše jedan cijeli broj, a onda poziva funkciju koja na ekran ispisuje da li je upisani broj paran.*/