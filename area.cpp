#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;
class AREA{
    public:
        void area(int);
        void area(int,int);
        void area(int,int,int);
};
void AREA::area(int r){
    float a;
    a= 3.14159*r*r;
    cout<<"Area of the circle of radius "<<r<<" is:: "<<a;
}
void AREA::area(int x, int y){
    int a;
    a= x*y;
    cout<<"Area of the rectangle of length "<<x<<"and width "<<y<<" is:: "<<a;
}
void AREA::area(int a, int b, int c){
    float s,ar,z;
    s=(a+b+c)/2;
    z=s*(s-a)*(s-b)*(s-c);
    ar= sqrt(z);
    cout<<"Area of the scalene triangle of edges "<<a<<", "<<b<<", "<<c<<" is:: "<<ar;
}
int main(){
    AREA area;
    int a,b,c,n;
    while(1){
        cout<<"\n-----------------------------------------\n";
        cout<<"Enter '0' to exit\nEnter '1' to find  area of a circle\nEnter '2' to find area of a rectangle\nEnter '3' to find area of a scalene triangle\n";
        cout<<"Enter your choice:: ";
        cin>>n;
        switch(n){
            case 1:
                cout<<"Enter radius: ";
                cin>>a;
                area.area(a);
            break;
            case 2:
                cout<<"Enter length: ";
                cin>>a;
                cout<<"Enter width: ";
                cin>>b;
                area.area(a,b);
            break;
            case 3:
                cout<<"Enter values of three edges: ";
                cin>>a>>b>>c;
                area.area(a,b,c);
            break;
            case 0: exit(0);
            default: cout<<"Invalid Choice!! try again";
        }
    }
}