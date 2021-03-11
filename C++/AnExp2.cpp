#include<iostream>
using namespace std;

class Base{
	int a;
	public:
	Base(int a) : a(a){}
	void display(){ cout<<a<<endl;}
};

class Derived : public Base{
	int a, b;
	public:
	Derived(int a, int b, int c) : Base(a){
		a = b;
		b = c;
	}
	void display(){ cout<<a<<" "<<b<<endl;}
};


int main(){
	Derived d(2, 3, 4);
	Derived::Base b(2);
}