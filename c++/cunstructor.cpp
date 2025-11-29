#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b;
		Maths(){
			cout<<"\n defzault constructor called ";
		}
		Maths(int x , int y){
			a=x;
			ab=y;
		}
		Maths(Maths & m2){
			a= m2.a;
			b= m2.b;
		}
		void display(){
			cout<<"\n a="<<a;
			cout<<"\n b="<<b;
		}
		
		main(){
			cout<<"\n Simple cunstructor";
			Maths m1;
			m1.display();
		}
};
