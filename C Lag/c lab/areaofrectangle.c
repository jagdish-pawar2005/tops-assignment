#include<stdio.h>
main(){
	float length,width,area;
	
	printf("\nEnter the value of length:");
	scanf("%f",&length);
	
	printf("\nEnter the value of width:");
	scanf("%f",&width);
	
	area=length*width;
	printf("\nthe area of reactangle is %2.f",area);
}
