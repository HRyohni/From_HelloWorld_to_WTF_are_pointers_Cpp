#include<iostream>
#include "ATPQueueDoubleList.h"

using namespace std;

// Napisati funkciju insert (int poz, elementtype e, DQueue Q) koja dodaje novi element sa vrijednošću x na poziciju poz u vezanu listu Q. 
//Prva pozicija u listi je 0. Ako lista ima samo tri elementa,
// a funkcija traži da se unese element na poziciju 5 funkcija neće napraviti ništa.
void insert (int poz, elementtype x, DQueue Q)
	{	
	 if(IsEmptyDQ(Q))
	 {
	 	cout<<"Red je prazan"<<endl;
	 	return;
	 }
	 else
	 {
		DQueue save;
		InitDQ(&save);
			for (int i =0; i<=poz;i++)
				{	EnqueueFrontDQ(RearDQ(Q),&save);
					DequeueRearDQ(&Q);
				}
			EnqueueRearDQ(x,&Q);
			for (int i =poz; i > 0; i--)
				{	EnqueueRearDQ(FrontDQ(save),&Q);
					DequeueFrontDQ(&save);
				}
				EnqueueRearDQ(FrontDQ(save),&Q);
	}
	}

void brisi (int poz, DQueue Q)
	{	
		DQueue pom;
		InitDQ(&pom);
		int count=0;
		for (int i =0; i<poz;i++)
			{
				EnqueueFrontDQ(RearDQ(Q),&pom);
				DequeueRearDQ(&Q);
			}
		DequeueRearDQ(&Q);
		while (!IsEmptyDQ(Q))
			{
				EnqueueFrontDQ(RearDQ(Q),&pom);
				DequeueRearDQ(&Q);
			}
		PrintDQ(pom);

	}

 void make_null (DQueue Q)
	{	
		PrintDQ(Q);
		while(!(IsEmptyDQ(Q))){
			DequeueFrontDQ(&Q);

		}
		// Q.glava=NULL;
		// Q.rep=NULL;
		// PrintDQ(Q);
	}

int main(){
	elementtype x;
	DQueue Q;
	InitDQ(&Q);

	
	int izbor;





	do { 
		cout<< "1. Ispis dvostranog reda" << endl;
		cout<< "2. Dodavanje elementa na celo reda" << endl;
		cout<< "3. Dodavanje elementa na rep reda" << endl;
		cout<< "4. Brisanje elementa sa čela reda" << endl;
		cout<< "5. Brisanje elementa sa repa reda" << endl;
		cout<< "6. Citanje elementa sa cela reda" << endl;
		cout<< "7. Citanje elementa sa repa reda" << endl;
		cout<< "8. Ispis dvostranog reda - detaljno" << endl;
		// zadatak
		cout<< "9. Insert" << endl;
		cout<< "10. brisi" << endl;
		cout<< "11. make_null" << endl;
		cout<< "12. zadatak1" << endl;
		cout<< "13. zadatak2" << endl;
		cout<< "0. Izlaz" << endl<< endl;
		cout<< "Izbor: ";
		cin >> izbor;
		switch(izbor) {
			case 1:
				PrintDQ(Q);
				cout<<"-----------------------------"<<endl;
				break;
			case 2: 
				cout<<"Upisi vrijednost elementa:";
				cin>>x;
				EnqueueFrontDQ(x,&Q);
				cout<<"-----------------------------"<<endl;
				break;
			case 3:
				cout<<"Upisi vrijednost elementa:";
				cin>>x;
				EnqueueRearDQ(x,&Q);
				cout<<"-----------------------------"<<endl;
				break;
			case 4:
				DequeueFrontDQ(&Q);
				cout<<"-----------------------------"<<endl;
				break;
			case 5:
				DequeueRearDQ(&Q);
				cout<<"-----------------------------"<<endl;
				break;
			case 6:
				cout<<FrontDQ(Q)<<endl;
				break;
			case 7:
				cout<<RearDQ(Q)<<endl;
				break;
			case 8:
				PrintDQE(Q);
				cout<<"-----------------------------"<<endl;
				break;
			case 9:
				int poz;
				cout<<"Upisi vrijednost elementa:";
				cin>>x;
				cout<<"Upisi poziciju:";
				cin>>poz;
				insert(poz,x, Q);
				cout<<"-----------------------------"<<endl;
			break;
			case 10:
				brisi(2,Q);
				//PrintDQ(Q);
			break;
			case 11:
				make_null(Q);
				PrintDQ(Q);
			break;



			case 14:

					for (int i =0;i<100;i++)
						{
							EnqueueFrontDQ(i,&Q);
						}
					DQueue pom;
					InitDQ(&pom);
					while (!IsEmptyDQ(Q))
					{
						if (FrontDQ(Q)%2==0)
							{
								EnqueueFrontDQ(FrontDQ(Q),&pom);
								DequeueFrontDQ(&Q);
							}
						else
							{
								EnqueueRearDQ(FrontDQ(Q),&pom);
								DequeueFrontDQ(&Q);
							}
					}
					Q=pom;
					PrintDQ(Q);
			break;

		
		}
	} while(izbor!=0);
	cout<<"Kraj"<<endl;
	return 0;
}

