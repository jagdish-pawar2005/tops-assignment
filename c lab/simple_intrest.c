#include<stdio.h>
main(){
	float p,r,t; //principal ammount ,rate of intrest, time
 	float si; //simple intrest
	
	printf("\nEnter the ammount:");
	scanf("%f",&p);
	
	printf("\nEnter the rate of intrest:");
	scanf("%f",&r);
	
	printf("\nEnter the time ");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	
	printf("\nthe simple intrest is:%2.f",si);
}
