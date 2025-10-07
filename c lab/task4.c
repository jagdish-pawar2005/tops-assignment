#include<stdio.h>
void main(){
	int n,arm=0,r,c;
	printf("\n Enter the number:");
	scanf("%d",&n);
	c=n;
	
	while(n>0){
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if(c==arm){
		printf("\narmstrong");
	}
	else
	{
		printf("\n not armstrong");
		
	}
}
