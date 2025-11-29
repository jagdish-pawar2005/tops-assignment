#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b,c,d;
		Maths(int a,int b){
			this->a=a;
			this->b=b;
		}
		void display(){
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
main(){
	Maths *m1= new Maths(12,34);
	m1->display();
}
