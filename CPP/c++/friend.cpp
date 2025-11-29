#include<iostream>
using namespace std;
class Test{
	int a;
	public:
		Test(int a){
			this->a=a;
		}
		friend void display(Test);
};
void display(Test t1){
	cout<<"\n a="<<t1.a;
}

main(){
	Test t1(3);
	display(t1);
}
