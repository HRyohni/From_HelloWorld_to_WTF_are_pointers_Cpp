typedef int elementtype;
#define MAX_ELEMS 10000
struct Stack{
	elementtype values[MAX_ELEMS];
	int top;
};


void InitS(Stack *pS){
	pS->top=MAX_ELEMS;	
}

bool IsEmptyS(Stack S){
	if (S.top>=MAX_ELEMS)
		return 1;
	else
		return 0;
}
void PushS(elementtype x, Stack *pS){
	pS->top--;
	pS->values[pS->top]=x;
	
}

void PopS(Stack *pS){
	pS->top++;
}
elementtype TopS(Stack S){
	return S.values[S.top];
}

//pomocna funkcija za ispis (nije dio ATP-a):
void PrintS(Stack S){
	if(S.top>=MAX_ELEMS) 
		cout<<"Prazan stog!"<<endl;
	for(int i=S.top;i<MAX_ELEMS;i++)
		cout<<S.values[i]<<endl;
}
