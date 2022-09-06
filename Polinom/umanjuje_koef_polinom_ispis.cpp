#include<iostream>
#include "../polinom/polinomATP.h"
using namespace std;

/*Koriste¿i implementaciju ATP polinom napišite program u kojem se kreira slijedei polinom: 4x^8-2x^5+x^3+3x-9.
 lspišite kreirani polinom, a zatim kreirajte funkciju koja
umanjuje vrijednost svih koeficijenata u polinomu manjih od zadane vrjednosti x za 1 
i testirajte je na kreiranom polinomu*/

// MOZDA NE RADI


/*
zadatak 2 
1. Napišite program koji sadrži funkciju void ispis(polinom p) koja ispisuje polinom 
u sređenom obliku (ne ispisuje koeficijente koji su 0). Primjer ispisa: 2x^4-3x-3.1x^2-x^1+5.
 U main funkciji kreirajte jedan polinom četvrtog stupnja i demostrirajte na njemu rad funkcije.

*/


void ispis(polinom p)
{
for (int i = Degree(p);i>=0;i--)
    {   if ( Coef(p,i)!=0)
    {      if (i!=0)
            {
                if (Coef(p,i)>0 && i!=Degree(p))
                    cout<<"+"<<Coef(p,i)<<"x^"<<i<<"";
                else
                    cout<<Coef(p,i)<<"x^"<<i<<"";
            }
            else
            { 
            
                 if (Coef(p,i)>0 && i!=Degree(p))
                    cout<<"+"<<Coef(p,i)<<"";
                else
                    cout<<Coef(p,i)<<"";
            }
    }
        
    }
}

void Print(polinom p){ //ispisuje koeficijente i potencije od vodeceg do slobodnog koeficijenta
	if(IsZero(p)) {
		cout<<0<<endl;return;
	}
	for(int i=Degree(p);i>=0;i--)
        {
            if (Coef(p,i)!=0)
                {
                    if (Coef(p,i)>0 && i!=Degree(p))
			            cout<<" +"<<Coef(p,i)<<"*x^"<<i<<"";
                    else
			            cout<<" "<<Coef(p,i)<<"*x^"<<i<<"";
                }
        }
	cout<<endl;
   
}


void umanji(polinom p)
{   polinom pom;
    Zero(&pom);
    for (int i =Degree(p);i>=0;i--)
    { 
            Attach(&pom,Coef(p,i)-1,i);
    }
     Print(pom);
}




int main()
      
    {   
        polinom p;
        Zero(&p);
        Attach(&p,8,4);
        Attach(&p,5,-2);
        Attach(&p,3,1);
        Attach(&p,1,3);
        Attach(&p,0,9);
        //ispis(p);
        Print(p);
        umanji(p);
        

    }