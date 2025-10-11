#include<stdio.h>
main(){
	int a[5];
	int i;
	for(i=0;i<5;i++){
		printf("\n Enter %d array :- ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
}
