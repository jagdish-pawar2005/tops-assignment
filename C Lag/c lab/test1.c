#include<stdio.h>
int i;
int factFind(int n){
	int f= 1;
	//for(i=1;i<n;i++){
	//	f=f*i;
	//}
	if(n==1){
		return 1;
	}
	f=n*factFind(n-1);
	
	return f;
}
main(){
	printf("\n factorial is %d",factfind(5));
}
