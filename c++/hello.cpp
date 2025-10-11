#include<iostream>
using namespace std;

class hello{
public:
	int sid;
	char sname[20];
	float marks;
	
	void getdata(){
	cout<<"enter the id:";
	cin>>sid;
	cout<<"enter the name:";
	cin>>sname;
	cout<<"enter the marks:";
	cin>>marks;	
	}
	
	void printdata(){
		cout<<"\n sid="<<sid;
		cout<<"\n sname="<<sname;
		cout<<"\n marks="<<marks;
	}
	
};
main(){
	hello h1;
	h1.getdata();
	h1.printdata();
}
