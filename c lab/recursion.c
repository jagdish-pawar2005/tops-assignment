#include<stdio.h>
int factfind(int num){
	if(num==1){
		return 1;
	}
	int f;
	f=num*factfind(num-1);
	return f;
}

main(){
	printf("\n 5 oof fact = %d ",factfind(5));
}
