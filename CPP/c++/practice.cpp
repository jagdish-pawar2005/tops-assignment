#include<iostream>
using namespace std;

class Calculator{
	public:
		addition(int a,int b){
			cout<<"\n Addition is:"<<a+b;
		}
		sub(int a,int b){
			cout<<"\n substraction is:"<<a-b;
		}
		mul(int a,int b){
			cout<<"\n Multiplication is:"<<a*b;
		}
		div(int a,int b){
			cout<<"\n Division is:"<<a/b;
		}
};
main(){
 	int a,b;
 	cout<<"\n Enter First value=";
 	cin>>a;
 	cout<<"\n Enter Second value=";
 	cin>>b;
 	
 	Calculator cal;
	 cal.addition(a,b); 
	 cal.sub(a,b);
	 cal.mul(a,b);
	 cal.div(a,b);
	 
 }
