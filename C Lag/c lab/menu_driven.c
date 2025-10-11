#include<stdio.h>


 void main(){
 	
 	int choice;
 	float rad,side,length,width,PI=3.14;
 	
 	
 	printf("\n Enter your choice \n1 for circle \n2 for square\n3 rectangle\nChoice: ");
 	
 	scanf("%d",&choice);
 	
 	switch(choice)
 	{
 		case 1: printf("\n Enter radius: ");
 				scanf("%f",&rad);
 				printf("\nArea of circle is: %f", PI * rad * rad);
 				break;
 		case 2: printf("\n Enter side: ");
 				scanf("%f",&side);
 				printf("\nArea of square is: %f", side * side);
 				break;
 		case 3: printf("\n Enter length and width: ");
 				scanf("%f %f",&length,&width);
 				printf("\nArea of reactangle is: %f", length * width);
 				break;
	 }
 }
