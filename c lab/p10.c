#include<stdio.h>
void main(){
	int n,i,j;
	printf("Enter the number of the row:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i+j)%2==0){
				printf("1 ");
			}
			else {
				printf("0 ");
			}
		}
		printf("\n");
	}
}
