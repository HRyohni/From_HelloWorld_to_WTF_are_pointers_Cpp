/*
   • Napišite program za vođenje skladišta u
    kojem se čuvaju podaci o proizvodima u  
    skladištu u dinamičkom polju.  

• Program treba omogućiti:
– unos novih proizvoda,
– pretraživanje podataka,
– sortiranje podataka,
– ispis svih podataka u skladištu,
– rad sa datotekom,
– zbirne podatke o stanju na skladištu
*/
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct proizvod
{
  int sifra;
  string naziv;
  float cijena;
  int kolicina;
};
proizvod produkt[100];
int novi=0;
void UnosNovogProizvoda(proizvod produkt[],int novi)
  {
    cout<<"unesite sifra"<<endl;
    cin>>produkt[novi].sifra;
    cout<<"unesite naziv"<<endl;
    cin>>produkt[novi].naziv;
    cout<<"unesite cijena"<<endl;
    cin>>produkt[novi].cijena;
    cout<<"unesite kolicina"<<endl;
    cin>>produkt[novi].kolicina;
    //provjerit kolicnu mjesta
    //unjeti proizvod
   
  }
void ispispodataka(proizvod produkt[],int novi)
  {
    for(int i=0;i<novi;i++)
    { cout<<"Produkt broj:"<<i<<endl;
      cout<<"sifra:"<<produkt[i].sifra<<endl;
      cout<<"naziv:"<<produkt[i].naziv<<endl;
      cout<<"cijena:"<<produkt[i].cijena<<endl;
      cout<<"kolicina:"<<produkt[i].kolicina<<endl;
      cout<<"____________"<<endl;
    }
    
  }
void sortiranje(proizvod produkt[],int ID,int novi)
  {
    switch (ID)
      {
        case 1:
          float usporedi =produkt[0].cijena;
          for (int y=0;y<novi;y++)
            {
              
            for (int i=0;i<novi;i++)
              {// 2 1 3
                if (usporedi<produkt[i].cijena)
                  {
                    usporedi=produkt[i].cijena;
                  }
              }
              cout<<usporedi;
            }
          cout<<endl;
          
        break;

        case 2:

        break;
      }
  }



int main()
{
  int arr1[] = {99,91,94,96};
int n = sizeof(arr1)/sizeof(arr1[0]);
sort(arr1, arr1+n);
cout << "\n List of Array after sorting is: ";
for (int i = 0; i < n; ++i)
cout << arr1[i] << " ";


  
  
  int a;//a je izbor
  // system("cls")
  while("zuta")
  {
    cout<< "1. Dodavanje novog proizvoda" << endl;
    cout<< "2. Ispis podatka " << endl;
    cout<< "3. Sortiranje proizvoda" << endl;
    cout<< "4. Spemanje proizvoda u datoteku"<<endl;
    cout<< "5. Statistika proizvoda" << endl;
    cout<< "0. Izlaz" << endl<< endl;
    cout<< "Izbor: ";
    cin >> a;
    switch (a)
      {
        case 1:
          UnosNovogProizvoda(produkt,novi);
          novi++;
        break;
          
        case 2:
          ispispodataka(produkt,novi);
        break;
        
        case 3:
            int x;
            cin>>x;
            cout<< "1. sortiraj po cijeni" << endl;
            cout<< "2. sortiraj po kolicini " << endl;
            sortiranje(produkt,x,novi);
        break;
  
        case 4:
          
        break;
        case 5:
          
        break;
        case 0:
          return -1;
        break;
      }
    }
  
return 0;
}