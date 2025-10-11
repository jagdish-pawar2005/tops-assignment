#include<stdio.h>
 main(){
	int i,j,n;
	char alphabet='A';
	printf("Enter the number of row : ");
	scanf("%d",&n);
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%c ", alphabet);
			alphabet++;
		}
		printf("\n");
	}
}

