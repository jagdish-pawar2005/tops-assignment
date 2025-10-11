#include<stdio.h>
void main(){
	int num,flag,i,j;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	for(i=2;i<=num;i++){
		flag=0;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				flag=1;
			}
		}
		(flag==0)?printf("\t %d",i):printf("");
	}
	
}


