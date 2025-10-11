#include<stdio.h>
main(){
	int n = 5 ,i,j;
	
	for(i=0;i<n;i++){
		
		//left star
		for(j=0 ; j<n - i; j++){
			printf("* ");
		}
		
		//middle star
		for(j=0; j< 2 * i; j++){
			printf("  ");
		}		
		//right star
		for(j=0 ; j<n -i; j++){
			printf("* ");
		}
		
	printf("\n");
	}
}
