#include<stdio.h>
main(){
	int number;
	printf("\n Enter the number:");
	scanf("%d",&number);
	
	if(number %2==0){
		printf("\n the number is even");
	}
	else{
		printf("\n the number is odd");
	}
}
