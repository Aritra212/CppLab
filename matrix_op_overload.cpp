#include<iostream>
#include<cstdlib>

using namespace std;

class MATRIX{
     int m[10][10],r,c;
	
	public:
		void getData(void);
		void display(void);
	MATRIX operator +(MATRIX);
	MATRIX operator -(MATRIX);
	MATRIX operator *(MATRIX);
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
MATRIX MATRIX::operator +(MATRIX a){
    int i,j;
    MATRIX tmp;
	tmp.r=a.r;
	tmp.c=a.c;
	for(i=0;i<tmp.r;i++){
		for(j=0;j<tmp.c;j++){
			tmp.m[i][j]= m[i][j]+a.m[i][j];
		}
	}
     return (tmp);
}
MATRIX MATRIX::operator -(MATRIX a){
	int i,j;
	MATRIX tmp;
	tmp.r=a.r;
	tmp.c=a.c;
	for(i=0;i<tmp.r;i++){
		for(j=0;j<tmp.c;j++){
			tmp.m[i][j]= m[i][j]-a.m[i][j];
		}
	}
     return (tmp);
}
MATRIX MATRIX::operator *(MATRIX b){
	int i,j,k;
     MATRIX tmp;
	if(c != b.r){
		cout<<"can't multiply";
	}
	else{	
	     tmp.r= r;
	     tmp.c=b.c;
		for(i=0;i<tmp.r;i++){
			for(j=0;j<tmp.c;j++){
				tmp.m[i][j]=0;
				for(k=0;k<c;k++){
					tmp.m[i][j]+=m[i][k]*b.m[k][j];
				}
			}
		}
	}
     return (tmp);
}
int main(){
	MATRIX m,n,sum,sub,mul;
     int ch;
     while(1){
          cout<<"\n------------------------------\n";
          cout<<"\nEnter '0' to exit\nEnter '1' to enter data for 1st matrix\nEnter '2' to enter data for 2nd matrix \nEnter '3' to add two matrix\nEnter '4' to subtract two matrix\nEnter '5' to multiply two matrix";
          cout<<"\nEnter your choice:: ";
          cin>>ch;

          switch(ch){
               case 1:
                    m.getData();
                    m.display();
               break;
               case 2:
                    n.getData();
                    n.display();
               break;
               case 3:
                    sum= m+n;
                    sum.display();
               break;
               case 4:
                    sum= m-n;
                    sum.display();
               break;
               case 5:
                    mul= m*n;
                    mul.display();
               break;
               case 0: exit(0);
               default: cout<<"\nInvalid choice!";
          }
     }
     return 0;
}
