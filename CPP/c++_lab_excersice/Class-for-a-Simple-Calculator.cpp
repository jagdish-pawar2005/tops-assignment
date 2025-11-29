#include<iostream>
using namespace std;

class Calculator{
	public:
		float add(float a, float b){
			return a+b;
		}
		float sub(float a, float b){
			return a-b;
		}
		float mul(float a,float b){
			return a*b;
		}
		float div(float a,float b){
			if(b!=0){
				return a/b;
			}
			else {
            cout << "Error! Division by zero is not allowed.\n";
        	}
	}
};
main(){
	Calculator calc;
	float num1,num2;
	
	cout<<"\n Enter two number:";
	cin>> num1 >> num2;
	cout << "\nAddition: " << calc.add(num1, num2);
    cout << "\nSubtraction: " << calc.sub(num1, num2);
    cout << "\nMultiplication: " << calc.mul(num1, num2);
    cout << "\nDivision: " << calc.div(num1, num2);

}
