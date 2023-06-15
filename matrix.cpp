#include<iostream>

using namespace std;

class MATRIX{
	int m[10][10],r,c;
	
	public:
		void getData(void);
		void display(void);
		void add(MATRIX, MATRIX);
		void sub(MATRIX, MATRIX);
		void multi(MATRIX, MATRIX);
};
void MATRIX::getData(){
	int i,j;
	cout<<"Enter number of rows: ";
	cin>>r;
	cout<<"Enter number of columns: ";
	cin>>c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"Enter data for m["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
		cout<<"\n";
	}
}
void MATRIX::display(){
	int i,j;
	cout<<"Matrix elements: \n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<" "<<m[i][j];
		}
		cout<<"\n";
	}
}

void MATRIX::add(MATRIX a, MATRIX b){
	int i,j;
	r=a.r;
	c=a.c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			m[i][j]= a.m[i][j]+b.m[i][j];
		}
	}
}
void MATRIX::sub(MATRIX a, MATRIX b){
	int i,j;
	r=a.r;
	c=a.c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			m[i][j]= a.m[i][j]-b.m[i][j];
		}
	}
}
void MATRIX::multi(MATRIX a, MATRIX b){
	int i,j,k;
	if(a.c != b.r){
		cout<<"can't multiply";
	}
	else{
		r=a.r;
		c=b.c;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				m[i][j]=0;
				for(k=0;k<a.c;k++){
					m[i][j]+=a.m[i][k]*b.m[k][j];
				}
			}
		}
	}
}
int main(){
	MATRIX m,n,sum,sub,mul;
	m.getData();
	m.display();
	n.getData();
	n.display();
	sum.add(m,n);
	sum.display();
	sub.sub(m,n);
	sub.display();
	mul.multi(m,n);
	mul.display();
	return 0;
}
