/*
Napisati program koji služi za vođenje kontakata i sadrži strukturu kontakt. Program preko izbornika treba omogućiti :
1.Ispisivanje svih kontakata
2.Dodavanje novog kontakta
Kontakt se sastoji od imena, prezimena i broja telefona. Sve se operacije izvode preko izbornika.
*/

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

struct kontakt{
string ime;
string prezime;
int broj;
};

void ispisKontakta()
{
  string nesto;
  ifstream infile ("kontakt.txt",ios::in);
     while (getline(infile, nesto))
      {
        cout<<nesto<<endl;
      }
infile.close();
}


void upisKontakta()
{
  kontakt kontakt;
    cout<<"upisi Ime:";
    cin>>kontakt.ime;
    cout<<"upisi Prezime:";
    cin>>kontakt.prezime;
    cout<<"upisi Broj:";
    cin>>kontakt.broj;
    ofstream file ("kontakt.txt",ios::app);
    file<<kontakt.ime<<" "<<kontakt.prezime<<" "<<kontakt.broj<<endl;
    file.close();
    
}

int kurac (int a ,int b)
{
  return a*b;
}


int main() {
int izbor=32;

  while (1)
  {
do 
{
cout <<" 1.Ispisivanje svih kontakata\n 2.Dodavanje novog kontakta"<<endl;
cin>>izbor;

}
while (izbor > 2 || izbor < 1);
kurac(1,2);
  switch (izbor)
{
  case 1:
  ispisKontakta();
  
  break;
  case 2:
  upisKontakta();
  break;
}
  }


}

  

