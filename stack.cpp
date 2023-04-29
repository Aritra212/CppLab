#include<iostream>
#include<cstdlib>

#define M 5
using namespace std;
class STACK{
    private:
        int top=-1;
        int stack[M];

    public:
        void push(int);
        void pop();
        void display();
};
void STACK::push(int d){
    if(top==M-1){
        cout<<"Stack is full!!\n";
    }
    else{
        top++;
        stack[top]=d;
        cout<<stack[top]<<" is pushed into the stack\n";
    }
}
void STACK::pop(){
    if(top==-1){
        cout<<"Stack is empty!!\n";
    }
    else{
        cout<<stack[top]<<" is deleted from the stack\n";
        top--;
    }
}
void STACK::display(){
    int sp=top;
    if(top==-1){
        cout<<"Stack is empty!!\n";
    }
    else{
        cout<<"Stack elements are::";
        while(sp>=0){
            cout<<" "<<stack[sp];
            sp--;
        }
    }
}
int main(){
    STACK s;
    int n,d;
    while(1){
        cout<<"\n-----------------------------------------\n";
        cout<<"Enter '0' to exit\nEnter '1' to Push\nEnter '2' to Pop\nEnter '3' to Display\n";
        cout<<"Enter your choice:: ";
        cin>>n;

        switch(n){
            case 1:
                cout<<"Enter data: ";
                cin>>d;
                s.push(d);
            break;
            case 2: s.pop();
            break;
            case 3: s.display();
            break;
            case 0: exit(0);
            default: cout<<"Invalid Choice!! try again";
        }
    }
}