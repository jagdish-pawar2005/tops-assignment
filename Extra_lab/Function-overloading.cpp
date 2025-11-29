#include<iostream>
using namespace std;
class Maths{
	public:
		int area(int r){
			cout<<"\n area of circle="<<(3.14*r*r);
		}
		int area(int l,int b){
			cout<<"\n area of rect="<<(l*b);
		}
};
main(){
	Maths m1;
	m1.area(12,13);
	m1.area(14);
}
