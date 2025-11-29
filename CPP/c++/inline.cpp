#include<iostream>
using namespace std;
class Test{
	public:
		inline void Display(){
			cout<<"\n method define outside";
		}
};

main(){
	Test t[3];
	int i;
	for(i=1;i<=3;i++){
		t[i].Display();
		
	}
}
