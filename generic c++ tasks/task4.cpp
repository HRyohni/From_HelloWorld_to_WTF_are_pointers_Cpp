#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// pocetak izvodenja programa
int main(){
	struct ziro_racun
	{
	string ime;
	int stanje_racuna;
	};

// zadatak 1
cout<<"upisi broj"<<endl;
int x;
cin >>x;
int sum1=0;
for (int i=0; i<=x;i++)
 sum1+=pow(i,2);
cout<<"rjesenje je:"<<sum1<<endl;

//zadatak 2
string s1 ,s2;
cout<<"upisi prvu rijec"<<endl;
cin>>s1;
cout<<"upisi drugu rijec"<<endl;
cin>>s2;
cout<<s2<<" "<<s1<<endl;

//zadatak 3
ziro_racun korisnik1 ,korisnik2;

cout<<"upisi ime prvog korisnika"<<endl;
cin>>korisnik1.ime;
cout<<"upisi stanje racuna prvog korisnika"<<endl;
cin>>korisnik1.stanje_racuna;

cout<<"upisi ime drugog korisnika"<<endl;
cin>>korisnik2.ime;
cout<<"upisi stanje racuna drugog korisnika"<<endl;
cin>>korisnik2.stanje_racuna;


if (korisnik1.stanje_racuna > korisnik2.stanje_racuna)
		cout<<korisnik1.ime<<" ima vise para"<<endl;
else	
		cout<<korisnik2.ime<<" ima vise para"<<endl; 


	system("PAUSE");
}