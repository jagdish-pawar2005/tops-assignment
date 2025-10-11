#include<stdio.h>
int factFind(int num){
	
	if(num == 1){
		return 1;
	}
	int f;
	f=num*factFind(num-1);
	return f;
}
main(){
	int num;
	printf("Enter a number :- ");
	scanf("%d",&num);
	printf("\n %d of factorial is %d",num,factFind(num));
}
