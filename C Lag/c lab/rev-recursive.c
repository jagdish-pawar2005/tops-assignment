#include<stdio.h>
int revNumber(int num){
	int rem;
	static int rev=0;
	if(num==0){
		return 0;
		
	}
	rem = num%10;
	rev=rev*10+rem;
	revNumber(num/10);
	return rev;
}
main(){
	int rev = revNumber(1234);
	printf("\n rev=%d",rev);
}
