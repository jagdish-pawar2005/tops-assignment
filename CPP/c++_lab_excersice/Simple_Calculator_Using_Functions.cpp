#include<iostream>
using namespace std;

float add(float a, float b){
	return a+b;
}
float subtract(float a, float b){
	return a-b;
}
float multiply(float a, float b){
	return a*b;
}
float divide(float a, float b){
	if(b!=0)
		return a/b;
	else{
		cout<<"\n Error divsion by zero!";
	}
}

int main(){
	float num1,num2;
	char ope;
	
	cout<<"\n Enter first no.:";
	cin>>num1;
	cout<<"\n Choose operation (+,-,*,/)";
	cin>>ope;
	cout<<"\n Enter Second no.:";
	cin>>num2;
	
	float result;
	switch(ope){
		case '+':
			result = add(num1 , num2);
			break;
		
		case '-':
			result= subtract(num1 , num2);
			break;
		
		case '*':
			result = multiply(num1 , num2);
			break;
		
		case '/':
			result=divide(num1 , num2);
			break;
		
		default:
			cout<<"\n Invalid Operator..!";
	}
	cout<<"\n Result:=>"<<result;
	
}
