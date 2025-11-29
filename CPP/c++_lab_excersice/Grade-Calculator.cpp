#include<iostream>
using namespace std;
main(){
	int marks;
	
	cout<<"Enter the no.(0-100)"<<endl;
	cin>>marks;
	
	if(marks>=90){
		cout<<"grade:A+";
	}
	else if(marks>=80){
		cout<<"grade A";
	}
	else if(marks>=70){
		cout<<"grade B";
	}
	else if(marks>=60){
		cout<<"grade C";
	}
	else if(marks>=50){
		cout<<"grade D";
	}
	else {
		cout<<"grade F(Fail)";
	}

}
