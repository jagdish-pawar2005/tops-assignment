#include<stdio.h>
main(){
	int i;
	//using for loop
	printf("using for loop \n");
	for(i=1;i<=10;i++){
		printf("%d \n",i);
	}
	//while loop
	printf("\n while loop");
	i=1;
	while(i<=10){
		printf("\n %d",i);
		i++;
	}
	
	//do while loop 
	printf("using do while loop");
	i=1;
	do{
		printf("\n%d",i);
		i++;
	} while(i<=10);
}
