#include<stdio.h>
main(){
	int i,j ,number,flag;
	
	printf("\n Enter a number:");
	scanf("%d",&number);
	
	for(i=2;i<=number;i++){
		flag=0;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				flag=1;
			}
		}
		
		(flag==0)?printf("\t %d",i):printf("");
	}
}
