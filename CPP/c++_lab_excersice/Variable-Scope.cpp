#include<iostream>
using namespace std;

int globleVar=10;//globle variable

void displayScope(){
	int localVar=5;//local variable
	
	cout<<"\n INSIDE FUNCTION :";
	cout<<"\n Globle variable="<<globleVar;
	cout<<"\n Local variable="<<localVar;
	
	globleVar = globleVar + 5;
}

int main(){
	int localVar = 20;
	
	cout<<"\n BEFORE CALLING FUNCTION:";
	cout<<"\n Globle variable="<<globleVar;
	cout<<"\n Local variable="<<localVar;
	
	displayScope();
	
	cout<<"\n AFTER CALLING FUNCTION:";
	cout<<"\n Globle variable="<<globleVar;
	cout<<"\n Local variable="<<localVar;
	
}
