#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#include "ATPStackArray.h"
// pocetak izvodenja programa


int  ar_sred(Stack S)
	{
	int sum=0,count=0;
	while (!IsEmptyS(S))
	{count++;
	sum+=TopS(S);
	PopS(&S);
	}
	return sum/count;
	} 
	
	
void ispis_nepar(Stack S)
	{
	
	while (!IsEmptyS(S))
	{
	if (TopS(S)%2!=0)
	{	
	cout<<TopS(S)<<" ";
	}

	PopS(&S);
	}

	} 
	
Stack obrni(Stack S)
{ 
Stack prvi;
InitS(&prvi);
int arr[1000];
int count=0;
 	while (!IsEmptyS(S))
	{
	arr[count]=TopS(S);
	PopS(&S);
	count++;
	}
	
	for (int x=count;0<x;x--)
	{
	PushS(arr[x],&prvi);
	}
	return prvi;
 
}
	

int main(){
Stack prvi;
InitS(&prvi);
PushS(111,&prvi);
PushS(222,&prvi);
PushS(333,&prvi);

//cout<<TopS(prvi)<<endl;
cout<<"artimeticka je:"<<ar_sred(prvi)<<endl;
PrintS(prvi);
cout<<"neparan broj  je:"<<endl;
ispis_nepar(prvi);
cout<<endl<<endl;
PrintS(obrni(prvi));
system("PAUSE");

}