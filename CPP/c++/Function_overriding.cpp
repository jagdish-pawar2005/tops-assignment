#include<iostream>
using namespace std;
class Area {
	public:
		virtual void area(){
			cout<<"area";
			
		}
};
class Reactangle:public Area{
	public:
		int l,b;
		Reactangle(int l,int b){
			this->l=l;
			this->b=b;
		}
		void Area(){
			cout<<"area = "<<(l*b);
			}
	};
	class Circle : public Area{
	
			public:
				int r;
				Circle(int r){
					this->r=r;
				}
				void area(){
					cout<<"\n area of circle="<<(3.14*r*r);
				}	
};
main(){
	Circle c1(12);
	c1.area();
	Reactangle r1(12,34);
	r1.area();
}
