#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

class MATRIX{
	int m[10][10],r,c;
	
	public:
		MATRIX(){}
        MATRIX(int x[10][10],int row,int col);
		void display(void);
		void add(MATRIX, MATRIX);
		void sub(MATRIX, MATRIX);
		void multi(MATRIX, MATRIX);
};
MATRIX::MATRIX(int x[10][10],int row,int col){
     int i,j;
     r= row;
     c= col;
     for(i=0;i<r;i++){
		for(j=0;j<c;j++){
               m[i][j]=x[i][j];
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
	MATRIX sum,sub,mul;
    int ch, m[10][10],r1,c1,i,j;

    cout<<"\nEnter number of rows:: ";
    cin>>r1;
    cout<<"\nEnter number of column:: ";
    cin>>c1;
    for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			cout<<"Enter data for m["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
		cout<<"\n";
	}
    MATRIX a(m,r1,c1);
    a.display();

    cout<<"\nEnter number of rows:: ";
    cin>>r1;
    cout<<"\nEnter number of column:: ";
    cin>>c1;
    for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			cout<<"Enter data for m["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
		cout<<"\n";
	}
    MATRIX b(m,r1,c1);
    b.display();
    sum.add(a,b);
    cout<<"\n------After Addition--------\n";
	sum.display();
	sub.sub(a,b);
	cout<<"\n------After Subtraction--------\n";
	sub.display();
	mul.multi(a,b);
	cout<<"\n------After Multiplication--------\n";
	mul.display();
    return 0;
}
