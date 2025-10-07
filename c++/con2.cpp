#include<iostream>
using namespace std;
class Maths{
	public:
		Maths(int r){
			cout<<"\n area of circle="<<(3.14*r*r);
		}
		Maths(int l, int b){
			cout<<"\n area of rect"<<(l*b);
		}
};
main(){
	Maths m1(3);
	Maths(100,200); 
}

