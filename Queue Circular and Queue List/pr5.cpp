#include <iostream>
#include <queue>
using namespace std;
 
void print(queue <int> *red)
{
    queue <int> pom = *red;
    while (!pom.empty()){
        cout <<"<-"<< pom.front();
        pom.pop();
    }
    cout << endl;
}
 
int main()
{
    queue <int> red, kopija;
    cout<<"Dodajem 1 u red"<<endl;
    red.push(1);
    cout<<"Dodajem 2 u red"<<endl;
    red.push(2);
 	cout<<"Kopiram red u kopiju"<<endl;
 	kopija=red;
    cout << "Sadrzaj reda: ";
    print(&red);
    cout << "Sadrzaj kopije: ";
    print(&kopija);
    cout << "red.size() : " << red.size()<<endl;
    cout << "red.front() : " << red.front()<<endl;
    cout << "red.back() : " << red.back()<<endl;
    cout << "red.pop() : ";
    red.pop();
    cout << "Sadrzaj reda: ";
    print(&red);
    cout << "Sadrzaj kopije: ";
    print(&kopija);
    return 0;
}

