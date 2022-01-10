#include<iostream>
using namespace std;

class A1{
	public:
	int a;
	A1(){
		a = 10;
	}
	void display1(){
		cout<<"a = "<<a<<endl;
	}
};

class A2:public A1{
	public:
	int b;
	A2(){
		b = 20;
	}
	void display2(){
		cout<<"b = "<<b<<endl;
	}
};

class A3:public A2{
	public:
	int c;
	A3(){
		c = 30;
	}
	void display3(){
		cout<<"c = "<<c<<endl;
	}
};

int main(){
	A3 obj;
	obj.display1();
	obj.display2();
	obj.display3();
	return 0;
}
