#include<stdio.h>
int main(){
	int a[5];
	int i,j,temp;
	for(i=0;i<5;i++){
		printf("\nenter the array ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
		if(a[i]>a[j]){ //<
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}	
		}
	}
	for(i=0;i<5;i++){
		printf("\n array of [%d]=%d",i,a[i]);
	}
}
