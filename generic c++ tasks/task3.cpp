#include <iostream>
#include <cstdlib>
using namespace std;
int main(){

		//zadatak 1
int x;
int niz [10]={};

cout<<"upisi 10 brojeva"<<endl;
	for(int i=0;i<10;i++)
	{
	cin>>x;
	niz[i]=x;
	}
	
	cout<<"Parni brojevi su:";
	for(int i=0;i<10;i++)
	{
	
		if (niz[i]%2==0)
		{
		cout<<niz[i]<<" ";
		}
			
			
	}

	
		cout<<endl;
		//zadatak2
		
		cout<<"upisi 9 brojeva"<<endl;
int niz2 [3][3];
int unos;
for (int x =0;x <3;x++)
{
	for	(int i =0;i<3;i++)
		{
		cin>>unos;
		niz2[x][i]=unos;
		}
}


for (int x =0;x <3;x++)
{
	for	(int i =0;i<3;i++)
		{
		cout<<niz2[x][i]<<" ";
		}
		cout<<endl;
}

int sum1,sum2,sum3;
for (int x =0;x <3;x++)
{
	for	(int i =0;i<3;i++)
		{
			if (x==0)
			sum1+=niz2[i][x];
			if (x==1)
			sum2+=niz2[i][x];
			if (x==2)
			sum3+=niz2[i][x];
	
		}
		cout<<endl;
}
	
	cout<<"suma prvog stupca: "<<sum1<<endl;
	cout<<"suma dugog stupca: "<<--sum2<<endl;
	cout<<"suma treceg stupca: "<<sum3<<endl;
	
	// zadatak 3
	int maks[50]={};
 	int unos2=0;
	int count=1;
	
		cout<<"upisi brojeve. (-1) da se stopira!"<<endl;
	for (int i=0;i<=50;i++)
		{
		cin>>unos2;
		if (unos2==-1)
			break;
			
			else
			{
				count++;
				maks[i]=unos2;
			}
	
		}

	int num;
	num =maks[0];
	for (int i=0;i<=50;i++)
		{
	 	if (num>maks[i] && maks[i]!=0 && maks[i]!=-1)
	 		num=maks[i];	
		}
		
	cout<<"najmanji broj je:"<<num<<endl;
	cout<<"upisano brojeva je:"<<--count<<endl;
	
	system("PAUSE");
}