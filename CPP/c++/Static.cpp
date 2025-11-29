#include<iostream>
using namespace std;
class StaticExample{
	public:
		static int objCount;
		StaticExample(){
			objCount++;
		}
		
		static void printCount(){
			cout<<"\n total object = "<<StaticExample::objCount;
		}
};
int StaticExample::objCount=0;
main(){
	StaticExample s1,s2,s3;
	cout<<"\n using s1"<<s3.objCount;
	StaticExample::printCount();
}
