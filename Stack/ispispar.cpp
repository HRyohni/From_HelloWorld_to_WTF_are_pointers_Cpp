/*3. Napišite program koji sadrži funkciju ispisi_par(Stack *S)
 koja ispisuje samo parne elemente stoga (nakon izvršenja funkcija stog mora ostati nepromijenjen).
  Pri pisanju programa treba koristiti implementaciju stoga sa e-učenja.
   U main funkciji treba kreirati jedan stog i prikazati rad funkcije na njemu.*/
#include <iostream>
#include "../Stog/ATPStackArray.h"
using namespace std;
    void ispisi_par(Stack *stak)
    {  
        Stack pom;
        InitS(&pom);
        pom =*stak;
        while (!IsEmptyS(pom))
        {
            if (TopS(pom)%2==0)
                cout<<TopS(pom)<<endl;
            PopS(&pom);
        }

    }

   int main()
   {
       Stack stak;
       InitS(&stak);
       PushS(1,&stak);
       PushS(2,&stak);
       PushS(3,&stak);
       PushS(4,&stak);
       PushS(8,&stak);
      
    
      ispisi_par(&stak);
      cout<<"kurac"<<endl;
      PrintS(stak);
   }