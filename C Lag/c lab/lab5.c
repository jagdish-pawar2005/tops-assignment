#include<stdio.h>
main(){
	int num , month;
	//check the even odd
	printf("enter an integer :");
	scanf("\n %d",&num);

	if(num % 2==0)
	{
		printf("the number is odd");
	}
	else
	{
		printf("the number is even");
	}
	
	//display the month name
	
	printf("\n Enter the number[1-12] for get the month name: ");
	scanf("\n %d",&month);
	
	switch(month){
		case 1:printf("january");
			break;
		case 2:printf("february");
			break;
		case 3:printf("march");
			break;
		case 4:printf("april");
			break;
		case 5:printf("may");
			break;
		case 6:printf("june");
			break;
		case 7:printf("july");
			break;
		case 8:printf("auguest");
			break;
		case 9:printf("september");
			break;
		case 10:printf("ouctomber");
			break;
		case 11:printf("november");
			break;
		case 12:printf("december");
			break;
		default:printf("wrong numm");
			break;
			
	}
}
