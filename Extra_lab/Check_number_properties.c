#include<stdio.h>
void main(){
	int ch;
	int num;
	printf("Menu");
	printf("\n 1.Check number  even odd");
	printf("\n 2.check number is positive, negative, or zero.");
	printf("\n 3.Check number is a multiple of both 3 and 5");
	printf("\n Enter your choice :- ");
	scanf("%d",&ch);
	printf("\n Enter a number :- ");
		scanf("%d",&num);
	switch(ch){
		case 1:
		
		if(num%2==0){
			printf("This number is even");
		}	
		else{
			printf("This number is odd");
		}
		break;
		case 2:
			if(num>0){
				printf("This number is positive");
			}	
			else if(num<0){
				printf("This number is negative ");
			}
			else{
				printf("This number is zero");
			}
		break;
		case 3:
			if(num%3==0 && num%5==0){
				printf("The number is a multiple of both 3 and 5.\n");
			}
			else{
				printf("The number is NOT a multiple of both 3 and 5.\n");
			}
			break;
		default:
			printf("wrong choice..");
	}
}
