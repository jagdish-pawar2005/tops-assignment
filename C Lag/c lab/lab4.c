#include<stdio.h>
main(){
	int a , b;
	
	printf("Enter two integers :");
	scanf("%d %d",&a,&b);
	
	// arithematic operation
	printf("\n sum : %d ",a+b);
	printf("\n sub : %d ",a-b);
	printf("\n mul : %d ",a*b);
	printf("\n div : %d ",a/b);
	printf("\n mod : %d ",a%b);
	
	//relational operation 
	printf("\n a==b : %d ",a==b);
	printf("\n a!=b : %d ",a!=b);
	printf("\n a<b : %d ",a<b);
	printf("\n a>b : %d ",a>b);

	//logical operation.
	printf("\n a&&b : %d ",a&&b);
	printf("\n a||b : %d ",a||b);
	printf("\n !a : %d ",!a);
	printf("\n !b : %d ",!b);
}
