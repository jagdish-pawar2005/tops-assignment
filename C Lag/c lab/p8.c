#include<stdio.h>
void main(){
	int i,j,n;
	char ch;
	printf("Enter the number of row :- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf("  ");
		}
		ch='a'+(i-1);
		for(j=1;j<=i;j++){
			printf("%c ",ch);
		}
		printf("\n");
	}
}
