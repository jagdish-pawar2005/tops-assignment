#include<stdio.h>
#include<math.h>
main(){
	int num,numCopy,rem,pow1=0,sum=0;
	
	printf("\n Enter the number:");
	scanf("%d",&num);
	numCopy=num;
	
	//find pow
	 while(num != 0){
	 	pow1=pow1+1;
	 	num=num/10;
	 }
	 
	 num = numCopy;
	 printf("\n num=%d",num);
	 while(num != 0){
	 	rem = num%10;
	 	sum=sum+pow(rem,pow1);
	 	num=num/10;
	 }
	 printf("\n pow=%d",pow1);
	 printf("\n sum=%d",sum);
	 
	 (numCopy==sum)?printf("\narmstrong"):printf("\n not armstrong");t
	
}
