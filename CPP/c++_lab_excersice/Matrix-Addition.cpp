#include<iostream>
using namespace std;

main(){
	int A[2][2], B[2][2], C[2][2];
	
	cout<<" Enter first element of 2 X 2 Matrix:\n";
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>A[i][j];
		}
	}
	cout<<"\n Enter second element of 2 X 2 Matrix:\n";
	for(int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			cin>>B[i][j];
		}
	}
	//Addition of two Matrix
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	cout<<"Result After Addition :\n";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<C[i][j]<<"\t";
		}
		cout<<endl;
	}
}
