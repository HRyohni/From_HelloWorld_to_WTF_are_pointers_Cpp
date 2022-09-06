#include <iostream>
#include <stack>

/*Napiite pram koji trai od korisnika da upie 5 cijelih brojeva i spremi ih u stog, a onda izraZuna i ispie sumu elemenata tog rtoga. Na kraju programa stog treba ostati
nepromjenjen (korirtiti stog iz C++a - ncludecstack>

This text was recognized by the built-in Ocrad engine. A better transcription may be attained by right clicking on the selection and changing the OCR engine to "Tesseract" (under the "Language" menu). This message can be removed in the future by unchecking "OCR Disclaimer" (under the Options menu). More info: http://projectnaptha.com/ocrad*/
using namespace std;


int suma (stack<int> stak)
{   int sum=0;
    stack<int> temp;
    temp = stak;
    while (!temp.empty())
        {
            sum += temp.top();
            temp.pop();
        }
        return sum;

}
int main()
{
    stack<int> stak;
    cout<<"upisi 5 brojeva"<<endl;
    int x ;
    for (int i=0;i<5;i++)
    {   cout<<i+1<<" ";
        cin>>x;
        stak.push(x);
    
    }
    cout<<suma (stak)<<endl;
        


}
