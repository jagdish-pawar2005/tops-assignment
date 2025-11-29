#include<iostream>
using namespace std;
class helloo{
	public:
		int pid;
		char pname;
		char pprice;

void getdata(){
	cout<<"enter the pid=";
	cin>>pid;
	cout<<"enter the pname=";
	cin>>pname;
	cout<<"enter the price";
	cin>>pprice;
	}
	
void showdata(){
	cout<<"pid"<<pid;
	cout<<"pname"<<pname;
	cout<<"pprice"<<pprice;
}
};
main(){
	Product p1;
	p1.getProduct();
	p1.showProduct();
	
	
}

