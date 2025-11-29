#include<iostream>
using namespace std;
class Test{
	int a;
	public:
		Test(int a){
			this->a=a;
		}
		friend class FriendClass;
};
class FriendClass{
	public:
		void display(Test t1){
			cout<<"\n a="<<t1.a;
		}
};
main(){
	Test t1(3);
	FriendClass f1;
	f1.display(t1);
}
