#include<stdio.h>
void main(){
	int i=2,j,number,flag;
	
	printf("enter the number:");
	scanf("%d",&number);
	
	while(i<=number){
		
		flag=0;
		j=2;
		while(j<=i/2){
			
			if(i%j==0){
				flag=1;
				break;
			}j++;
		}
		if(flag==0){
			printf("%d ",i);
		}i++;
	}
}
