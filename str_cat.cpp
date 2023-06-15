#include<iostream>
#include<string>
using namespace std;

class String{
	string s;
	public:
		void getstring();
		String operator +=(String);
		void display();
};

void String::getstring(){
	cout<<"Enter a String: ";
	getline(cin,s); 
}
String String::operator +=(String s2){
	String tmp;
	tmp.s= s= s+" "+s2.s;
	return tmp;
}
void String::display(){
	cout<<"\n-------------------------\n";
	cout<<s;
}
int main(){
	String a,b,c;
	a.getstring();
	b.getstring();
	c= a+=b;
	a.display();
	c.display();
	return 0;
}
