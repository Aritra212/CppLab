#include<iostream>
#include<string>

using namespace std;

class BLANK{
    public:
        string getdata();
        string remove_space(string);
        void display(string);
};
string BLANK::getdata(){
    string s;
    cout<<"\n------------------------------------------\n";
    cout<<"\nEnter a String:: ";
    getline(cin,s);
    return s;
}
string BLANK::remove_space(string s){
    string temp;
    int ln=s.length(),i;
    i=0;
    cout<<ln;
    while(i<ln){
        if(s[i]==' '){
            temp=temp+' ';
            while(s[i]==' '){
                i++;
            }
        }
        else{
            temp=temp+s[i];
            i++;
        }
    }
    return temp;
}
void BLANK::display(string s){
    cout<<"The string is:: "<<s<<endl;
}
int main(){
    BLANK str;
    string s,s2;
    s= str.getdata();
    cout<<"\n------- Before removing extra spaces --------\n";
    str.display(s);
    cout<<"\n------- After removing extra spaces --------\n";
    s2= str.remove_space(s);
    str.display(s2);
    return 0;
}