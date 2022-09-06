#include <iostream>
using namespace std;


struct element 
{
    char podatak;
    element* sljedeci;
};
typedef element *Lista;

void mojalista (Lista l,int x,int y)
{
element *e=l;
        if (e== NULL)
            {
                cout<<"lista prazna"<<endl;
            }
            while (e!= NULL)
                {
                    cout<<e->podatak<<"-> ";
                    e=e->sljedeci;
                }

}


void printL(Lista l)
    { element *e=l;
        if (e== NULL)
            {
                cout<<"lista prazna"<<endl;
            }
            while (e!= NULL)
                {
                    cout<<e->podatak<<"-> ";
                    e=e->sljedeci;
                }
    }



int main() 
{
    Lista li;
    li =NULL;
    element *a,*b,*c;
    a= new element;
    b= new element;
    c= new element;

    a->podatak = 'A';
    a->sljedeci=b;

    b->podatak = 'B';
    b->sljedeci=c;

    c->podatak = 'C';
    c->sljedeci=NULL;

    li=a;
    
    printL(li);




}