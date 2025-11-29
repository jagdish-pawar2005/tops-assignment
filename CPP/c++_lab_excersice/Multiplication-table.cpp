#include<iostream>
using namespace std;
main(){
	int num;
	
	cout<<"enter the number:";
	cin>>num;
	
	cout<<"the Multiplication table of "<<num<<":\n";
	
	
	for(int i=1; i<=10;i++){
		cout<<num<<"X"<<i<<"="<<num * i<<"\n";
	}
	
}
