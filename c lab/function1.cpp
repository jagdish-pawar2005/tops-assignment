#include<stdio.h>
int factFind(int num){
	if(num==1){
		return 1;
	}
	int f;
	f=num*factFind( num-1);
	return f;
	}	
	main(){
		printf("\n 5 of factorrial =%d",factFind(5));
	}


