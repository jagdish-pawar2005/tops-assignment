#include<stdio.h>
main(){
	int number;
	printf("\nEnter the number:");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("the number is odd");
	}
	else
	{
		printf("the number is even");
	}
}
