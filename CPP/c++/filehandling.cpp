#include<iostream>
#include<fstream>
using namespace std;
main(){
	char data[100];
	ofstream f1;
	f1.open("cpptxt.txt");
	f1<<"HELLO WORLD";
	f1.close();
	
	ifstream f2;
	f2.open("cpptxt.txt");
	f2.getline("data",100);
	cout<<"data"<<data;
	f2.close();
}
