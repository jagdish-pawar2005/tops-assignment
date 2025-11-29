#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b;
		Maths(){
			cout<<"default Con..";
		}
		Maths(int x,int y ){
			a=x;
			b=y;			
		}
		Maths(Maths &m2){
			a=m2.a;
			b=m2.b;
		}
		void display(){
			cout<<"\n a= "<<a;
			cout<<"\n b= "<<b;
		}
		
		
};
main(){
	Maths m;
	cout<<"\n parameterize con";
	Maths m2(12,34);
	m2.display();
	cout<<"\n copy constructor";
	Maths m3=m2;
	m3.display(); 
	
}
