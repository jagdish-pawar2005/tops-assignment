#include<stdio.h>
main(){
	int x,y;
	printf("enter the value of x and y :");
	scanf("%d %d",&x,&y);
	
	printf("\n before the swpping x and y :%d %d",x,y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("\n after the swpping x and y :%d %d",x,y);

}
