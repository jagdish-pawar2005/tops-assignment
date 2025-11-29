#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void getA(){
			cout<<"\n Enter A";
			cin>>a;
		}		
};
class B :public A{
	public:
		int b;
		void getB(){
			cout<<"\n Enter B";
			cin>>b;
		}
		void add(){
			cout<<"\n add="<<a+b;
		}
};
class C :public A{
	public:
		int c;
		void getC(){
			cout<<"\n Enter c";
			cin>>c;
		}
		void mul(){
			cout<<"\n mul="<<a*c;
		}
};
main(){
	B b1;
	b1.getA();
	b1.getB();
	b1.add();
	
	C c1;
	c1.getA();
	c1.getC();
	c1.mul();
}
