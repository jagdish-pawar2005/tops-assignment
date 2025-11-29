#include<iostream>
using namespace std;
class Parent{
	public:
		Parent(){
			cout<<"parent class con. called";
		}
		Parent(int x){
			cout<<"\n parent x="<<x;
		}
};
class Child:public Parent{
	public:
		Child(){
			cout<<"parent class con. called";
		}
		Child(int m,int y,int x):Parent(x){
			cout<<"\n in Child m="<<m<<"\t y="<<y;
		}
		
};
main(){
	Child c1;
	Child c2(10,30,40);
}
