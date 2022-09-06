#include <iostream>
using namespace std;


void putovanje(int x, int n[8]){
  int brojpunjenja=0;
    for (int i =0;i<8;i++)
      {  while(x-n[i]<0)
          {   x+=100;
              brojpunjenja++; 
          }
      }
  cout<<brojpunjenja<<endl;

  
  }

int main(){
      
        //A                                 B 
int n[8]={0, 50, 100, 120, 150, 200, 300, 400}; 
  //0== tocka A
  //500== tocka B
int x=100; //kolicina goriva u tanku za x kilometara

  putovanje(x, n);







}


/*  Pretpostavimo da se morate voziti od grada A do grada B. Na
početku je vaš spremnik pun goriva. Kada je pun spremnik
sadrži dovoljno litara goriva kako biste putovali x km i imate
kartu koja pokazuje udaljenost između benzinskih crpki na
vašem putu. Neka d1< d2 < … < d
n budu lokacije svih
benzinskih crpki na vašem putu, a oznaka d udaljenost od
grada A do benzinske crpke. Zadnja udaljenost u listi
udaljenosti je udaljnost do grada B.
Vaš cilj je što manje puta
stati zbog goriva tijekom vašeg putovanja. Napišite program
koji rješava problem minimalnog broja stajanja koristeći
pohlepni pristup. Udaljenosti do benzinskih stanica trebaju
biti zadane u programu u obliku cjelobrojnog polja.*/