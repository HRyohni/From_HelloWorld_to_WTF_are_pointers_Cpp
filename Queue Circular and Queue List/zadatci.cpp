//zadatci
//Zadatak 1. Napisati funkciju izbacix koja iz reda izbacuje  sve elemente sa vrijednošću x.

//Zadatak 2. Napisati funkciju dodajx koja svaki član u redu uveća za x.

//Zadatak 3. Napisati funkciju max koja vraća najveći podatak u redu.

//Zadatak 4. Napisati funkciju premjestix koja promjeni sadržaj reda tako da se član reda sa vrijednošću x ako postoji u redu pomakne na začelje reda.

#include <iostream>
#include "ATPQueueCircular.h"
using namespace std;
// Zadatak 1.
Queue izbacix(Queue q,int x)
{
    Queue pom;
    InitQ(&pom);
    while (!IsEmptyQ(q))
    {   if (FrontQ(q)!=x)
            EnqueueQ(FrontQ(q),&pom);
        DequeueQ(&q);
    }
    return pom;
}

Queue dodajx(Queue q,int x)
{
    Queue pom;
    InitQ(&pom);
    while (!IsEmptyQ(q))
    {   
        EnqueueQ(FrontQ(q)+x,&pom);
        DequeueQ(&q);
    }
    return pom;
}



int max(Queue q)
{
    Queue pom;
    InitQ(&pom);
    int vec=FrontQ(q);

    while (!IsEmptyQ(q))
    {   if (FrontQ(q)>vec)
            vec=FrontQ(q);
        DequeueQ(&q);
    }
    return vec;
}

Queue premjestix (Queue q,int x)
{
    Queue pom;
    InitQ(&pom);
    int temp;
    while (!IsEmptyQ(q))
    {   if (FrontQ(q)!=x)
            EnqueueQ(FrontQ(q),&pom);
        else
            temp=FrontQ(q);
        DequeueQ(&q);
    }
    EnqueueQ(temp,&pom);
    return pom;
}

int main()
{   
    Queue q;
    InitQ(&q);
    EnqueueQ(1,&q);
    EnqueueQ(8,&q);
    EnqueueQ(3,&q);
    EnqueueQ(4,&q);
    PrintQ(q);
    cout<<"rijesenje zadatak 1"<<endl;
    PrintQ(izbacix(q,2));
    cout<<"rijesenje zadatak 2"<<endl;
    PrintQ(dodajx(q,2));
    cout<<"rijesenje zadatak 3"<<endl;
    cout<<max(q)<<endl;
    cout<<"rijesenje zadatak 4"<<endl;
    PrintQ(premjestix(q,8));

}