struct polinom{
	double values [1000];
	int en;
};

void Zero(polinom* p){ //postavlja *p na nul-polinom
	p->en=0;
}
bool IsZero(polinom p){ //vraca true ako je p nulpolinom
	if(p.en==0) return 1;
	else return 0;
}
double Coef (polinom p, int pot){ //vraca koeficijent uz potenciju pot
	if(p.en<=pot) return 0;
	else return (p.values[pot]);
}
void Attach (polinom* p, int pot, double val){ //postavlja koeficijent uz potenciju pot na vrijednost val
	int i;
	if(p->en<=pot){
		for(i=p->en;i<pot;i++)
			p->values[i]=0;
		p->en=pot+1;
	}
	p->values[pot]=val;
	while((p->en>0) && (p->values[p->en-1]==0))
		(p->en)--;
}
int Degree(polinom p){ //vraca stupanj polinoma
	int i=p.en-1;
	return i;
}
void Add(polinom p1,polinom p2,polinom* p3){ // u *p3 (ono na sto pokazuje p3) sprema p1+p2
	int m,i;
	Zero(p3);
	if(p1.en < p2.en){
		for(i=0;i<p1.en;i++)
			p3->values[i]=p1.values[i]+p2.values[i];
		for(i=p1.en;i<p2.en;i++)
			p3->values[i]=p2.values[i];
		p3->en=p2.en;
	}
	else{
		for(i=0;i < p2.en;i++)
			p3->values[i]=p1.values[i]+p2.values[i];
		for(i=p2.en;i<p1.en;i++)
			p3->values[i]=p1.values[i];
		p3->en=p1.en;
	}
	while((p3->en>0) && (p3->values[p3->en-1]==0))
		(p3->en)--;
	
}
void Mult(polinom p1, polinom p2, polinom*p3){ // u *p3 (ono na sto pokazuje p3) sprema (p1*p2)
	int i,j;
	if(IsZero(p1) || IsZero(p2)) {
		Zero(p3); return;
	}
	for(int i=0;i<p1.en+p2.en-1;i++)
		p3->values[i]=0;
	p3->en=p1.en+p2.en-1;
	for(i=0;i<p1.en;i++)
		for(j=0;j<p2.en;j++)
			p3->values[i+j]+=p1.values[i]*p2.values[j];
}
void Subt(polinom p1,polinom p2,polinom* p3){ // u *p3 (ono na sto pokazuje p3) sprema p1-p2
	int m,i;
	Zero(p3);
	if(p1.en < p2.en){
		for(i=0;i<p1.en;i++)
			p3->values[i]=p1.values[i]-p2.values[i];
		for(i=p1.en;i<p2.en;i++)
			p3->values[i]=p2.values[i];
		p3->en=p2.en;
	}
	else{
		for(i=0;i < p2.en;i++)
			p3->values[i]=p1.values[i]-p2.values[i];
		for(i=p2.en;i<p1.en;i++)
			p3->values[i]=-p1.values[i];
		p3->en=p1.en;
	}
	while((p3->en>0) && (p3->values[p3->en-1]==0))
		(p3->en)--;
	
}
void Div(polinom n, polinom d, polinom *q, polinom *r){ //dijeljenje n/d, u *q sprema kvocijent, u *r ostatak
	Zero(q);
	while(n.en>=d.en){
		polinom t;
		Zero(&t);
		double koef=n.values[n.en-1]/d.values[d.en-1];
		int e=n.en-1-(d.en-1);
		if(q->en<=e){
			for(int i=q->en;i<e;i++)
				q->values[i]=0;	
			q->en=e+1;	
		}
		q->values[e]=koef;
		t.en=d.en+e;
		for(int i=t.en-1;i>=e;i--)
			t.values[i]=d.values[i-e]*koef;
		for(int i=e-1;i>=0;i--) 
			t.values[i]=0;
		for(int i=0;i < t.en;i++)
			n.values[i]=n.values[i]-t.values[i];
		while((n.en>0) && (n.values[n.en-1]==0))
			(n.en)--;		
	}
	*r=n;
}