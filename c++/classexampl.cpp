#include<iostream>
using namespace std;
class Product{
	public:
		int pid;
		char pname[20];
		float price;
		
		void getProduct(){
			cout<<"\n  pid pname price";
			cin>>pid>>pname>>price;
		}
		void showProduct(){
			cout<<"\n pid"<<pid;
			cout<<"\n pname"<<pname;
			cout<<"\n price"<<price;
		}
		
};
main(){	
	int i;
	 Product p[3];
	 for(i=0;i<3;i++){
	 	cout<<"\n Enter product details"<<i+1;
	 	p[i].getProduct();	
	}
	  for(i=0;i<3;i++){
	 	cout<<"\n show product details"<<i+1;
	 	p[i].showProduct();	
	}
}
