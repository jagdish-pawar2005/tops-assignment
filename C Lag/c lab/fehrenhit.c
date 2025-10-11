#include<stdio.h>
main(){
	float celsius,ferenhit;
	
	printf("\nenter the temprature in celsius:");
	scanf("%f",&celsius);
	
	ferenhit = ((celsius * 9)/5) +32;
	
	printf("\n %2.f celsius= %2.f ferenhit \n",celsius,ferenhit);
}
