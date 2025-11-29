#include<iostream>
using namespace std;
class Parent{
	public:
		virtual void display(){
			cout<<"\n parent class Method called";
		}
};
class Child : public Parent{
	public:
		virtual void display(){
			cout<<"\n Child class Method called";
		}
};
main(){
	Parent *p1;
	
	Child c1;
	p1 = &c1;
	p1->display();
	c1.display();
}
