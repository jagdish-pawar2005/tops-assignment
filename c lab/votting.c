#include<stdio.h>
main(){
	int age;
	
	printf("\n enter your age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\nyour eligible for votting.");
	}
	else
	{
		printf("\nSorry your not eligible.");
	}
}
