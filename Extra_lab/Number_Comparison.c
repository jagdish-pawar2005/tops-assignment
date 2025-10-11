#include<stdio.h>
void main(){
	int a,b,c,largest,smallest;
	printf("Enter the three numbers :- ");
	scanf("%d %d %d",&a,&b,&c);
//	largest  n number find
	if(a>=b && a>=c){
		largest=a;
	}
	else if(b>=a && b>=c){
		largest=b;
	}
	else{
		largest=c;
	}
	
//	smallest number find
	if(a<=b && a<=c){
		smallest=a;
	}
	else if(b<=a && b<=c){
		smallest=b;
	}
	else{
		smallest=c;
	}
	
	printf("\n largest number = %d",largest);
	printf("\n smallest number = %d",smallest);
	
}
