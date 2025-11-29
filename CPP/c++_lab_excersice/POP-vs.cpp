#include<iostream>
using namespace std;

float calculateArea(float length,float width){
	return length * width;
}

main(){
	float length, width;
	
	cout<<"Enter length of rectangle:";
	cin>>length;
	cout<<"Enter width of rectangle:";
	cin>>width;
	
	float Area = calculateArea(length,width);
	cout<<"Area of reactangle"<<Area;
}
