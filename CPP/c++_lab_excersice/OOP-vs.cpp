#include<iostream>				//Area of rectangle 
using namespace std;

class Rectangle{
	private:
		float length;
		float width;

	public:
		void getData(){
			cout<<"length:";
			cin>>length;
			cout<<"width:";
			cin>>width;
		}
		
		float calculateArea(){
			return length * width;
		}
		void displayArea(){
			cout<<"Area of Reactangle:"<<calculateArea();
		}
};
main(){
	Rectangle rect;//object Creation
	rect.getData();
	rect.displayArea();
}
