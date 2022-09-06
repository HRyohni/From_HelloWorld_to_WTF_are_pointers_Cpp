#include<iostream>
#include<cstdlib>

using namespace std;

int reku (int x)
{
    if (x>10)
        return reku((x+5));

    if (x<=100)
        return (reku(x-3));
    return 69;
}


int main()
{
    int x;
cin>>x;
reku(x);
return 0;
}