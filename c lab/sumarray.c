#include<stdio.h>
main(){
	int a[10],i,sum;
		for(i=0;i<10;i++){
		printf("\n Enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	
	printf("\n even number:");
	for(i=0;i<10;i++){
		if(a[i]%2==0){
			//printf("%d",i);
			sum=sum+a[i];
		}
	}
	for(i=0;i<10;i++)
		{
		printf("\n a[%d]=%d",i,a[i]);
	}
	printf("\n sum=%d",sum);
}
