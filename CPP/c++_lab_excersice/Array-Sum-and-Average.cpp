#include<iostream>
using namespace std;

main(){
	int n;
	cout<<"\n Enter the Number of Elements:";
	cin>>n;

	int arr[100];
	int sum=0;
	float average;

	cout<<"Enter"<<n<<"number's:";
	for(int i=0;i<n;i++){
		cin>> arr[i];
		sum += arr[i];
	}
	
	average= (float)sum/n;
	cout<<"\n sum of  element="<<sum;
	cout<<"\n average of element="<<average;
}
