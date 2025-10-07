#include<stdio.h>
main(){
	// datatype array_name[size]
	int a[5];
	int i;
	for(i=0;i<5;i++){
		printf("\n Enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
}
