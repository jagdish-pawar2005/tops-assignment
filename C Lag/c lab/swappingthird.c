#include<stdio.h>
main(){
	int a,b;
	int temp;
	printf("enter the value of a :");
	scanf("%d",&a);

	printf("enter the value of b :");
	scanf("%d",&b);
    
	printf("\nbefore swapping");
	printf("\n first number:%d",a);
    printf("\n second number:%d",b);	

	
	temp=a;
	a=b;
	b=temp;
	
	//printf("\nafter swapping: %d , %d",a,b);
	printf("\nbefore swapping");
	printf("\nfirst number:%d",a);
    printf("\nsecond number:%d",b);	

}
