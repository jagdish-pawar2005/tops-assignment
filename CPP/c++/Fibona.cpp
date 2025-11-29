#include<iostream>
using namespace std;
class Fibona{
	public:
		int x1;
		int x2;
		int i,n,ans;
		
		void getNumber(){
			cout<<"\n Enter num";
			cin>>n;
		}
		
		void genFib(){
			x1=0;
			x2=1;
			cout<<x1<<"\t"<<x2;
			for(i=1;i<=n;i++){
				ans=x1+x2;
				cout<<"\t"<<ans;
				x1=x2;
				x2=ans;
			}
		}
};
main(){
	Fibona f1;
	f1.getNumber();
	f1.genFib();
}
