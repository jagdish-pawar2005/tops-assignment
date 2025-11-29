#include<iostream>
using namespace std;
class fact{
	public:
		int num,ans;
	void getnum(){
		cout<<"enter the num =";
		cin>>num;
	}
	void calculate(){
		ans=1;
		int i;
		for(i=1;i<=num;i++){
			ans*=i;
		}
	}
	void show(){
	cout<<"Factorial is ="<<ans;
	}
};
main(){
	fact f1;
	f1.getnum();
	f1.calculate();
	f1.show();
}
